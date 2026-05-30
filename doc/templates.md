# Template Engine

ringhttp includes a compile-time template engine. Templates are `.lt` files compiled to LitaC source before the main build runs, so there is no runtime parsing overhead.

## Template Syntax

Templates use JSP-style tags:

| Tag | Purpose |
|-----|---------|
| `<% code %>` | Emit raw LitaC code (statements, variable declarations, etc.) |
| `<%= expr %>` | Append `expr` to the response body (calls `out.appendString(expr)`) |

### Directives (inside `<% %>`)

| Directive | Example | Effect |
|-----------|---------|--------|
| `@type "module" :: TypeName` | `@type "models/user" :: User` | Declares the input type. Generates a typed function signature (`input: *TypeName`) and adds the module import. |
| `@import "module/path"` | `@import "models/tag"` | Adds a LitaC import to the generated file. |
| `@load "file.lt"` | `@load "templates/header.html.lt"` | Calls the partial's `_WriteTemplate` function, passing `input` unchanged. |
| `@load "file.lt" field` | `@load "templates/card.html.lt" input.card` | Calls the partial passing a sub-field as input. |

### Input type

Without `@type`, the generated function signature is:

```litac
public func page_html_lt_WriteTemplate(resp: *HttpResponse, input: *void) : Status
```

You cast manually inside the template body:

```html
<% var data = input as (*PageData) %>
<h1><%= data.title %></h1>
```

With `@type`, the signature is typed and no cast is needed:

```html
<% @type "models/user" :: User %>
<h1>Hello, <%= input.name %></h1>
```

## Generated Output

The generator produces one file per template:

```
src/gen/tmpl_page_html_lt.lita      — generated function for page.html.lt
src/gen/tmpl_greeting_html_lt.lita  — generated function for greeting.html.lt
src/gen/templates.lita              — dispatch + named helpers on HttpResponse
```

`templates.lita` provides two call styles:

```litac
// String dispatch (runtime name lookup, input is *void)
resp.template("page_html_lt", &pageData)

// Typed named helper (compile-time type checked for @type templates)
resp.tmpl_greeting_html_lt(&user)
```

## Setting Up Template Generation in Your Project

ringhttp is a library — template generation runs in your app's `pre_main.lita` via the LitaC `pre_build_command` feature.

### 1. Create `src/pre_main.lita`

```litac
import "std/libc"
import "std/mem"
import "std/string"

import "ring/template"
import "ring/http_common"

func main(len: i32, args: **char) : i32 {
    var templateInputDir = "static/templates"
    if(len > 1) {
        templateInputDir = args[1]
    }

    var genOutputDir = "src/gen"
    if(len > 2) {
        genOutputDir = args[2]
    }

    printf("Generating templates from '%s' -> '%s'\n", templateInputDir, genOutputDir)

    var status = GenerateTemplates(
        templateInputDir.toString(),
        genOutputDir,
        defaultAllocator
    )

    if(status != Status.OK) {
        printf("Template generation failed: %s\n", StatusAsStr(status))
        return 1
    }

    return 0
}
```

### 2. Add `pre_build_command` to `pkg.json`

```json
"pre_build_command": {
    "default": {
        "default": {
            "default": {
                "cc": "gcc",
                "cc_options": "-g -std=gnu99 %input% -o %output%",
                "lita_options": ["-run"]
            }
        }
    }
}
```

### 3. Place your templates

Put `.lt` files under `bin/static/templates/` (or the directory you configured). The directory is scanned recursively; only `.lt` files are processed.

### 4. Build

```sh
litac build
```

The pre-build step runs first, writing the generated files into `src/gen/`. The main build then compiles everything including those generated sources.

## Example Template

`bin/static/templates/greeting.html.lt`:

```html
<% @type "models/user" :: User %>
<!DOCTYPE html>
<html>
<body>
  <h1>Hello, <%= input.name %>!</h1>
</body>
</html>
```

Route handler:

```litac
func greetingHandler(req: *HttpRequest, resp: *HttpResponse) : Status {
    var user = User{ .name = $"World" }
    return resp.tmpl_greeting_html_lt(&user)
}
```
