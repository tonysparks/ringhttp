#!/bin/bash

curl --http1.1 -X POST http://localhost:8080/submit \
     -H "Transfer-Encoding: chunked" \
     -H "Content-Type: text/plain" \
     --data-binary @- <<EOF
When I was an alien, cultures weren't opinions
Gotta find a way, find a way when I'm there
Gotta find a way, a better way, I'd better wait

Never met a wise man
If so, it's a woman

Gotta find a way, find a way when I'm there
Gotta find a way, a better way, I'd better wait
Gotta find a way, find a way when I'm there
Gotta find a way, a better way, I'd better wait

Just because you're paranoid don't mean they're not after you

Gotta find a way, find a way, when I'm there
Gotta find a way, a better way, I'd better wait
Gotta find a way, find a way, when I'm there
Gotta find a way, a better way, I'd better wait
Gotta find a way, find a way, when I'm there
Gotta find a way, a better way, I'd better wait
Gotta find a way, find a way, when I'm there
Gotta find a way, aah, ahh!
Yeah!
EOF
