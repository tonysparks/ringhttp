#ifndef _LITAC_HEADER_H
#define _LITAC_HEADER_H

// Generated on Sat Mar 14 11:12:16 2026

#include <stdint.h>
#include <stddef.h>
typedef int8_t    litaC_i8;
typedef int16_t   litaC_i16;
typedef int32_t   litaC_i32;
typedef int64_t   litaC_i64;
typedef uint8_t   litaC_u8;
typedef uint16_t  litaC_u16;
typedef uint32_t  litaC_u32;
typedef uint64_t  litaC_u64;
typedef float     litaC_f32;
typedef double    litaC_f64;
//typedef int8_t    litaC_bool;
typedef size_t    litaC_usize;

#if _MSC_VER
#define LITAC_THREADLOCAL __declspec(thread)
#define LITAC_INLINE static inline __forceinline
#define LITAC_NOINLINE __declspec(noinline)
#define LITAC_PACKED __pragma(pack(push, 1))
#define LITAC_PACKED_POP __pragma(pack(pop))
#define LITAC_EXPORT __declspec(dllexport)
#endif

#if __GNUC__
#define LITAC_THREADLOCAL __thread
#define LITAC_INLINE static inline __attribute__((always_inline))
#define LITAC_NOINLINE __attribute__((noinline))
#define LITAC_PACKED _Pragma("pack(push)")
#define LITAC_PACKED_POP _Pragma("pack(pop)")
#define LITAC_EXPORT __attribute__((visibility("default")))
#endif

#if __TINYC__
#define LITAC_THREADLOCAL
#define LITAC_INLINE
#define LITAC_NOINLINE
#define LITAC_PACKED __attribute__((packed))
#define LITAC_PACKED_POP
#define LITAC_EXPORT __attribute__((dllexport))
#endif

typedef int8_t litaC_bool;
#define litaC_true (1)
#define litaC_false (0)
#define litaC_void void
typedef char   litaC_char;

#line 318 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#define litaC_std__array__MAX_LEVELS (300)

#line 14 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"

#define litaC_std__mem__KiB (1024)

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"

#define litaC_std__mem__MiB (1024 * litaC_std__mem__KiB)

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"

#define litaC_std__mem__GiB (1024 * litaC_std__mem__MiB)

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"

#define litaC_std__string__builder__MAX_BUFFER_SIZE (32)

#line 3 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

#define litaC_std__limits__MAX_U8 ((~(0U) & 0xFF))

#line 4 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

#define litaC_std__limits__MAX_U16 ((~(0U) & 0xFFFF))

#line 5 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

#define litaC_std__limits__MAX_U32 ((~(0UL) & 0xFFFFFFFF))

#line 6 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

#define litaC_std__limits__MAX_U64 (~(0UL))

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_i32 litaC_std__limits__MAX_I8 = (litaC_i32)(litaC_std__limits__MAX_U8 >> 1);

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

#define litaC_std__limits__MIN_I8 ((-(litaC_std__limits__MAX_I8) - 1))

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_i32 litaC_std__limits__MAX_I16 = (litaC_i32)(litaC_std__limits__MAX_U16 >> 1);

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

#define litaC_std__limits__MIN_I16 ((-(litaC_std__limits__MAX_I16) - 1))

#line 14 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_i32 litaC_std__limits__MAX_I32 = (litaC_i32)(~(0U) >> 1);

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

#define litaC_std__limits__MIN_I32 ((-(litaC_std__limits__MAX_I32) - 1))

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_i64 litaC_std__limits__MAX_I64 = (litaC_i64)(~(0UL) >> 1);

#line 18 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

#define litaC_std__limits__MIN_I64 ((-(litaC_std__limits__MAX_I64) - 1))

#line 865 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

#define litaC_std__json__MAX_MESSAGE_SIZE (256)


#line 14 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"

#define litaC_std__unicode__utf8__INVALID_RUNE (0xefbfbd)


#line 17 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"

#define litaC_std__unicode__utf8__MAX_RUNE (0x10ffff)


#line 20 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"

#define litaC_std__unicode__utf8__MAX_RUNE_BYTES (4)

#line 4 "/Users/tony/projects/ringhttp/src/http_common.lita"

#define litaC_http_common__MAX_URL_LENGTH_DEFAULT (8000)
// The latest version of this library is available on GitHub;
// https://github.com/sheredom/utf8.h

// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.
//
// In jurisdictions that recognize copyright laws, the author or authors
// of this software dedicate any and all copyright interest in the
// software to the public domain. We make this dedication for the benefit
// of the public at large and to the detriment of our heirs and
// successors. We intend this dedication to be an overt act of
// relinquishment in perpetuity of all present and future rights to this
// software under copyright law.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
// OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//
// For more information, please refer to <http://unlicense.org/>

#ifndef SHEREDOM_UTF8_H_INCLUDED
#define SHEREDOM_UTF8_H_INCLUDED

#if defined(_MSC_VER)
#pragma warning(push)

/* disable warning: no function prototype given: converting '()' to '(void)' */
#pragma warning(disable : 4255)

/* disable warning: '__cplusplus' is not defined as a preprocessor macro,
 * replacing with '0' for '#if/#elif' */
#pragma warning(disable : 4668)

/* disable warning: bytes padding added after construct */
#pragma warning(disable : 4820)
#endif

#include <stddef.h>
#include <stdlib.h>

#if defined(_MSC_VER)
#pragma warning(pop)
#endif

#if defined(_MSC_VER) && (_MSC_VER < 1920)
typedef __int32 utf8_int32_t;
#else
#include <stdint.h>
typedef int32_t utf8_int32_t;
#endif

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wold-style-cast"
#pragma clang diagnostic ignored "-Wcast-qual"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER)
#define utf8_nonnull
#define utf8_pure
#define utf8_restrict __restrict
#define utf8_weak __inline
#elif defined(__clang__) || defined(__GNUC__) || defined(__TINYC__)
#define utf8_nonnull __attribute__((nonnull))
#define utf8_pure __attribute__((pure))
#define utf8_restrict __restrict__
#define utf8_weak __attribute__((weak))
#else
#error Non clang, non gcc, non MSVC, non TinyCC compiler found!
#endif

#ifdef __cplusplus
#define utf8_null NULL
#else
#define utf8_null 0
#endif

// Return less than 0, 0, greater than 0 if src1 < src2, src1 == src2, src1 >
// src2 respectively, case insensitive.
utf8_nonnull utf8_pure utf8_weak int utf8casecmp(const void *src1,
                                                 const void *src2);

// Append the utf8 string src onto the utf8 string dst.
utf8_nonnull utf8_weak void *utf8cat(void *utf8_restrict dst,
                                     const void *utf8_restrict src);

// Find the first match of the utf8 codepoint chr in the utf8 string src.
utf8_nonnull utf8_pure utf8_weak void *utf8chr(const void *src,
                                               utf8_int32_t chr);

// Return less than 0, 0, greater than 0 if src1 < src2,
// src1 == src2, src1 > src2 respectively.
utf8_nonnull utf8_pure utf8_weak int utf8cmp(const void *src1,
                                             const void *src2);

// Copy the utf8 string src onto the memory allocated in dst.
utf8_nonnull utf8_weak void *utf8cpy(void *utf8_restrict dst,
                                     const void *utf8_restrict src);

// Number of utf8 codepoints in the utf8 string src that consists entirely
// of utf8 codepoints not from the utf8 string reject.
utf8_nonnull utf8_pure utf8_weak size_t utf8cspn(const void *src,
                                                 const void *reject);

// Duplicate the utf8 string src by getting its size, malloc'ing a new buffer
// copying over the data, and returning that. Or 0 if malloc failed.
utf8_weak void *utf8dup(const void *src);

// Number of utf8 codepoints in the utf8 string str,
// excluding the null terminating byte.
utf8_nonnull utf8_pure utf8_weak size_t utf8len(const void *str);

// Similar to utf8len, except that only at most n bytes of src are looked.
utf8_nonnull utf8_pure utf8_weak size_t utf8nlen(const void *str, size_t n);

// Return less than 0, 0, greater than 0 if src1 < src2, src1 == src2, src1 >
// src2 respectively, case insensitive. Checking at most n bytes of each utf8
// string.
utf8_nonnull utf8_pure utf8_weak int utf8ncasecmp(const void *src1,
                                                  const void *src2, size_t n);

// Append the utf8 string src onto the utf8 string dst,
// writing at most n+1 bytes. Can produce an invalid utf8
// string if n falls partway through a utf8 codepoint.
utf8_nonnull utf8_weak void *utf8ncat(void *utf8_restrict dst,
                                      const void *utf8_restrict src, size_t n);

// Return less than 0, 0, greater than 0 if src1 < src2,
// src1 == src2, src1 > src2 respectively. Checking at most n
// bytes of each utf8 string.
utf8_nonnull utf8_pure utf8_weak int utf8ncmp(const void *src1,
                                              const void *src2, size_t n);

// Copy the utf8 string src onto the memory allocated in dst.
// Copies at most n bytes. If n falls partway through a utf8
// codepoint, or if dst doesn't have enough room for a null
// terminator, the final string will be cut short to preserve
// utf8 validity.

utf8_nonnull utf8_weak void *utf8ncpy(void *utf8_restrict dst,
                                      const void *utf8_restrict src, size_t n);

// Similar to utf8dup, except that at most n bytes of src are copied. If src is
// longer than n, only n bytes are copied and a null byte is added.
//
// Returns a new string if successful, 0 otherwise
utf8_weak void *utf8ndup(const void *src, size_t n);

// Locates the first occurrence in the utf8 string str of any byte in the
// utf8 string accept, or 0 if no match was found.
utf8_nonnull utf8_pure utf8_weak void *utf8pbrk(const void *str,
                                                const void *accept);

// Find the last match of the utf8 codepoint chr in the utf8 string src.
utf8_nonnull utf8_pure utf8_weak void *utf8rchr(const void *src, int chr);

// Number of bytes in the utf8 string str,
// including the null terminating byte.
utf8_nonnull utf8_pure utf8_weak size_t utf8size(const void *str);

// Similar to utf8size, except that the null terminating byte is excluded.
utf8_nonnull utf8_pure utf8_weak size_t utf8size_lazy(const void *str);

// Similar to utf8size, except that only at most n bytes of src are looked and
// the null terminating byte is excluded.
utf8_nonnull utf8_pure utf8_weak size_t utf8nsize_lazy(const void *str, size_t n);

// Number of utf8 codepoints in the utf8 string src that consists entirely
// of utf8 codepoints from the utf8 string accept.
utf8_nonnull utf8_pure utf8_weak size_t utf8spn(const void *src,
                                                const void *accept);

// The position of the utf8 string needle in the utf8 string haystack.
utf8_nonnull utf8_pure utf8_weak void *utf8str(const void *haystack,
                                               const void *needle);

// The position of the utf8 string needle in the utf8 string haystack, case
// insensitive.
utf8_nonnull utf8_pure utf8_weak void *utf8casestr(const void *haystack,
                                                   const void *needle);

// Return 0 on success, or the position of the invalid
// utf8 codepoint on failure.
utf8_nonnull utf8_pure utf8_weak void *utf8valid(const void *str);

// Similar to utf8valid, except that only at most n bytes of src are looked.
utf8_nonnull utf8_pure utf8_weak void *utf8nvalid(const void *str, size_t n);

// Given a null-terminated string, makes the string valid by replacing invalid
// codepoints with a 1-byte replacement. Returns 0 on success.
utf8_nonnull utf8_weak int utf8makevalid(void *str,
                                         const utf8_int32_t replacement);

// Sets out_codepoint to the current utf8 codepoint in str, and returns the
// address of the next utf8 codepoint after the current one in str.
utf8_nonnull utf8_weak void *
utf8codepoint(const void *utf8_restrict str,
              utf8_int32_t *utf8_restrict out_codepoint);

// Calculates the size of the next utf8 codepoint in str.
utf8_nonnull utf8_weak size_t utf8codepointcalcsize(const void *str);

// Returns the size of the given codepoint in bytes.
utf8_weak size_t utf8codepointsize(utf8_int32_t chr);

// Write a codepoint to the given string, and return the address to the next
// place after the written codepoint. Pass how many bytes left in the buffer to
// n. If there is not enough space for the codepoint, this function returns
// null.
utf8_nonnull utf8_weak void *utf8catcodepoint(void *str, utf8_int32_t chr,
                                              size_t n);

// Returns 1 if the given character is lowercase, or 0 if it is not.
utf8_weak int utf8islower(utf8_int32_t chr);

// Returns 1 if the given character is uppercase, or 0 if it is not.
utf8_weak int utf8isupper(utf8_int32_t chr);

// Transform the given string into all lowercase codepoints.
utf8_nonnull utf8_weak void utf8lwr(void *utf8_restrict str);

// Transform the given string into all uppercase codepoints.
utf8_nonnull utf8_weak void utf8upr(void *utf8_restrict str);

// Make a codepoint lower case if possible.
utf8_weak utf8_int32_t utf8lwrcodepoint(utf8_int32_t cp);

// Make a codepoint upper case if possible.
utf8_weak utf8_int32_t utf8uprcodepoint(utf8_int32_t cp);

// Sets out_codepoint to the current utf8 codepoint in str, and returns the
// address of the previous utf8 codepoint before the current one in str.
utf8_nonnull utf8_weak void *
utf8rcodepoint(const void *utf8_restrict str,
               utf8_int32_t *utf8_restrict out_codepoint);

// Duplicate the utf8 string src by getting its size, calling alloc_func_ptr to
// copy over data to a new buffer, and returning that. Or 0 if alloc_func_ptr
// returned null.
utf8_weak void *utf8dup_ex(const void *src,
                           void *(*alloc_func_ptr)(void *, size_t),
                           void *user_data);

// Similar to utf8dup, except that at most n bytes of src are copied. If src is
// longer than n, only n bytes are copied and a null byte is added.
//
// Returns a new string if successful, 0 otherwise.
utf8_weak void *utf8ndup_ex(const void *src, size_t n,
                            void *(*alloc_func_ptr)(void *, size_t),
                            void *user_data);

#undef utf8_weak
#undef utf8_pure
#undef utf8_nonnull

int utf8casecmp(const void *src1, const void *src2) {
  utf8_int32_t src1_lwr_cp, src2_lwr_cp, src1_upr_cp, src2_upr_cp, src1_orig_cp,
      src2_orig_cp;

  for (;;) {
    src1 = utf8codepoint(src1, &src1_orig_cp);
    src2 = utf8codepoint(src2, &src2_orig_cp);

    // lower the srcs if required
    src1_lwr_cp = utf8lwrcodepoint(src1_orig_cp);
    src2_lwr_cp = utf8lwrcodepoint(src2_orig_cp);

    // lower the srcs if required
    src1_upr_cp = utf8uprcodepoint(src1_orig_cp);
    src2_upr_cp = utf8uprcodepoint(src2_orig_cp);

    // check if the lowered codepoints match
    if ((0 == src1_orig_cp) && (0 == src2_orig_cp)) {
      return 0;
    } else if ((src1_lwr_cp == src2_lwr_cp) || (src1_upr_cp == src2_upr_cp)) {
      continue;
    }

    // if they don't match, then we return the difference between the characters
    return src1_lwr_cp - src2_lwr_cp;
  }
}

void *utf8cat(void *utf8_restrict dst, const void *utf8_restrict src) {
  char *d = (char *)dst;
  const char *s = (const char *)src;

  // find the null terminating byte in dst
  while ('\0' != *d) {
    d++;
  }

  // overwriting the null terminating byte in dst, append src byte-by-byte
  while ('\0' != *s) {
    *d++ = *s++;
  }

  // write out a new null terminating byte into dst
  *d = '\0';

  return dst;
}

void *utf8chr(const void *src, utf8_int32_t chr) {
  char c[5] = {'\0', '\0', '\0', '\0', '\0'};

  if (0 == chr) {
    // being asked to return position of null terminating byte, so
    // just run s to the end, and return!
    const char *s = (const char *)src;
    while ('\0' != *s) {
      s++;
    }
    return (void *)s;
  } else if (0 == ((utf8_int32_t)0xffffff80 & chr)) {
    // 1-byte/7-bit ascii
    // (0b0xxxxxxx)
    c[0] = (char)chr;
  } else if (0 == ((utf8_int32_t)0xfffff800 & chr)) {
    // 2-byte/11-bit utf8 code point
    // (0b110xxxxx 0b10xxxxxx)
    c[0] = (char) (0xc0 | (char)(chr >> 6));
    c[1] = (char) (0x80 | (char)(chr & 0x3f));
  } else if (0 == ((utf8_int32_t)0xffff0000 & chr)) {
    // 3-byte/16-bit utf8 code point
    // (0b1110xxxx 0b10xxxxxx 0b10xxxxxx)
    c[0] = (char) (0xe0 | (char)(chr >> 12));
    c[1] = (char) (0x80 | (char)((chr >> 6) & 0x3f));
    c[2] = (char) (0x80 | (char)(chr & 0x3f));
  } else { // if (0 == ((int)0xffe00000 & chr)) {
    // 4-byte/21-bit utf8 code point
    // (0b11110xxx 0b10xxxxxx 0b10xxxxxx 0b10xxxxxx)
    c[0] = (char) (0xf0 | (char)(chr >> 18));
    c[1] = (char) (0x80 | (char)((chr >> 12) & 0x3f));
    c[2] = (char) (0x80 | (char)((chr >> 6) & 0x3f));
    c[3] = (char) (0x80 | (char)(chr & 0x3f));
  }

  // we've made c into a 2 utf8 codepoint string, one for the chr we are
  // seeking, another for the null terminating byte. Now use utf8str to
  // search
  return utf8str(src, c);
}

int utf8cmp(const void *src1, const void *src2) {
  const unsigned char *s1 = (const unsigned char *)src1;
  const unsigned char *s2 = (const unsigned char *)src2;

  while (('\0' != *s1) || ('\0' != *s2)) {
    if (*s1 < *s2) {
      return -1;
    } else if (*s1 > *s2) {
      return 1;
    }

    s1++;
    s2++;
  }

  // both utf8 strings matched
  return 0;
}

int utf8coll(const void *src1, const void *src2);

void *utf8cpy(void *utf8_restrict dst, const void *utf8_restrict src) {
  char *d = (char *)dst;
  const char *s = (const char *)src;

  // overwriting anything previously in dst, write byte-by-byte
  // from src
  while ('\0' != *s) {
    *d++ = *s++;
  }

  // append null terminating byte
  *d = '\0';

  return dst;
}

size_t utf8cspn(const void *src, const void *reject) {
  const char *s = (const char *)src;
  size_t chars = 0;

  while ('\0' != *s) {
    const char *r = (const char *)reject;
    size_t offset = 0;

    while ('\0' != *r) {
      // checking that if *r is the start of a utf8 codepoint
      // (it is not 0b10xxxxxx) and we have successfully matched
      // a previous character (0 < offset) - we found a match
      if ((0x80 != (0xc0 & *r)) && (0 < offset)) {
        return chars;
      } else {
        if (*r == s[offset]) {
          // part of a utf8 codepoint matched, so move our checking
          // onwards to the next byte
          offset++;
          r++;
        } else {
          // r could be in the middle of an unmatching utf8 code point,
          // so we need to march it on to the next character beginning,

          do {
            r++;
          } while (0x80 == (0xc0 & *r));

          // reset offset too as we found a mismatch
          offset = 0;
        }
      }
    }

    // found a match at the end of *r, so didn't get a chance to test it
    if (0 < offset) {
      return chars;
    }

    // the current utf8 codepoint in src did not match reject, but src
    // could have been partway through a utf8 codepoint, so we need to
    // march it onto the next utf8 codepoint starting byte
    do {
      s++;
    } while ((0x80 == (0xc0 & *s)));
    chars++;
  }

  return chars;
}

void *utf8dup(const void *src) { return utf8dup_ex(src, utf8_null, utf8_null); }

void *utf8dup_ex(const void *src, void *(*alloc_func_ptr)(void *, size_t),
                 void *user_data) {
  const char *s = (const char *)src;
  char *n = utf8_null;

  // figure out how many bytes (including the terminator) we need to copy first
  size_t bytes = utf8size(src);

  if (alloc_func_ptr) {
    n = (char *)alloc_func_ptr(user_data, bytes);
  } else {
    n = (char *)malloc(bytes);
  }

  if (utf8_null == n) {
    // out of memory so we bail
    return utf8_null;
  } else {
    bytes = 0;

    // copy src byte-by-byte into our new utf8 string
    while ('\0' != s[bytes]) {
      n[bytes] = s[bytes];
      bytes++;
    }

    // append null terminating byte
    n[bytes] = '\0';
    return n;
  }
}

void *utf8fry(const void *str);

size_t utf8len(const void *str) {
  return utf8nlen(str, SIZE_MAX);
}

size_t utf8nlen(const void *str, size_t n) {
  const unsigned char *s = (const unsigned char *)str;
  const unsigned char *t = s;
  size_t length = 0;

  while ((size_t) (s-t) < n && '\0' != *s) {
    if (0xf0 == (0xf8 & *s)) {
      // 4-byte utf8 code point (began with 0b11110xxx)
      s += 4;
    } else if (0xe0 == (0xf0 & *s)) {
      // 3-byte utf8 code point (began with 0b1110xxxx)
      s += 3;
    } else if (0xc0 == (0xe0 & *s)) {
      // 2-byte utf8 code point (began with 0b110xxxxx)
      s += 2;
    } else { // if (0x00 == (0x80 & *s)) {
      // 1-byte ascii (began with 0b0xxxxxxx)
      s += 1;
    }

    // no matter the bytes we marched s forward by, it was
    // only 1 utf8 codepoint
    length++;
  }

  if ((size_t) (s-t) > n) {
    length--;
  }
  return length;
}

int utf8ncasecmp(const void *src1, const void *src2, size_t n) {
  utf8_int32_t src1_lwr_cp, src2_lwr_cp, src1_upr_cp, src2_upr_cp, src1_orig_cp,
      src2_orig_cp;

  do {
    const unsigned char *const s1 = (const unsigned char *)src1;
    const unsigned char *const s2 = (const unsigned char *)src2;

    // first check that we have enough bytes left in n to contain an entire
    // codepoint
    if (0 == n) {
      return 0;
    }

    if ((1 == n) && ((0xc0 == (0xe0 & *s1)) || (0xc0 == (0xe0 & *s2)))) {
      const utf8_int32_t c1 = (0xe0 & *s1);
      const utf8_int32_t c2 = (0xe0 & *s2);

      if (c1 < c2) {
        return c1 - c2;
      } else {
        return 0;
      }
    }

    if ((2 >= n) && ((0xe0 == (0xf0 & *s1)) || (0xe0 == (0xf0 & *s2)))) {
      const utf8_int32_t c1 = (0xf0 & *s1);
      const utf8_int32_t c2 = (0xf0 & *s2);

      if (c1 < c2) {
        return c1 - c2;
      } else {
        return 0;
      }
    }

    if ((3 >= n) && ((0xf0 == (0xf8 & *s1)) || (0xf0 == (0xf8 & *s2)))) {
      const utf8_int32_t c1 = (0xf8 & *s1);
      const utf8_int32_t c2 = (0xf8 & *s2);

      if (c1 < c2) {
        return c1 - c2;
      } else {
        return 0;
      }
    }

    src1 = utf8codepoint(src1, &src1_orig_cp);
    src2 = utf8codepoint(src2, &src2_orig_cp);
    n -= utf8codepointsize(src1_orig_cp);

    src1_lwr_cp = utf8lwrcodepoint(src1_orig_cp);
    src2_lwr_cp = utf8lwrcodepoint(src2_orig_cp);

    src1_upr_cp = utf8uprcodepoint(src1_orig_cp);
    src2_upr_cp = utf8uprcodepoint(src2_orig_cp);

    // check if the lowered codepoints match
    if ((0 == src1_orig_cp) && (0 == src2_orig_cp)) {
      return 0;
    } else if ((src1_lwr_cp == src2_lwr_cp) || (src1_upr_cp == src2_upr_cp)) {
      continue;
    }

    // if they don't match, then we return the difference between the characters
    return src1_lwr_cp - src2_lwr_cp;
  } while (0 < n);

  // both utf8 strings matched
  return 0;
}

void *utf8ncat(void *utf8_restrict dst, const void *utf8_restrict src,
               size_t n) {
  char *d = (char *)dst;
  const char *s = (const char *)src;

  // find the null terminating byte in dst
  while ('\0' != *d) {
    d++;
  }

  // overwriting the null terminating byte in dst, append src byte-by-byte
  // stopping if we run out of space
  do {
    *d++ = *s++;
  } while (('\0' != *s) && (0 != --n));

  // write out a new null terminating byte into dst
  *d = '\0';

  return dst;
}

int utf8ncmp(const void *src1, const void *src2, size_t n) {
  const unsigned char *s1 = (const unsigned char *)src1;
  const unsigned char *s2 = (const unsigned char *)src2;

  while ((0 != n--) && (('\0' != *s1) || ('\0' != *s2))) {
    if (*s1 < *s2) {
      return -1;
    } else if (*s1 > *s2) {
      return 1;
    }

    s1++;
    s2++;
  }

  // both utf8 strings matched
  return 0;
}

void *utf8ncpy(void *utf8_restrict dst, const void *utf8_restrict src,
               size_t n) {
  char *d = (char *)dst;
  const char *s = (const char *)src;
  size_t index, check_index;

  if (n == 0) {
    return dst;
  }

  // overwriting anything previously in dst, write byte-by-byte
  // from src
  for (index = 0; index < n; index++) {
    d[index] = s[index];
    if ('\0' == s[index]) {
      break;
    }
  }

  for ( check_index = index - 1; check_index > 0 && 0x80 == (0xc0 & d[check_index]); check_index--) {
    // just moving the index
  }

  if (check_index < index && (index - check_index) < utf8codepointsize(d[check_index])) {
    index = check_index;
  }

  // append null terminating byte
  for (; index < n; index++) {
    d[index] = 0;
  }

  return dst;
}

void *utf8ndup(const void *src, size_t n) {
  return utf8ndup_ex(src, n, utf8_null, utf8_null);
}

void *utf8ndup_ex(const void *src, size_t n,
                  void *(*alloc_func_ptr)(void *, size_t), void *user_data) {
  const char *s = (const char *)src;
  char *c = utf8_null;
  size_t bytes = 0;

  // Find the end of the string or stop when n is reached
  while ('\0' != s[bytes] && bytes < n) {
    bytes++;
  }

  // In case bytes is actually less than n, we need to set it
  // to be used later in the copy byte by byte.
  n = bytes;

  if (alloc_func_ptr) {
    c = (char *)alloc_func_ptr(user_data, bytes + 1);
  } else {
    c = (char *)malloc(bytes + 1);
  }

  if (utf8_null == c) {
    // out of memory so we bail
    return utf8_null;
  }

  bytes = 0;

  // copy src byte-by-byte into our new utf8 string
  while ('\0' != s[bytes] && bytes < n) {
    c[bytes] = s[bytes];
    bytes++;
  }

  // append null terminating byte
  c[bytes] = '\0';
  return c;
}

void *utf8rchr(const void *src, int chr) {
  const char *s = (const char *)src;
  const char *match = utf8_null;
  char c[5] = {'\0', '\0', '\0', '\0', '\0'};

  if (0 == chr) {
    // being asked to return position of null terminating byte, so
    // just run s to the end, and return!
    while ('\0' != *s) {
      s++;
    }
    return (void *)s;
  } else if (0 == ((int)0xffffff80 & chr)) {
    // 1-byte/7-bit ascii
    // (0b0xxxxxxx)
    c[0] = (char)chr;
  } else if (0 == ((int)0xfffff800 & chr)) {
    // 2-byte/11-bit utf8 code point
    // (0b110xxxxx 0b10xxxxxx)
    c[0] = (char) (0xc0 | (char)(chr >> 6));
    c[1] = (char) (0x80 | (char)(chr & 0x3f));
  } else if (0 == ((int)0xffff0000 & chr)) {
    // 3-byte/16-bit utf8 code point
    // (0b1110xxxx 0b10xxxxxx 0b10xxxxxx)
    c[0] = (char) (0xe0 | (char)(chr >> 12));
    c[1] = (char) (0x80 | (char)((chr >> 6) & 0x3f));
    c[2] = (char) (0x80 | (char)(chr & 0x3f));
  } else { // if (0 == ((int)0xffe00000 & chr)) {
    // 4-byte/21-bit utf8 code point
    // (0b11110xxx 0b10xxxxxx 0b10xxxxxx 0b10xxxxxx)
    c[0] = (char) (0xf0 | (char)(chr >> 18));
    c[1] = (char) (0x80 | (char)((chr >> 12) & 0x3f));
    c[2] = (char) (0x80 | (char)((chr >> 6) & 0x3f));
    c[3] = (char) (0x80 | (char)(chr & 0x3f));
  }

  // we've created a 2 utf8 codepoint string in c that is
  // the utf8 character asked for by chr, and a null
  // terminating byte

  while ('\0' != *s) {
    size_t offset = 0;

    while (s[offset] == c[offset]) {
      offset++;
    }

    if ('\0' == c[offset]) {
      // we found a matching utf8 code point
      match = s;
      s += offset;
    } else {
      s += offset;

      // need to march s along to next utf8 codepoint start
      // (the next byte that doesn't match 0b10xxxxxx)
      if ('\0' != *s) {
        do {
          s++;
        } while (0x80 == (0xc0 & *s));
      }
    }
  }

  // return the last match we found (or 0 if no match was found)
  return (void *)match;
}

void *utf8pbrk(const void *str, const void *accept) {
  const char *s = (const char *)str;

  while ('\0' != *s) {
    const char *a = (const char *)accept;
    size_t offset = 0;

    while ('\0' != *a) {
      // checking that if *a is the start of a utf8 codepoint
      // (it is not 0b10xxxxxx) and we have successfully matched
      // a previous character (0 < offset) - we found a match
      if ((0x80 != (0xc0 & *a)) && (0 < offset)) {
        return (void *)s;
      } else {
        if (*a == s[offset]) {
          // part of a utf8 codepoint matched, so move our checking
          // onwards to the next byte
          offset++;
          a++;
        } else {
          // r could be in the middle of an unmatching utf8 code point,
          // so we need to march it on to the next character beginning,

          do {
            a++;
          } while (0x80 == (0xc0 & *a));

          // reset offset too as we found a mismatch
          offset = 0;
        }
      }
    }

    // we found a match on the last utf8 codepoint
    if (0 < offset) {
      return (void *)s;
    }

    // the current utf8 codepoint in src did not match accept, but src
    // could have been partway through a utf8 codepoint, so we need to
    // march it onto the next utf8 codepoint starting byte
    do {
      s++;
    } while ((0x80 == (0xc0 & *s)));
  }

  return utf8_null;
}

size_t utf8size(const void *str) {
  return utf8size_lazy(str) + 1;
}

size_t utf8size_lazy(const void *str) {
  return utf8nsize_lazy(str, SIZE_MAX);
}

size_t utf8nsize_lazy(const void *str, size_t n) {
  const char *s = (const char *)str;
  size_t size = 0;
  while (size < n && '\0' != s[size]) {
    size++;
  }
  return size;
}

size_t utf8spn(const void *src, const void *accept) {
  const char *s = (const char *)src;
  size_t chars = 0;

  while ('\0' != *s) {
    const char *a = (const char *)accept;
    size_t offset = 0;

    while ('\0' != *a) {
      // checking that if *r is the start of a utf8 codepoint
      // (it is not 0b10xxxxxx) and we have successfully matched
      // a previous character (0 < offset) - we found a match
      if ((0x80 != (0xc0 & *a)) && (0 < offset)) {
        // found a match, so increment the number of utf8 codepoints
        // that have matched and stop checking whether any other utf8
        // codepoints in a match
        chars++;
        s += offset;
        offset = 0;
        break;
      } else {
        if (*a == s[offset]) {
          offset++;
          a++;
        } else {
          // a could be in the middle of an unmatching utf8 codepoint,
          // so we need to march it on to the next character beginning,
          do {
            a++;
          } while (0x80 == (0xc0 & *a));

          // reset offset too as we found a mismatch
          offset = 0;
        }
      }
    }

    // found a match at the end of *a, so didn't get a chance to test it
    if (0 < offset) {
      chars++;
      s += offset;
      continue;
    }

    // if a got to its terminating null byte, then we didn't find a match.
    // Return the current number of matched utf8 codepoints
    if ('\0' == *a) {
      return chars;
    }
  }

  return chars;
}

void *utf8str(const void *haystack, const void *needle) {
  const char *h = (const char *)haystack;
  utf8_int32_t throwaway_codepoint;

  // if needle has no utf8 codepoints before the null terminating
  // byte then return haystack
  if ('\0' == *((const char *)needle)) {
    return (void *)haystack;
  }

  while ('\0' != *h) {
    const char *maybeMatch = h;
    const char *n = (const char *)needle;

    while (*h == *n && (*h != '\0' && *n != '\0')) {
      n++;
      h++;
    }

    if ('\0' == *n) {
      // we found the whole utf8 string for needle in haystack at
      // maybeMatch, so return it
      return (void *)maybeMatch;
    } else {
      // h could be in the middle of an unmatching utf8 codepoint,
      // so we need to march it on to the next character beginning
      // starting from the current character
      h = (const char *)utf8codepoint(maybeMatch, &throwaway_codepoint);
    }
  }

  // no match
  return utf8_null;
}

void *utf8casestr(const void *haystack, const void *needle) {
  const void *h = haystack;

  // if needle has no utf8 codepoints before the null terminating
  // byte then return haystack
  if ('\0' == *((const char *)needle)) {
    return (void *)haystack;
  }

  for (;;) {
    const void *maybeMatch = h;
    const void *n = needle;
    utf8_int32_t h_cp, n_cp;

    // Get the next code point and track it
    const void *nextH = h = utf8codepoint(h, &h_cp);
    n = utf8codepoint(n, &n_cp);

    while ((0 != h_cp) && (0 != n_cp)) {
      h_cp = utf8lwrcodepoint(h_cp);
      n_cp = utf8lwrcodepoint(n_cp);

      // if we find a mismatch, bail out!
      if (h_cp != n_cp) {
        break;
      }

      h = utf8codepoint(h, &h_cp);
      n = utf8codepoint(n, &n_cp);
    }

    if (0 == n_cp) {
      // we found the whole utf8 string for needle in haystack at
      // maybeMatch, so return it
      return (void *)maybeMatch;
    }

    if (0 == h_cp) {
      // no match
      return utf8_null;
    }

    // Roll back to the next code point in the haystack to test
    h = nextH;
  }
}

void *utf8valid(const void *str) {
  return utf8nvalid(str, SIZE_MAX);
}

void *utf8nvalid(const void *str, size_t n) {
  const char *s = (const char *)str;
  const char *t = s;
  size_t consumed, remained;

  while ((void) (consumed = (size_t) (s-t)), consumed < n && '\0' != *s) {
    remained = n - consumed;

    if (0xf0 == (0xf8 & *s)) {
      // ensure that there's 4 bytes or more remained
      if (remained < 4) {
        return (void *)s;
      }

      // ensure each of the 3 following bytes in this 4-byte
      // utf8 codepoint began with 0b10xxxxxx
      if ((0x80 != (0xc0 & s[1])) || (0x80 != (0xc0 & s[2])) ||
          (0x80 != (0xc0 & s[3]))) {
        return (void *)s;
      }

      // ensure that our utf8 codepoint ended after 4 bytes
      if (0x80 == (0xc0 & s[4])) {
        return (void *)s;
      }

      // ensure that the top 5 bits of this 4-byte utf8
      // codepoint were not 0, as then we could have used
      // one of the smaller encodings
      if ((0 == (0x07 & s[0])) && (0 == (0x30 & s[1]))) {
        return (void *)s;
      }

      // 4-byte utf8 code point (began with 0b11110xxx)
      s += 4;
    } else if (0xe0 == (0xf0 & *s)) {
      // ensure that there's 3 bytes or more remained
      if (remained < 3) {
        return (void *)s;
      }

      // ensure each of the 2 following bytes in this 3-byte
      // utf8 codepoint began with 0b10xxxxxx
      if ((0x80 != (0xc0 & s[1])) || (0x80 != (0xc0 & s[2]))) {
        return (void *)s;
      }

      // ensure that our utf8 codepoint ended after 3 bytes
      if (0x80 == (0xc0 & s[3])) {
        return (void *)s;
      }

      // ensure that the top 5 bits of this 3-byte utf8
      // codepoint were not 0, as then we could have used
      // one of the smaller encodings
      if ((0 == (0x0f & s[0])) && (0 == (0x20 & s[1]))) {
        return (void *)s;
      }

      // 3-byte utf8 code point (began with 0b1110xxxx)
      s += 3;
    } else if (0xc0 == (0xe0 & *s)) {
      // ensure that there's 2 bytes or more remained
      if (remained < 2) {
        return (void *)s;
      }

      // ensure the 1 following byte in this 2-byte
      // utf8 codepoint began with 0b10xxxxxx
      if (0x80 != (0xc0 & s[1])) {
        return (void *)s;
      }

      // ensure that our utf8 codepoint ended after 2 bytes
      if (0x80 == (0xc0 & s[2])) {
        return (void *)s;
      }

      // ensure that the top 4 bits of this 2-byte utf8
      // codepoint were not 0, as then we could have used
      // one of the smaller encodings
      if (0 == (0x1e & s[0])) {
        return (void *)s;
      }

      // 2-byte utf8 code point (began with 0b110xxxxx)
      s += 2;
    } else if (0x00 == (0x80 & *s)) {
      // 1-byte ascii (began with 0b0xxxxxxx)
      s += 1;
    } else {
      // we have an invalid 0b1xxxxxxx utf8 code point entry
      return (void *)s;
    }
  }

  return utf8_null;
}

int utf8makevalid(void *str, const utf8_int32_t replacement) {
  char *read = (char *)str;
  char *write = read;
  const char r = (char)replacement;
  utf8_int32_t codepoint;

  if (replacement > 0x7f) {
    return -1;
  }

  while ('\0' != *read) {
    if (0xf0 == (0xf8 & *read)) {
      // ensure each of the 3 following bytes in this 4-byte
      // utf8 codepoint began with 0b10xxxxxx
      if ((0x80 != (0xc0 & read[1])) || (0x80 != (0xc0 & read[2])) ||
          (0x80 != (0xc0 & read[3]))) {
        *write++ = r;
        read++;
        continue;
      }

      // 4-byte utf8 code point (began with 0b11110xxx)
      read = (char *)utf8codepoint(read, &codepoint);
      write = (char *)utf8catcodepoint(write, codepoint, 4);
    } else if (0xe0 == (0xf0 & *read)) {
      // ensure each of the 2 following bytes in this 3-byte
      // utf8 codepoint began with 0b10xxxxxx
      if ((0x80 != (0xc0 & read[1])) || (0x80 != (0xc0 & read[2]))) {
        *write++ = r;
        read++;
        continue;
      }

      // 3-byte utf8 code point (began with 0b1110xxxx)
      read = (char *)utf8codepoint(read, &codepoint);
      write = (char *)utf8catcodepoint(write, codepoint, 3);
    } else if (0xc0 == (0xe0 & *read)) {
      // ensure the 1 following byte in this 2-byte
      // utf8 codepoint began with 0b10xxxxxx
      if (0x80 != (0xc0 & read[1])) {
        *write++ = r;
        read++;
        continue;
      }

      // 2-byte utf8 code point (began with 0b110xxxxx)
      read = (char *)utf8codepoint(read, &codepoint);
      write = (char *)utf8catcodepoint(write, codepoint, 2);
    } else if (0x00 == (0x80 & *read)) {
      // 1-byte ascii (began with 0b0xxxxxxx)
      read = (char *)utf8codepoint(read, &codepoint);
      write = (char *)utf8catcodepoint(write, codepoint, 1);
    } else {
      // if we got here then we've got a dangling continuation (0b10xxxxxx)
      *write++ = r;
      read++;
      continue;
    }
  }

  *write = '\0';

  return 0;
}

void *utf8codepoint(const void *utf8_restrict str,
                    utf8_int32_t *utf8_restrict out_codepoint) {
  const char *s = (const char *)str;

  if (0xf0 == (0xf8 & s[0])) {
    // 4 byte utf8 codepoint
    *out_codepoint = ((0x07 & s[0]) << 18) | ((0x3f & s[1]) << 12) |
                     ((0x3f & s[2]) << 6) | (0x3f & s[3]);
    s += 4;
  } else if (0xe0 == (0xf0 & s[0])) {
    // 3 byte utf8 codepoint
    *out_codepoint =
        ((0x0f & s[0]) << 12) | ((0x3f & s[1]) << 6) | (0x3f & s[2]);
    s += 3;
  } else if (0xc0 == (0xe0 & s[0])) {
    // 2 byte utf8 codepoint
    *out_codepoint = ((0x1f & s[0]) << 6) | (0x3f & s[1]);
    s += 2;
  } else {
    // 1 byte utf8 codepoint otherwise
    *out_codepoint = s[0];
    s += 1;
  }

  return (void *)s;
}

size_t utf8codepointcalcsize(const void *str) {
  const char *s = (const char *)str;

  if (0xf0 == (0xf8 & s[0])) {
    // 4 byte utf8 codepoint
    return 4;
  } else if (0xe0 == (0xf0 & s[0])) {
    // 3 byte utf8 codepoint
    return 3;
  } else if (0xc0 == (0xe0 & s[0])) {
    // 2 byte utf8 codepoint
    return 2;
  }

  // 1 byte utf8 codepoint otherwise
  return 1;
}

size_t utf8codepointsize(utf8_int32_t chr) {
  if (0 == ((utf8_int32_t)0xffffff80 & chr)) {
    return 1;
  } else if (0 == ((utf8_int32_t)0xfffff800 & chr)) {
    return 2;
  } else if (0 == ((utf8_int32_t)0xffff0000 & chr)) {
    return 3;
  } else { // if (0 == ((int)0xffe00000 & chr)) {
    return 4;
  }
}

void *utf8catcodepoint(void *str, utf8_int32_t chr, size_t n) {
  char *s = (char *)str;

  if (0 == ((utf8_int32_t)0xffffff80 & chr)) {
    // 1-byte/7-bit ascii
    // (0b0xxxxxxx)
    if (n < 1) {
      return utf8_null;
    }
    s[0] = (char)chr;
    s += 1;
  } else if (0 == ((utf8_int32_t)0xfffff800 & chr)) {
    // 2-byte/11-bit utf8 code point
    // (0b110xxxxx 0b10xxxxxx)
    if (n < 2) {
      return utf8_null;
    }
    s[0] = (char) (0xc0 | (char)((chr >> 6) & 0x1f));
    s[1] = (char) (0x80 | (char)(chr & 0x3f));
    s += 2;
  } else if (0 == ((utf8_int32_t)0xffff0000 & chr)) {
    // 3-byte/16-bit utf8 code point
    // (0b1110xxxx 0b10xxxxxx 0b10xxxxxx)
    if (n < 3) {
      return utf8_null;
    }
    s[0] = (char) (0xe0 | (char)((chr >> 12) & 0x0f));
    s[1] = (char) (0x80 | (char)((chr >> 6) & 0x3f));
    s[2] = (char) (0x80 | (char)(chr & 0x3f));
    s += 3;
  } else { // if (0 == ((int)0xffe00000 & chr)) {
    // 4-byte/21-bit utf8 code point
    // (0b11110xxx 0b10xxxxxx 0b10xxxxxx 0b10xxxxxx)
    if (n < 4) {
      return utf8_null;
    }
    s[0] = (char) (0xf0 | (char)((chr >> 18) & 0x07));
    s[1] = (char) (0x80 | (char)((chr >> 12) & 0x3f));
    s[2] = (char) (0x80 | (char)((chr >> 6) & 0x3f));
    s[3] = (char) (0x80 | (char)(chr & 0x3f));
    s += 4;
  }

  return s;
}

int utf8islower(utf8_int32_t chr) { return chr != utf8uprcodepoint(chr); }

int utf8isupper(utf8_int32_t chr) { return chr != utf8lwrcodepoint(chr); }

void utf8lwr(void *utf8_restrict str) {
  void *p, *pn;
  utf8_int32_t cp;

  p = (char *)str;
  pn = utf8codepoint(p, &cp);

  while (cp != 0) {
    const utf8_int32_t lwr_cp = utf8lwrcodepoint(cp);
    const size_t size = utf8codepointsize(lwr_cp);

    if (lwr_cp != cp) {
      utf8catcodepoint(p, lwr_cp, size);
    }

    p = pn;
    pn = utf8codepoint(p, &cp);
  }
}

void utf8upr(void *utf8_restrict str) {
  void *p, *pn;
  utf8_int32_t cp;

  p = (char *)str;
  pn = utf8codepoint(p, &cp);

  while (cp != 0) {
    const utf8_int32_t lwr_cp = utf8uprcodepoint(cp);
    const size_t size = utf8codepointsize(lwr_cp);

    if (lwr_cp != cp) {
      utf8catcodepoint(p, lwr_cp, size);
    }

    p = pn;
    pn = utf8codepoint(p, &cp);
  }
}

utf8_int32_t utf8lwrcodepoint(utf8_int32_t cp) {
  if (((0x0041 <= cp) && (0x005a >= cp)) ||
      ((0x00c0 <= cp) && (0x00d6 >= cp)) ||
      ((0x00d8 <= cp) && (0x00de >= cp)) ||
      ((0x0391 <= cp) && (0x03a1 >= cp)) ||
      ((0x03a3 <= cp) && (0x03ab >= cp)) ||
      ((0x0410 <= cp) && (0x042f >= cp))) {
    cp += 32;
  } else if ((0x0400 <= cp) && (0x040f >= cp)) {
    cp += 80;
  } else if (((0x0100 <= cp) && (0x012f >= cp)) ||
             ((0x0132 <= cp) && (0x0137 >= cp)) ||
             ((0x014a <= cp) && (0x0177 >= cp)) ||
             ((0x0182 <= cp) && (0x0185 >= cp)) ||
             ((0x01a0 <= cp) && (0x01a5 >= cp)) ||
             ((0x01de <= cp) && (0x01ef >= cp)) ||
             ((0x01f8 <= cp) && (0x021f >= cp)) ||
             ((0x0222 <= cp) && (0x0233 >= cp)) ||
             ((0x0246 <= cp) && (0x024f >= cp)) ||
             ((0x03d8 <= cp) && (0x03ef >= cp)) ||
             ((0x0460 <= cp) && (0x0481 >= cp)) ||
             ((0x048a <= cp) && (0x04ff >= cp))) {
    cp |= 0x1;
  } else if (((0x0139 <= cp) && (0x0148 >= cp)) ||
             ((0x0179 <= cp) && (0x017e >= cp)) ||
             ((0x01af <= cp) && (0x01b0 >= cp)) ||
             ((0x01b3 <= cp) && (0x01b6 >= cp)) ||
             ((0x01cd <= cp) && (0x01dc >= cp))) {
    cp += 1;
    cp &= ~0x1;
  } else {
    switch (cp) {
    default:
      break;
    case 0x0178:
      cp = 0x00ff;
      break;
    case 0x0243:
      cp = 0x0180;
      break;
    case 0x018e:
      cp = 0x01dd;
      break;
    case 0x023d:
      cp = 0x019a;
      break;
    case 0x0220:
      cp = 0x019e;
      break;
    case 0x01b7:
      cp = 0x0292;
      break;
    case 0x01c4:
      cp = 0x01c6;
      break;
    case 0x01c7:
      cp = 0x01c9;
      break;
    case 0x01ca:
      cp = 0x01cc;
      break;
    case 0x01f1:
      cp = 0x01f3;
      break;
    case 0x01f7:
      cp = 0x01bf;
      break;
    case 0x0187:
      cp = 0x0188;
      break;
    case 0x018b:
      cp = 0x018c;
      break;
    case 0x0191:
      cp = 0x0192;
      break;
    case 0x0198:
      cp = 0x0199;
      break;
    case 0x01a7:
      cp = 0x01a8;
      break;
    case 0x01ac:
      cp = 0x01ad;
      break;
    case 0x01af:
      cp = 0x01b0;
      break;
    case 0x01b8:
      cp = 0x01b9;
      break;
    case 0x01bc:
      cp = 0x01bd;
      break;
    case 0x01f4:
      cp = 0x01f5;
      break;
    case 0x023b:
      cp = 0x023c;
      break;
    case 0x0241:
      cp = 0x0242;
      break;
    case 0x03fd:
      cp = 0x037b;
      break;
    case 0x03fe:
      cp = 0x037c;
      break;
    case 0x03ff:
      cp = 0x037d;
      break;
    case 0x037f:
      cp = 0x03f3;
      break;
    case 0x0386:
      cp = 0x03ac;
      break;
    case 0x0388:
      cp = 0x03ad;
      break;
    case 0x0389:
      cp = 0x03ae;
      break;
    case 0x038a:
      cp = 0x03af;
      break;
    case 0x038c:
      cp = 0x03cc;
      break;
    case 0x038e:
      cp = 0x03cd;
      break;
    case 0x038f:
      cp = 0x03ce;
      break;
    case 0x0370:
      cp = 0x0371;
      break;
    case 0x0372:
      cp = 0x0373;
      break;
    case 0x0376:
      cp = 0x0377;
      break;
    case 0x03f4:
      cp = 0x03b8;
      break;
    case 0x03cf:
      cp = 0x03d7;
      break;
    case 0x03f9:
      cp = 0x03f2;
      break;
    case 0x03f7:
      cp = 0x03f8;
      break;
    case 0x03fa:
      cp = 0x03fb;
      break;
    }
  }

  return cp;
}

utf8_int32_t utf8uprcodepoint(utf8_int32_t cp) {
  if (((0x0061 <= cp) && (0x007a >= cp)) ||
      ((0x00e0 <= cp) && (0x00f6 >= cp)) ||
      ((0x00f8 <= cp) && (0x00fe >= cp)) ||
      ((0x03b1 <= cp) && (0x03c1 >= cp)) ||
      ((0x03c3 <= cp) && (0x03cb >= cp)) ||
      ((0x0430 <= cp) && (0x044f >= cp))) {
    cp -= 32;
  } else if ((0x0450 <= cp) && (0x045f >= cp)) {
    cp -= 80;
  } else if (((0x0100 <= cp) && (0x012f >= cp)) ||
             ((0x0132 <= cp) && (0x0137 >= cp)) ||
             ((0x014a <= cp) && (0x0177 >= cp)) ||
             ((0x0182 <= cp) && (0x0185 >= cp)) ||
             ((0x01a0 <= cp) && (0x01a5 >= cp)) ||
             ((0x01de <= cp) && (0x01ef >= cp)) ||
             ((0x01f8 <= cp) && (0x021f >= cp)) ||
             ((0x0222 <= cp) && (0x0233 >= cp)) ||
             ((0x0246 <= cp) && (0x024f >= cp)) ||
             ((0x03d8 <= cp) && (0x03ef >= cp)) ||
             ((0x0460 <= cp) && (0x0481 >= cp)) ||
             ((0x048a <= cp) && (0x04ff >= cp))) {
    cp &= ~0x1;
  } else if (((0x0139 <= cp) && (0x0148 >= cp)) ||
             ((0x0179 <= cp) && (0x017e >= cp)) ||
             ((0x01af <= cp) && (0x01b0 >= cp)) ||
             ((0x01b3 <= cp) && (0x01b6 >= cp)) ||
             ((0x01cd <= cp) && (0x01dc >= cp))) {
    cp -= 1;
    cp |= 0x1;
  } else {
    switch (cp) {
    default:
      break;
    case 0x00ff:
      cp = 0x0178;
      break;
    case 0x0180:
      cp = 0x0243;
      break;
    case 0x01dd:
      cp = 0x018e;
      break;
    case 0x019a:
      cp = 0x023d;
      break;
    case 0x019e:
      cp = 0x0220;
      break;
    case 0x0292:
      cp = 0x01b7;
      break;
    case 0x01c6:
      cp = 0x01c4;
      break;
    case 0x01c9:
      cp = 0x01c7;
      break;
    case 0x01cc:
      cp = 0x01ca;
      break;
    case 0x01f3:
      cp = 0x01f1;
      break;
    case 0x01bf:
      cp = 0x01f7;
      break;
    case 0x0188:
      cp = 0x0187;
      break;
    case 0x018c:
      cp = 0x018b;
      break;
    case 0x0192:
      cp = 0x0191;
      break;
    case 0x0199:
      cp = 0x0198;
      break;
    case 0x01a8:
      cp = 0x01a7;
      break;
    case 0x01ad:
      cp = 0x01ac;
      break;
    case 0x01b0:
      cp = 0x01af;
      break;
    case 0x01b9:
      cp = 0x01b8;
      break;
    case 0x01bd:
      cp = 0x01bc;
      break;
    case 0x01f5:
      cp = 0x01f4;
      break;
    case 0x023c:
      cp = 0x023b;
      break;
    case 0x0242:
      cp = 0x0241;
      break;
    case 0x037b:
      cp = 0x03fd;
      break;
    case 0x037c:
      cp = 0x03fe;
      break;
    case 0x037d:
      cp = 0x03ff;
      break;
    case 0x03f3:
      cp = 0x037f;
      break;
    case 0x03ac:
      cp = 0x0386;
      break;
    case 0x03ad:
      cp = 0x0388;
      break;
    case 0x03ae:
      cp = 0x0389;
      break;
    case 0x03af:
      cp = 0x038a;
      break;
    case 0x03cc:
      cp = 0x038c;
      break;
    case 0x03cd:
      cp = 0x038e;
      break;
    case 0x03ce:
      cp = 0x038f;
      break;
    case 0x0371:
      cp = 0x0370;
      break;
    case 0x0373:
      cp = 0x0372;
      break;
    case 0x0377:
      cp = 0x0376;
      break;
    case 0x03d1:
      cp = 0x0398;
      break;
    case 0x03d7:
      cp = 0x03cf;
      break;
    case 0x03f2:
      cp = 0x03f9;
      break;
    case 0x03f8:
      cp = 0x03f7;
      break;
    case 0x03fb:
      cp = 0x03fa;
      break;
    }
  }

  return cp;
}

void *utf8rcodepoint(const void *utf8_restrict str,
                     utf8_int32_t *utf8_restrict out_codepoint) {
  const char *s = (const char *)str;

  if (0xf0 == (0xf8 & s[0])) {
    // 4 byte utf8 codepoint
    *out_codepoint = ((0x07 & s[0]) << 18) | ((0x3f & s[1]) << 12) |
                     ((0x3f & s[2]) << 6) | (0x3f & s[3]);
  } else if (0xe0 == (0xf0 & s[0])) {
    // 3 byte utf8 codepoint
    *out_codepoint =
        ((0x0f & s[0]) << 12) | ((0x3f & s[1]) << 6) | (0x3f & s[2]);
  } else if (0xc0 == (0xe0 & s[0])) {
    // 2 byte utf8 codepoint
    *out_codepoint = ((0x1f & s[0]) << 6) | (0x3f & s[1]);
  } else {
    // 1 byte utf8 codepoint otherwise
    *out_codepoint = s[0];
  }

  do {
    s--;
  } while ((0 != (0x80 & s[0])) && (0x80 == (0xc0 & s[0])));

  return (void *)s;
}

#undef utf8_restrict
#undef utf8_null

#ifdef __cplusplus
} // extern "C"
#endif

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif // SHEREDOM_UTF8_H_INCLUDED
#line 0 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.h"



#define LITAC_DEFAULT_ALIGNMENT (2*sizeof(void*))


#include <stdlib.h>

#include <stdio.h>
#include <time.h>


typedef enum Lita_OSType {
    Lita_OSType_WINDOWS,
    Lita_OSType_ANDROID,
    Lita_OSType_LINUX,
    Lita_OSType_BSD,
    Lita_OSType_IOS,
    Lita_OSType_MAC,
    Lita_OSType_OTHER
} Lita_OSType;


#if defined(_WIN32)
    // Windows
    Lita_OSType litaOS = Lita_OSType_WINDOWS;
    #define LITA_IS_POSIX 0
#elif defined(_WIN64)
    // Windows
    Lita_OSType litaOS = Lita_OSType_WINDOWS;
    #define LITA_IS_POSIX 0
#elif defined(__CYGWIN__) && !defined(_WIN32)
    // Windows (Cygwin POSIX under Microsoft Window)
    Lita_OSType litaOS = Lita_OSType_WINDOWS;
    #define LITA_IS_POSIX 1
#elif defined(__ANDROID__)
    // Android (implies Linux, so it must come first)
    Lita_OSType litaOS = Lita_OSType_ANDROID;
    #define LITA_IS_POSIX 1
#elif defined(__linux__)
    // Debian, Ubuntu, Gentoo, Fedora, openSUSE, RedHat, Centos and other
    Lita_OSType litaOS = Lita_OSType_LINUX;
    #define LITA_IS_POSIX 1
#elif defined(__unix__) || !defined(__APPLE__) && defined(__MACH__)
    #include <sys/param.h>
    #if defined(BSD)
        // FreeBSD, NetBSD, OpenBSD, DragonFly BSD
        Lita_OSType litaOS = Lita_OSType_BSD;
    #else
        Lita_OSType litaOS = Lita_OSType_OTHER;
    #endif
    #define LITA_IS_POSIX 1
#elif defined(__hpux)
    // HP-UX
    Lita_OSType litaOS = Lita_OSType_OTHER;
#elif defined(_AIX)
    // IBM AIX
    Lita_OSType litaOS = Lita_OSType_OTHER;
#elif defined(__APPLE__) && defined(__MACH__) // Apple OSX and iOS (Darwin)
    #include <TargetConditionals.h>
    #if TARGET_IPHONE_SIMULATOR == 1
        // Apple iOS
        Lita_OSType litaOS = Lita_OSType_IOS;
    #elif TARGET_OS_IPHONE == 1
        // Apple iOS
        Lita_OSType litaOS = Lita_OSType_IOS;
    #elif TARGET_OS_MAC == 1
        // Apple OSX
        Lita_OSType litaOS = Lita_OSType_MAC;
    #else
        Lita_OSType litaOS = Lita_OSType_OTHER;
    #endif
    #define LITA_IS_POSIX 1
#elif defined(__sun) && defined(__SVR4)
    // Oracle Solaris, Open Indiana
    Lita_OSType litaOS = Lita_OSType_OTHER;
    #define LITA_IS_POSIX 0
#else
    Lita_OSType litaOS = Lita_OSType_OTHER;
    #define LITA_IS_POSIX 0
#endif


typedef struct tm tm;



typedef enum Lita_ArchType {
    Lita_ArchType_UNKNOWN,
    Lita_ArchType_ARM32,
    Lita_ArchType_ARM64,
    Lita_ArchType_X86,
    Lita_ArchType_X86_64,
    Lita_ArchType_SPARC,
} Lita_ArchType;

#if defined(_M_IX86) || defined(__i386__) || defined(__i386) || defined(__i486__) || defined(__i486) || defined(i386)
#define LITA_X86 1
#else
#define LITA_X86 0
#endif

#if defined(_M_X64) || defined(__ia64__) || defined(__x86_64__)
#define LITA_X64 1
#else
#define LITA_X64 0
#endif

#if defined(__arm__)
#define LITA_ARM32 1
#else
#define LITA_ARM32 0
#endif

#if defined(__aarch64__)
#define LITA_ARM64 1
#else
#define LITA_ARM64 0
#endif

#if defined(__sparc__)
#define LITA_SPARC 1
#else
#define LITA_SPARC 0
#endif

#if LITA_ARM32
    Lita_ArchType litaArch = Lita_ArchType_ARM32;
#elif LITA_ARM64
    Lita_ArchType litaArch = Lita_ArchType_ARM64;
#elif LITA_X86
    Lita_ArchType litaArch = Lita_ArchType_X86;
#elif LITA_X64
    Lita_ArchType litaArch = Lita_ArchType_X86_64;
#elif LITA_SPARC
    Lita_ArchType litaArch = Lita_ArchType_SPARC;
#else
    Lita_ArchType litaArch = Lita_ArchType_UNKNOWN;
#endif



#if !defined(_WIN32) && !defined(_WIN64) && !defined(__CYGWIN__)
    #include <sys/time.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <limits.h>

    typedef struct timeval timeval;
    typedef struct stat FileStat;
#endif

#ifndef PATH_MAX
#define PATH_MAX 256
#endif



#include <time.h>

typedef struct tm tm_time;


/*	$NetBSD: strptime.c,v 1.36 2012/03/13 21:13:48 christos Exp $	*/

/*-
 * Copyright (c) 1997, 1998, 2005, 2008 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code was contributed to The NetBSD Foundation by Klaus Klein.
 * Heavily optimised by David Laight
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
/*
#include <sys/cdefs.h>
#if defined(LIBC_SCCS) && !defined(lint)
__RCSID("$NetBSD: strptime.c,v 1.36 2012/03/13 21:13:48 christos Exp $");
#endif

#include "namespace.h"
#include <sys/localedef.h>
*/
#include <ctype.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
/*
#include <tzfile.h>
#include "private.h"

#ifdef __weak_alias
__weak_alias(strptime,_strptime)
#endif
*/
typedef unsigned char u_char;
typedef unsigned int uint;
// typedef unsigned __int64 uint64_t;

#define	_ctloc(x)		(_CurrentTimeLocale->x)

/*
 * We do not implement alternate representations. However, we always
 * check whether a given modifier is allowed for a certain conversion.
 */
#define ALT_E			0x01
#define ALT_O			0x02
#define	LEGAL_ALT(x)		{ if (alt_format & ~(x)) return NULL; }

static int TM_YEAR_BASE = 1900;
static char gmt[] = { "GMT" };
static char utc[] = { "UTC" };
/* RFC-822/RFC-2822 */
static const char * const nast[5] = {
       "EST",    "CST",    "MST",    "PST",    "\0\0\0"
};
static const char * const nadt[5] = {
       "EDT",    "CDT",    "MDT",    "PDT",    "\0\0\0"
};
static const char * const am_pm[2] = {
       "am", "pm"
};
static const char * const day[7] = {
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"
};
static const char * const abday[7] = {
	"sun", "mon", "tue", "wed", "thu", "fri", "sat"
};
static const char * const mon[12] = {
	"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"
};
static const char * const abmon[12] = {
	"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"
};

static const u_char *conv_num(const unsigned char *, int *, uint, uint);
static const u_char *find_string(const u_char *, int *, const char * const *,
	const char * const *, int);

// #ifndef MO_MINGW32
// static int
// strncasecmp(const char *a, const char *b, size_t c)
// {
//     return _strnicmp(a, b, c);
// }
// #endif


char *
strptime(const char *buf, const char *fmt, struct tm *tm)
{
	unsigned char c;
	const unsigned char *bp, *ep;
	int alt_format, i, split_year = 0, neg = 0, offs;
	const char *new_fmt;

	bp = (const u_char *)buf;

	while (bp != NULL && (c = *fmt++) != '\0') {
		/* Clear `alternate' modifier prior to new conversion. */
		alt_format = 0;
		i = 0;

		/* Eat up white-space. */
		if (isspace(c)) {
			while (isspace(*bp))
				bp++;
			continue;
		}

		if (c != '%')
			goto literal;


again:		switch (c = *fmt++) {
		case '%':	/* "%%" is converted to "%". */
literal:
			if (c != *bp++)
				return NULL;
			LEGAL_ALT(0);
			continue;

		/*
		 * "Alternative" modifiers. Just set the appropriate flag
		 * and start over again.
		 */
		case 'E':	/* "%E?" alternative conversion modifier. */
			LEGAL_ALT(0);
			alt_format |= ALT_E;
			goto again;

		case 'O':	/* "%O?" alternative conversion modifier. */
			LEGAL_ALT(0);
			alt_format |= ALT_O;
			goto again;

		/*
		 * "Complex" conversion rules, implemented through recursion.
		 */
		/* we do not need 'c'
      case 'c': Date and time, using the locale's format.
			new_fmt = _ctloc(d_t_fmt);
			goto recurse;
      */

		case 'D':	/* The date as "%m/%d/%y". */
			new_fmt = "%m/%d/%y";
			LEGAL_ALT(0);
			goto recurse;

		case 'F':	/* The date as "%Y-%m-%d". */
			new_fmt = "%Y-%m-%d";
			LEGAL_ALT(0);
			goto recurse;

		case 'R':	/* The time as "%H:%M". */
			new_fmt = "%H:%M";
			LEGAL_ALT(0);
			goto recurse;

		case 'r':	/* The time in 12-hour clock representation. */
			new_fmt = "%I:%M:S %p";//_ctloc(t_fmt_ampm);
			LEGAL_ALT(0);
			goto recurse;

		case 'T':	/* The time as "%H:%M:%S". */
			new_fmt = "%H:%M:%S";
			LEGAL_ALT(0);
			goto recurse;

		/* we don't use 'X'
      case 'X': The time, using the locale's format.
			new_fmt =_ctloc(t_fmt);
			goto recurse;
      */

		/* we do not need 'x'
      case 'x': The date, using the locale's format.
			new_fmt =_ctloc(d_fmt);*/
recurse:
			bp = (const u_char *)strptime((const char *)bp,
							    new_fmt, tm);
			LEGAL_ALT(ALT_E);
			continue;

		/*
		 * "Elementary" conversion rules.
		 */
		case 'A':	/* The day of week, using the locale's form. */
		case 'a':
			bp = find_string(bp, &tm->tm_wday, day, abday, 7);
			LEGAL_ALT(0);
			continue;

		case 'B':	/* The month, using the locale's form. */
		case 'b':
		case 'h':
			bp = find_string(bp, &tm->tm_mon, mon, abmon, 12);
			LEGAL_ALT(0);
			continue;

		case 'C':	/* The century number. */
			i = 20;
			bp = conv_num(bp, &i, 0, 99);

			i = i * 100 - TM_YEAR_BASE;
			if (split_year)
				i += tm->tm_year % 100;
			split_year = 1;
			tm->tm_year = i;
			LEGAL_ALT(ALT_E);
			continue;

		case 'd':	/* The day of month. */
		case 'e':
			bp = conv_num(bp, &tm->tm_mday, 1, 31);
			LEGAL_ALT(ALT_O);
			continue;

		case 'k':	/* The hour (24-hour clock representation). */
			LEGAL_ALT(0);
			/* FALLTHROUGH */
		case 'H':
			bp = conv_num(bp, &tm->tm_hour, 0, 23);
			LEGAL_ALT(ALT_O);
			continue;

		case 'l':	/* The hour (12-hour clock representation). */
			LEGAL_ALT(0);
			/* FALLTHROUGH */
		case 'I':
			bp = conv_num(bp, &tm->tm_hour, 1, 12);
			if (tm->tm_hour == 12)
				tm->tm_hour = 0;
			LEGAL_ALT(ALT_O);
			continue;

		case 'j':	/* The day of year. */
			i = 1;
			bp = conv_num(bp, &i, 1, 366);
			tm->tm_yday = i - 1;
			LEGAL_ALT(0);
			continue;

		case 'M':	/* The minute. */
			bp = conv_num(bp, &tm->tm_min, 0, 59);
			LEGAL_ALT(ALT_O);
			continue;

		case 'm':	/* The month. */
			i = 1;
			bp = conv_num(bp, &i, 1, 12);
			tm->tm_mon = i - 1;
			LEGAL_ALT(ALT_O);
			continue;

		case 'p':	/* The locale's equivalent of AM/PM. */
			bp = find_string(bp, &i, am_pm, NULL, 2);
			if (tm->tm_hour > 11)
				return NULL;
			tm->tm_hour += i * 12;
			LEGAL_ALT(0);
			continue;

		case 'S':	/* The seconds. */
			bp = conv_num(bp, &tm->tm_sec, 0, 61);
			LEGAL_ALT(ALT_O);
			continue;

#ifndef TIME_MAX
#define TIME_MAX	INT64_MAX
#endif
		case 's':	/* seconds since the epoch */
			{
				time_t sse = 0;
				uint64_t rulim = TIME_MAX;

				if (*bp < '0' || *bp > '9') {
					bp = NULL;
					continue;
				}

				do {
					sse *= 10;
					sse += *bp++ - '0';
					rulim /= 10;
				} while ((sse * 10 <= TIME_MAX) &&
					 rulim && *bp >= '0' && *bp <= '9');

				if (sse < 0 || (uint64_t)sse > TIME_MAX) {
					bp = NULL;
					continue;
				}

				tm = localtime(&sse);
            if (tm == NULL)
					bp = NULL;
			}
			continue;

		case 'U':	/* The week of year, beginning on sunday. */
		case 'W':	/* The week of year, beginning on monday. */
			/*
			 * XXX This is bogus, as we can not assume any valid
			 * information present in the tm structure at this
			 * point to calculate a real value, so just check the
			 * range for now.
			 */
			 bp = conv_num(bp, &i, 0, 53);
			 LEGAL_ALT(ALT_O);
			 continue;

		case 'w':	/* The day of week, beginning on sunday. */
			bp = conv_num(bp, &tm->tm_wday, 0, 6);
			LEGAL_ALT(ALT_O);
			continue;

		case 'u':	/* The day of week, monday = 1. */
			bp = conv_num(bp, &i, 1, 7);
			tm->tm_wday = i % 7;
			LEGAL_ALT(ALT_O);
			continue;

		case 'g':	/* The year corresponding to the ISO week
				 * number but without the century.
				 */
			bp = conv_num(bp, &i, 0, 99);
			continue;

		case 'G':	/* The year corresponding to the ISO week
				 * number with century.
				 */
			do
				bp++;
			while (isdigit(*bp));
			continue;

		case 'V':	/* The ISO 8601:1988 week number as decimal */
			bp = conv_num(bp, &i, 0, 53);
			continue;

		case 'Y':	/* The year. */
			i = TM_YEAR_BASE;	/* just for data sanity... */
			bp = conv_num(bp, &i, 0, 9999);
			tm->tm_year = i - TM_YEAR_BASE;
			LEGAL_ALT(ALT_E);
			continue;

		case 'y':	/* The year within 100 years of the epoch. */
			/* LEGAL_ALT(ALT_E | ALT_O); */
			bp = conv_num(bp, &i, 0, 99);

			if (split_year)
				/* preserve century */
				i += (tm->tm_year / 100) * 100;
			else {
				split_year = 1;
				if (i <= 68)
					i = i + 2000 - TM_YEAR_BASE;
				else
					i = i + 1900 - TM_YEAR_BASE;
			}
			tm->tm_year = i;
			continue;

		case 'Z':
			tzset();
			if (strncasecmp((const char *)bp, gmt, 3) == 0
          || strncasecmp((const char *)bp, utc, 3) == 0) {
				tm->tm_isdst = 0;
#ifdef TM_GMTOFF
				tm->TM_GMTOFF = 0;
#endif
#ifdef TM_ZONE
				tm->TM_ZONE = gmt;
#endif
				bp += 3;
			} else {
				ep = find_string(bp, &i,
					       	 (const char * const *)tzname,
					       	  NULL, 2);
				if (ep != NULL) {
					tm->tm_isdst = i;
#ifdef TM_GMTOFF
					tm->TM_GMTOFF = -(timezone);
#endif
#ifdef TM_ZONE
					tm->TM_ZONE = tzname[i];
#endif
				}
				bp = ep;
			}
			continue;

		case 'z':
			/*
			 * We recognize all ISO 8601 formats:
			 * Z	= Zulu time/UTC
			 * [+-]hhmm
			 * [+-]hh:mm
			 * [+-]hh
			 * We recognize all RFC-822/RFC-2822 formats:
			 * UT|GMT
			 *          North American : UTC offsets
			 * E[DS]T = Eastern : -4 | -5
			 * C[DS]T = Central : -5 | -6
			 * M[DS]T = Mountain: -6 | -7
			 * P[DS]T = Pacific : -7 | -8
			 *          Military
			 * [A-IL-M] = -1 ... -9 (J not used)
			 * [N-Y]  = +1 ... +12
			 */
			while (isspace(*bp))
				bp++;

			switch (*bp++) {
			case 'G':
				if (*bp++ != 'M')
					return NULL;
				/*FALLTHROUGH*/
			case 'U':
				if (*bp++ != 'T')
					return NULL;
				/*FALLTHROUGH*/
			case 'Z':
				tm->tm_isdst = 0;
#ifdef TM_GMTOFF
				tm->TM_GMTOFF = 0;
#endif
#ifdef TM_ZONE
				tm->TM_ZONE = utc;
#endif
				continue;
			case '+':
				neg = 0;
				break;
			case '-':
				neg = 1;
				break;
			default:
				--bp;
				ep = find_string(bp, &i, nast, NULL, 4);
				if (ep != NULL) {
#ifdef TM_GMTOFF
					tm->TM_GMTOFF = -5 - i;
#endif
#ifdef TM_ZONE
					tm->TM_ZONE = __UNCONST(nast[i]);
#endif
					bp = ep;
					continue;
				}
				ep = find_string(bp, &i, nadt, NULL, 4);
				if (ep != NULL) {
					tm->tm_isdst = 1;
#ifdef TM_GMTOFF
					tm->TM_GMTOFF = -4 - i;
#endif
#ifdef TM_ZONE
					tm->TM_ZONE = __UNCONST(nadt[i]);
#endif
					bp = ep;
					continue;
				}

				if ((*bp >= 'A' && *bp <= 'I') ||
				    (*bp >= 'L' && *bp <= 'Y')) {
#ifdef TM_GMTOFF
					/* Argh! No 'J'! */
					if (*bp >= 'A' && *bp <= 'I')
						tm->TM_GMTOFF =
						    ('A' - 1) - (int)*bp;
					else if (*bp >= 'L' && *bp <= 'M')
						tm->TM_GMTOFF = 'A' - (int)*bp;
					else if (*bp >= 'N' && *bp <= 'Y')
						tm->TM_GMTOFF = (int)*bp - 'M';
#endif
#ifdef TM_ZONE
					tm->TM_ZONE = NULL; /* XXX */
#endif
					bp++;
					continue;
				}
				return NULL;
			}
			offs = 0;
			for (i = 0; i < 4; ) {
				if (isdigit(*bp)) {
					offs = offs * 10 + (*bp++ - '0');
					i++;
					continue;
				}
				if (i == 2 && *bp == ':') {
					bp++;
					continue;
				}
				break;
			}
			switch (i) {
			case 2:
				offs *= 100;
				break;
			case 4:
				i = offs % 100;
				if (i >= 60)
					return NULL;
				/* Convert minutes into decimal */
				offs = (offs / 100) * 100 + (i * 50) / 30;
				break;
			default:
				return NULL;
			}
			if (neg)
				offs = -offs;
			tm->tm_isdst = 0;	/* XXX */
#ifdef TM_GMTOFF
			tm->TM_GMTOFF = offs;
#endif
#ifdef TM_ZONE
			tm->TM_ZONE = NULL;	/* XXX */
#endif
			continue;

		/*
		 * Miscellaneous conversions.
		 */
		case 'n':	/* Any kind of white-space. */
		case 't':
			while (isspace(*bp))
				bp++;
			LEGAL_ALT(0);
			continue;


		default:	/* Unknown/unsupported conversion. */
			return NULL;
		}
	}

	return (char *)(bp);
}


static const u_char *
conv_num(const unsigned char *buf, int *dest, uint llim, uint ulim)
{
	uint result = 0;
	unsigned char ch;

	/* The limit also determines the number of valid digits. */
	uint rulim = ulim;

	ch = *buf;
	if (ch < '0' || ch > '9')
		return NULL;

	do {
		result *= 10;
		result += ch - '0';
		rulim /= 10;
		ch = *++buf;
	} while ((result * 10 <= ulim) && rulim && ch >= '0' && ch <= '9');

	if (result < llim || result > ulim)
		return NULL;

	*dest = result;
	return buf;
}

static const u_char *
find_string(const u_char *bp, int *tgt, const char * const *n1,
		const char * const *n2, int c)
{
	int i;
	size_t len;

	/* check full name - then abbreviated ones */
	for (; n1 != NULL; n1 = n2, n2 = NULL) {
		for (i = 0; i < c; i++, n1++) {
			len = strlen(*n1);
			if (strncasecmp(*n1, (const char *)bp, len) == 0) {
				*tgt = i;
				return bp + len;
			}
		}
	}

	/* Nothing matched */
	return NULL;
}
#line 0 "/Users/tony/projects/litac-lang/stdlib/std/time/strptime.c"


#include <setjmp.h>



#include <stdarg.h>

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <ctype.h>

#include <limits.h>

#include <string.h>

#include <errno.h>


#ifndef MIN
#define MIN(x, y) ((x) <= (y) ? (x) : (y))
#endif

#ifndef MAX
#define MAX(x, y) ((x) >= (y) ? (x) : (y))
#endif

#ifndef ABS
#define ABS(x)    ((x < 0) ? (x) * -1 : (x))
#endif

#if defined(_WIN32) || defined(WIN32) || defined(__CYGWIN__) || defined(__MINGW32__) || defined(__BORLANDC__)
#define OS_WIN
#endif

#if !defined(OS_WIN) || defined(__TINYC__)
size_t strnlen(const char * s, size_t len) {
    size_t i = 0;
    for ( ; i < len && s[i] != '\0'; ++i);
    return i;
}
#endif

#if defined(OS_WIN)
#define strncasecmp(a, b, n)  _strnicmp((a), (b), (n))
#endif

#if defined(_MSC_VER) || defined(__TINYC__) && (defined(_WIN32) || defined(_WIN64))
    #include <io.h>

    #define ftruncate(fd, sz) (-(_chsize_s((fd), (sz)) != 0))
    #define fileno _fileno
#else
    #include <unistd.h>
#endif

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


/*
Copyright (c) 2013-2021, tinydir authors:
- Cong Xu
- Lautis Sun
- Baudouin Feildel
- Andargor <andargor@yahoo.com>
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef TINYDIR_H
#define TINYDIR_H

#ifdef __cplusplus
extern "C" {
#endif

#if ((defined _UNICODE) && !(defined UNICODE))
#define UNICODE
#endif

#if ((defined UNICODE) && !(defined _UNICODE))
#define _UNICODE
#endif

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#ifdef _MSC_VER
# ifndef WIN32_LEAN_AND_MEAN
#  define WIN32_LEAN_AND_MEAN
# endif
# include <windows.h>
# include <tchar.h>
# pragma warning(push)
# pragma warning (disable : 4996)
#else
# include <dirent.h>
# include <libgen.h>
# include <sys/stat.h>
# include <stddef.h>
#endif
#ifdef __MINGW32__
# include <tchar.h>
#endif


/* types */

/* Windows UNICODE wide character support */
#if defined _MSC_VER || defined __MINGW32__
# define _tinydir_char_t TCHAR
# define TINYDIR_STRING(s) _TEXT(s)
# define _tinydir_strlen _tcslen
# define _tinydir_strcpy _tcscpy
# define _tinydir_strcat _tcscat
# define _tinydir_strcmp _tcscmp
# define _tinydir_strrchr _tcsrchr
# define _tinydir_strncmp _tcsncmp
#else
# define _tinydir_char_t char
# define TINYDIR_STRING(s) s
# define _tinydir_strlen strlen
# define _tinydir_strcpy strcpy
# define _tinydir_strcat strcat
# define _tinydir_strcmp strcmp
# define _tinydir_strrchr strrchr
# define _tinydir_strncmp strncmp
#endif

#if (defined _MSC_VER || defined __MINGW32__)
# include <windows.h>
# define _TINYDIR_PATH_MAX MAX_PATH
#elif defined  __linux__
# include <limits.h>
# ifdef PATH_MAX
#  define _TINYDIR_PATH_MAX PATH_MAX
# endif
#elif defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
# include <sys/param.h>
# if defined(BSD)
#  include <limits.h>
#  ifdef PATH_MAX
#   define _TINYDIR_PATH_MAX PATH_MAX
#  endif
# endif
#endif

#ifndef _TINYDIR_PATH_MAX
#define _TINYDIR_PATH_MAX 4096
#endif

#ifdef _MSC_VER
/* extra chars for the "\\*" mask */
# define _TINYDIR_PATH_EXTRA 2
#else
# define _TINYDIR_PATH_EXTRA 0
#endif

#define _TINYDIR_FILENAME_MAX 256

#if (defined _MSC_VER || defined __MINGW32__)
#define _TINYDIR_DRIVE_MAX 3
#endif

#ifdef _MSC_VER
# define _TINYDIR_FUNC static __inline
#elif !defined __STDC_VERSION__ || __STDC_VERSION__ < 199901L
# define _TINYDIR_FUNC static __inline__
#elif defined(__cplusplus)
# define _TINYDIR_FUNC static inline
#elif defined(__GNUC__)
/* Suppress unused function warning */
# define _TINYDIR_FUNC __attribute__((unused)) static
#else
# define _TINYDIR_FUNC static
#endif

/* readdir_r usage; define TINYDIR_USE_READDIR_R to use it (if supported) */
#ifdef TINYDIR_USE_READDIR_R

/* readdir_r is a POSIX-only function, and may not be available under various
 * environments/settings, e.g. MinGW. Use readdir fallback */
#if _POSIX_C_SOURCE >= 1 || _XOPEN_SOURCE || _BSD_SOURCE || _SVID_SOURCE ||\
	_POSIX_SOURCE
# define _TINYDIR_HAS_READDIR_R
#endif
#if _POSIX_C_SOURCE >= 200112L
# define _TINYDIR_HAS_FPATHCONF
# include <unistd.h>
#endif
#if _BSD_SOURCE || _SVID_SOURCE || \
	(_POSIX_C_SOURCE >= 200809L || _XOPEN_SOURCE >= 700)
# define _TINYDIR_HAS_DIRFD
# include <sys/types.h>
#endif
#if defined _TINYDIR_HAS_FPATHCONF && defined _TINYDIR_HAS_DIRFD &&\
	defined _PC_NAME_MAX
# define _TINYDIR_USE_FPATHCONF
#endif
#if defined __MINGW32__ || !defined _TINYDIR_HAS_READDIR_R ||\
	!(defined _TINYDIR_USE_FPATHCONF || defined NAME_MAX)
# define _TINYDIR_USE_READDIR
#endif

/* Use readdir by default */
#else
# define _TINYDIR_USE_READDIR
#endif

/* MINGW32 has two versions of dirent, ASCII and UNICODE*/
#ifndef _MSC_VER
#if (defined __MINGW32__) && (defined _UNICODE)
#define _TINYDIR_DIR _WDIR
#define _tinydir_dirent _wdirent
#define _tinydir_opendir _wopendir
#define _tinydir_readdir _wreaddir
#define _tinydir_closedir _wclosedir
#else
#define _TINYDIR_DIR DIR
#define _tinydir_dirent dirent
#define _tinydir_opendir opendir
#define _tinydir_readdir readdir
#define _tinydir_closedir closedir
#endif
#endif

/* Allow user to use a custom allocator by defining _TINYDIR_MALLOC and _TINYDIR_FREE. */
#if    defined(_TINYDIR_MALLOC) &&  defined(_TINYDIR_FREE)
#elif !defined(_TINYDIR_MALLOC) && !defined(_TINYDIR_FREE)
#else
#error "Either define both alloc and free or none of them!"
#endif

#if !defined(_TINYDIR_MALLOC)
	#define _TINYDIR_MALLOC(_size) malloc(_size)
	#define _TINYDIR_FREE(_ptr)    free(_ptr)
#endif /* !defined(_TINYDIR_MALLOC) */

typedef struct tinydir_file
{
	_tinydir_char_t path[_TINYDIR_PATH_MAX];
	_tinydir_char_t name[_TINYDIR_FILENAME_MAX];
	_tinydir_char_t *extension;
	int is_dir;
	int is_reg;

#ifndef _MSC_VER
#ifdef __MINGW32__
	struct _stat _s;
#else
	struct stat _s;
#endif
#endif
} tinydir_file;

typedef struct tinydir_dir
{
	_tinydir_char_t path[_TINYDIR_PATH_MAX];
	int has_next;
	size_t n_files;

	tinydir_file *_files;
#ifdef _MSC_VER
	HANDLE _h;
	WIN32_FIND_DATA _f;
#else
	_TINYDIR_DIR *_d;
	struct _tinydir_dirent *_e;
#ifndef _TINYDIR_USE_READDIR
	struct _tinydir_dirent *_ep;
#endif
#endif
} tinydir_dir;


/* declarations */

_TINYDIR_FUNC
int tinydir_open(tinydir_dir *dir, const _tinydir_char_t *path);
_TINYDIR_FUNC
int tinydir_open_sorted(tinydir_dir *dir, const _tinydir_char_t *path);
_TINYDIR_FUNC
void tinydir_close(tinydir_dir *dir);

_TINYDIR_FUNC
int tinydir_next(tinydir_dir *dir);
_TINYDIR_FUNC
int tinydir_readfile(const tinydir_dir *dir, tinydir_file *file);
_TINYDIR_FUNC
int tinydir_readfile_n(const tinydir_dir *dir, tinydir_file *file, size_t i);
_TINYDIR_FUNC
int tinydir_open_subdir_n(tinydir_dir *dir, size_t i);

_TINYDIR_FUNC
int tinydir_file_open(tinydir_file *file, const _tinydir_char_t *path);
_TINYDIR_FUNC
void _tinydir_get_ext(tinydir_file *file);
_TINYDIR_FUNC
int _tinydir_file_cmp(const void *a, const void *b);
#ifndef _MSC_VER
#ifndef _TINYDIR_USE_READDIR
_TINYDIR_FUNC
size_t _tinydir_dirent_buf_size(_TINYDIR_DIR *dirp);
#endif
#endif


/* definitions*/

_TINYDIR_FUNC
int tinydir_open(tinydir_dir *dir, const _tinydir_char_t *path)
{
#ifndef _MSC_VER
#ifndef _TINYDIR_USE_READDIR
	int error;
	int size;	/* using int size */
#endif
#else
	_tinydir_char_t path_buf[_TINYDIR_PATH_MAX];
#endif
	_tinydir_char_t *pathp;

	if (dir == NULL || path == NULL || _tinydir_strlen(path) == 0)
	{
		errno = EINVAL;
		return -1;
	}
	if (_tinydir_strlen(path) + _TINYDIR_PATH_EXTRA >= _TINYDIR_PATH_MAX)
	{
		errno = ENAMETOOLONG;
		return -1;
	}

	/* initialise dir */
	dir->_files = NULL;
#ifdef _MSC_VER
	dir->_h = INVALID_HANDLE_VALUE;
#else
	dir->_d = NULL;
#ifndef _TINYDIR_USE_READDIR
	dir->_ep = NULL;
#endif
#endif
	tinydir_close(dir);

	_tinydir_strcpy(dir->path, path);
	/* Remove trailing slashes */
	pathp = &dir->path[_tinydir_strlen(dir->path) - 1];
	while (pathp != dir->path && (*pathp == TINYDIR_STRING('\\') || *pathp == TINYDIR_STRING('/')))
	{
		*pathp = TINYDIR_STRING('\0');
		pathp++;
	}
#ifdef _MSC_VER
	_tinydir_strcpy(path_buf, dir->path);
	_tinydir_strcat(path_buf, TINYDIR_STRING("\\*"));
#if (defined WINAPI_FAMILY) && (WINAPI_FAMILY != WINAPI_FAMILY_DESKTOP_APP)
	dir->_h = FindFirstFileEx(path_buf, FindExInfoStandard, &dir->_f, FindExSearchNameMatch, NULL, 0);
#else
	dir->_h = FindFirstFile(path_buf, &dir->_f);
#endif
	if (dir->_h == INVALID_HANDLE_VALUE)
	{
		errno = ENOENT;
#else
	dir->_d = _tinydir_opendir(path);
	if (dir->_d == NULL)
	{
#endif
		goto bail;
	}

	/* read first file */
	dir->has_next = 1;
#ifndef _MSC_VER
#ifdef _TINYDIR_USE_READDIR
	dir->_e = _tinydir_readdir(dir->_d);
#else
	/* allocate dirent buffer for readdir_r */
	size = _tinydir_dirent_buf_size(dir->_d); /* conversion to int */
	if (size == -1) return -1;
	dir->_ep = (struct _tinydir_dirent*)_TINYDIR_MALLOC(size);
	if (dir->_ep == NULL) return -1;

	error = readdir_r(dir->_d, dir->_ep, &dir->_e);
	if (error != 0) return -1;
#endif
	if (dir->_e == NULL)
	{
		dir->has_next = 0;
	}
#endif

	return 0;

bail:
	tinydir_close(dir);
	return -1;
}

_TINYDIR_FUNC
int tinydir_open_sorted(tinydir_dir *dir, const _tinydir_char_t *path)
{
	/* Count the number of files first, to pre-allocate the files array */
	size_t n_files = 0;
	if (tinydir_open(dir, path) == -1)
	{
		return -1;
	}
	while (dir->has_next)
	{
		n_files++;
		if (tinydir_next(dir) == -1)
		{
			goto bail;
		}
	}
	tinydir_close(dir);

	if (n_files == 0 || tinydir_open(dir, path) == -1)
	{
		return -1;
	}

	dir->n_files = 0;
	dir->_files = (tinydir_file *)_TINYDIR_MALLOC(sizeof *dir->_files * n_files);
	if (dir->_files == NULL)
	{
		goto bail;
	}
	while (dir->has_next)
	{
		tinydir_file *p_file;
		dir->n_files++;

		p_file = &dir->_files[dir->n_files - 1];
		if (tinydir_readfile(dir, p_file) == -1)
		{
			goto bail;
		}

		if (tinydir_next(dir) == -1)
		{
			goto bail;
		}

		/* Just in case the number of files has changed between the first and
		second reads, terminate without writing into unallocated memory */
		if (dir->n_files == n_files)
		{
			break;
		}
	}

	qsort(dir->_files, dir->n_files, sizeof(tinydir_file), _tinydir_file_cmp);

	return 0;

bail:
	tinydir_close(dir);
	return -1;
}

_TINYDIR_FUNC
void tinydir_close(tinydir_dir *dir)
{
	if (dir == NULL)
	{
		return;
	}

	memset(dir->path, 0, sizeof(dir->path));
	dir->has_next = 0;
	dir->n_files = 0;
	_TINYDIR_FREE(dir->_files);
	dir->_files = NULL;
#ifdef _MSC_VER
	if (dir->_h != INVALID_HANDLE_VALUE)
	{
		FindClose(dir->_h);
	}
	dir->_h = INVALID_HANDLE_VALUE;
#else
	if (dir->_d)
	{
		_tinydir_closedir(dir->_d);
	}
	dir->_d = NULL;
	dir->_e = NULL;
#ifndef _TINYDIR_USE_READDIR
	_TINYDIR_FREE(dir->_ep);
	dir->_ep = NULL;
#endif
#endif
}

_TINYDIR_FUNC
int tinydir_next(tinydir_dir *dir)
{
	if (dir == NULL)
	{
		errno = EINVAL;
		return -1;
	}
	if (!dir->has_next)
	{
		errno = ENOENT;
		return -1;
	}

#ifdef _MSC_VER
	if (FindNextFile(dir->_h, &dir->_f) == 0)
#else
#ifdef _TINYDIR_USE_READDIR
	dir->_e = _tinydir_readdir(dir->_d);
#else
	if (dir->_ep == NULL)
	{
		return -1;
	}
	if (readdir_r(dir->_d, dir->_ep, &dir->_e) != 0)
	{
		return -1;
	}
#endif
	if (dir->_e == NULL)
#endif
	{
		dir->has_next = 0;
#ifdef _MSC_VER
		if (GetLastError() != ERROR_SUCCESS &&
			GetLastError() != ERROR_NO_MORE_FILES)
		{
			tinydir_close(dir);
			errno = EIO;
			return -1;
		}
#endif
	}

	return 0;
}

_TINYDIR_FUNC
int tinydir_readfile(const tinydir_dir *dir, tinydir_file *file)
{
	const _tinydir_char_t *filename;
	if (dir == NULL || file == NULL)
	{
		errno = EINVAL;
		return -1;
	}
#ifdef _MSC_VER
	if (dir->_h == INVALID_HANDLE_VALUE)
#else
	if (dir->_e == NULL)
#endif
	{
		errno = ENOENT;
		return -1;
	}
	filename =
#ifdef _MSC_VER
		dir->_f.cFileName;
#else
		dir->_e->d_name;
#endif
	if (_tinydir_strlen(dir->path) +
		_tinydir_strlen(filename) + 1 + _TINYDIR_PATH_EXTRA >=
		_TINYDIR_PATH_MAX)
	{
		/* the path for the file will be too long */
		errno = ENAMETOOLONG;
		return -1;
	}
	if (_tinydir_strlen(filename) >= _TINYDIR_FILENAME_MAX)
	{
		errno = ENAMETOOLONG;
		return -1;
	}

	_tinydir_strcpy(file->path, dir->path);
	if (_tinydir_strcmp(dir->path, TINYDIR_STRING("/")) != 0)
		_tinydir_strcat(file->path, TINYDIR_STRING("/"));
	_tinydir_strcpy(file->name, filename);
	_tinydir_strcat(file->path, filename);
#ifndef _MSC_VER
#ifdef __MINGW32__
	if (_tstat(
#elif (defined _BSD_SOURCE) || (defined _DEFAULT_SOURCE)	\
	|| ((defined _XOPEN_SOURCE) && (_XOPEN_SOURCE >= 500))	\
	|| ((defined _POSIX_C_SOURCE) && (_POSIX_C_SOURCE >= 200112L)) \
	|| ((defined __APPLE__) && (defined __MACH__)) \
	|| (defined BSD)
	if (lstat(
#else
	if (stat(
#endif
		file->path, &file->_s) == -1)
	{
		return -1;
	}
#endif
	_tinydir_get_ext(file);

	file->is_dir =
#ifdef _MSC_VER
		!!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY);
#else
		S_ISDIR(file->_s.st_mode);
#endif
	file->is_reg =
#ifdef _MSC_VER
		!!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_NORMAL) ||
		(
			!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_DEVICE) &&
			!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) &&
			!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_ENCRYPTED) &&
#ifdef FILE_ATTRIBUTE_INTEGRITY_STREAM
			!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_INTEGRITY_STREAM) &&
#endif
#ifdef FILE_ATTRIBUTE_NO_SCRUB_DATA
			!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_NO_SCRUB_DATA) &&
#endif
			!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_OFFLINE) &&
			!(dir->_f.dwFileAttributes & FILE_ATTRIBUTE_TEMPORARY));
#else
		S_ISREG(file->_s.st_mode);
#endif

	return 0;
}

_TINYDIR_FUNC
int tinydir_readfile_n(const tinydir_dir *dir, tinydir_file *file, size_t i)
{
	if (dir == NULL || file == NULL)
	{
		errno = EINVAL;
		return -1;
	}
	if (i >= dir->n_files)
	{
		errno = ENOENT;
		return -1;
	}

	memcpy(file, &dir->_files[i], sizeof(tinydir_file));
	_tinydir_get_ext(file);

	return 0;
}

_TINYDIR_FUNC
int tinydir_open_subdir_n(tinydir_dir *dir, size_t i)
{
	_tinydir_char_t path[_TINYDIR_PATH_MAX];
	if (dir == NULL)
	{
		errno = EINVAL;
		return -1;
	}
	if (i >= dir->n_files || !dir->_files[i].is_dir)
	{
		errno = ENOENT;
		return -1;
	}

	_tinydir_strcpy(path, dir->_files[i].path);
	tinydir_close(dir);
	if (tinydir_open_sorted(dir, path) == -1)
	{
		return -1;
	}

	return 0;
}

/* Open a single file given its path */
_TINYDIR_FUNC
int tinydir_file_open(tinydir_file *file, const _tinydir_char_t *path)
{
	tinydir_dir dir;
	int result = 0;
	int found = 0;
	_tinydir_char_t dir_name_buf[_TINYDIR_PATH_MAX];
	_tinydir_char_t file_name_buf[_TINYDIR_FILENAME_MAX];
	_tinydir_char_t *dir_name;
	_tinydir_char_t *base_name;
#if (defined _MSC_VER || defined __MINGW32__)
	_tinydir_char_t drive_buf[_TINYDIR_PATH_MAX];
	_tinydir_char_t ext_buf[_TINYDIR_FILENAME_MAX];
#endif

	if (file == NULL || path == NULL || _tinydir_strlen(path) == 0)
	{
		errno = EINVAL;
		return -1;
	}
	if (_tinydir_strlen(path) + _TINYDIR_PATH_EXTRA >= _TINYDIR_PATH_MAX)
	{
		errno = ENAMETOOLONG;
		return -1;
	}

	/* Get the parent path */
#if (defined _MSC_VER || defined __MINGW32__)
#if ((defined _MSC_VER) && (_MSC_VER >= 1400))
	errno = _tsplitpath_s(
		path,
		drive_buf, _TINYDIR_DRIVE_MAX,
		dir_name_buf, _TINYDIR_FILENAME_MAX,
		file_name_buf, _TINYDIR_FILENAME_MAX,
		ext_buf, _TINYDIR_FILENAME_MAX);
#else
	_tsplitpath(
		path,
		drive_buf,
		dir_name_buf,
		file_name_buf,
		ext_buf);
#endif

	if (errno)
	{
		return -1;
	}

/* _splitpath_s not work fine with only filename and widechar support */
#ifdef _UNICODE
	if (drive_buf[0] == L'\xFEFE')
		drive_buf[0] = '\0';
	if (dir_name_buf[0] == L'\xFEFE')
		dir_name_buf[0] = '\0';
#endif

	/* Emulate the behavior of dirname by returning "." for dir name if it's
	empty */
	if (drive_buf[0] == '\0' && dir_name_buf[0] == '\0')
	{
		_tinydir_strcpy(dir_name_buf, TINYDIR_STRING("."));
	}
	/* Concatenate the drive letter and dir name to form full dir name */
	_tinydir_strcat(drive_buf, dir_name_buf);
	dir_name = drive_buf;
	/* Concatenate the file name and extension to form base name */
	_tinydir_strcat(file_name_buf, ext_buf);
	base_name = file_name_buf;
#else
	_tinydir_strcpy(dir_name_buf, path);
	dir_name = dirname(dir_name_buf);
	_tinydir_strcpy(file_name_buf, path);
	base_name = basename(file_name_buf);
#endif

	/* Special case: if the path is a root dir, open the parent dir as the file */
#if (defined _MSC_VER || defined __MINGW32__)
	if (_tinydir_strlen(base_name) == 0)
#else
	if ((_tinydir_strcmp(base_name, TINYDIR_STRING("/"))) == 0)
#endif
	{
		memset(file, 0, sizeof * file);
		file->is_dir = 1;
		file->is_reg = 0;
		_tinydir_strcpy(file->path, dir_name);
		file->extension = file->path + _tinydir_strlen(file->path);
		return 0;
	}

	/* Open the parent directory */
	if (tinydir_open(&dir, dir_name) == -1)
	{
		return -1;
	}

	/* Read through the parent directory and look for the file */
	while (dir.has_next)
	{
		if (tinydir_readfile(&dir, file) == -1)
		{
			result = -1;
			goto bail;
		}
		if (_tinydir_strcmp(file->name, base_name) == 0)
		{
			/* File found */
			found = 1;
			break;
		}
		tinydir_next(&dir);
	}
	if (!found)
	{
		result = -1;
		errno = ENOENT;
	}

bail:
	tinydir_close(&dir);
	return result;
}

_TINYDIR_FUNC
void _tinydir_get_ext(tinydir_file *file)
{
	_tinydir_char_t *period = _tinydir_strrchr(file->name, TINYDIR_STRING('.'));
	if (period == NULL)
	{
		file->extension = &(file->name[_tinydir_strlen(file->name)]);
	}
	else
	{
		file->extension = period + 1;
	}
}

_TINYDIR_FUNC
int _tinydir_file_cmp(const void *a, const void *b)
{
	const tinydir_file *fa = (const tinydir_file *)a;
	const tinydir_file *fb = (const tinydir_file *)b;
	if (fa->is_dir != fb->is_dir)
	{
		return -(fa->is_dir - fb->is_dir);
	}
	return _tinydir_strncmp(fa->name, fb->name, _TINYDIR_FILENAME_MAX);
}

#ifndef _MSC_VER
#ifndef _TINYDIR_USE_READDIR
/*
The following authored by Ben Hutchings <ben@decadent.org.uk>
from https://womble.decadent.org.uk/readdir_r-advisory.html
*/
/* Calculate the required buffer size (in bytes) for directory      *
* entries read from the given directory handle.  Return -1 if this  *
* this cannot be done.                                              *
*                                                                   *
* This code does not trust values of NAME_MAX that are less than    *
* 255, since some systems (including at least HP-UX) incorrectly    *
* define it to be a smaller value.                                  */
_TINYDIR_FUNC
size_t _tinydir_dirent_buf_size(_TINYDIR_DIR *dirp)
{
	long name_max;
	size_t name_end;
	/* parameter may be unused */
	(void)dirp;

#if defined _TINYDIR_USE_FPATHCONF
	name_max = fpathconf(dirfd(dirp), _PC_NAME_MAX);
	if (name_max == -1)
#if defined(NAME_MAX)
		name_max = (NAME_MAX > 255) ? NAME_MAX : 255;
#else
		return (size_t)(-1);
#endif
#elif defined(NAME_MAX)
 	name_max = (NAME_MAX > 255) ? NAME_MAX : 255;
#else
#error "buffer size for readdir_r cannot be determined"
#endif
	name_end = (size_t)offsetof(struct _tinydir_dirent, d_name) + name_max + 1;
	return (name_end > sizeof(struct _tinydir_dirent) ?
		name_end : sizeof(struct _tinydir_dirent));
}
#endif
#endif

#ifdef __cplusplus
}
#endif

# if defined (_MSC_VER)
# pragma warning(pop)
# endif

#endif
#line 0 "/Users/tony/projects/litac-lang/stdlib/std/fs/tinydir/tinydir.h"


typedef struct litaC_std__builtins__any litaC_std__builtins__any;
typedef struct litaC_std__builtins__String litaC_std__builtins__String;
typedef struct litaC_std__builtins__NativeVararg litaC_std__builtins__NativeVararg;


#line 33 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
typedef enum litaC_std__test__TestStatus {litaC_std__test__TestStatus_SUCCESS,
litaC_std__test__TestStatus_FAILED,
litaC_std__test__TestStatus_DISABLED} litaC_std__test__TestStatus;
typedef struct litaC_std__test__TestInfoMessage litaC_std__test__TestInfoMessage;
typedef struct litaC_std__test__AssertEntry litaC_std__test__AssertEntry;
typedef struct litaC_std__test__TestSuite litaC_std__test__TestSuite;
typedef struct litaC_std__test__TestCase litaC_std__test__TestCase;
typedef struct litaC_std__mem__Allocator litaC_std__mem__Allocator;
typedef struct litaC_std__string__SplitIter litaC_std__string__SplitIter;
typedef struct litaC_std__string__builder__StringBuilder litaC_std__string__builder__StringBuilder;
typedef struct litaC_std__io__File litaC_std__io__File;


#line 29 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
typedef enum litaC_std__io__FileStatus {litaC_std__io__FileStatus_Ok = 
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
0,
litaC_std__io__FileStatus_FileNotFoundError,
litaC_std__io__FileStatus_IOError,
litaC_std__io__FileStatus_OutOfMemory,
litaC_std__io__FileStatus_BufferOverflow,
litaC_std__io__FileStatus_EndOfFile} litaC_std__io__FileStatus;

#line 38 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
typedef enum litaC_std__io__FileOpenOp {litaC_std__io__FileOpenOp_READ_ONLY,
litaC_std__io__FileOpenOp_READ_ONLY_BINARY,
litaC_std__io__FileOpenOp_WRITE,
litaC_std__io__FileOpenOp_WRITE_BINARY,
litaC_std__io__FileOpenOp_WRITE_APPEND,
litaC_std__io__FileOpenOp_WRITE_APPEND_BINARY} litaC_std__io__FileOpenOp;
typedef struct litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__StringBuffer;


#line 26 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
typedef enum litaC_std__terminal__ConsoleColors {litaC_std__terminal__ConsoleColors_CLEAR,
litaC_std__terminal__ConsoleColors_BLACK,
litaC_std__terminal__ConsoleColors_RED,
litaC_std__terminal__ConsoleColors_GREEN,
litaC_std__terminal__ConsoleColors_YELLOW,
litaC_std__terminal__ConsoleColors_BLUE,
litaC_std__terminal__ConsoleColors_MAGENTA,
litaC_std__terminal__ConsoleColors_CYAN,
litaC_std__terminal__ConsoleColors_WHITE} litaC_std__terminal__ConsoleColors;
typedef struct litaC_std__system__Process litaC_std__system__Process;
typedef struct litaC_std__json__JsonContext litaC_std__json__JsonContext;


#line 65 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
typedef enum litaC_std__json__JsonType {litaC_std__json__JsonType_NULL,
litaC_std__json__JsonType_BOOLEAN,
litaC_std__json__JsonType_INT_NUMBER,
litaC_std__json__JsonType_FLOAT_NUMBER,
litaC_std__json__JsonType_STRING,
litaC_std__json__JsonType_OBJECT,
litaC_std__json__JsonType_ARRAY} litaC_std__json__JsonType;
typedef struct litaC_std__json__JsonEntry litaC_std__json__JsonEntry;
typedef struct litaC_std__json__JsonObject litaC_std__json__JsonObject;
typedef union litaC_std__json__JsonValue litaC_std__json__JsonValue;
typedef struct litaC_std__json__JsonNode litaC_std__json__JsonNode;
typedef struct litaC_std__json__JsonIterator litaC_std__json__JsonIterator;

#line 771 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
typedef enum litaC_std__json__TokenKind {litaC_std__json__TokenKind_EOF,
litaC_std__json__TokenKind_ERROR,
litaC_std__json__TokenKind_COMMA,
litaC_std__json__TokenKind_COLON,
litaC_std__json__TokenKind_LEFT_BRACE,
litaC_std__json__TokenKind_RIGHT_BRACE,
litaC_std__json__TokenKind_LEFT_BRACKET,
litaC_std__json__TokenKind_RIGHT_BRACKET,
litaC_std__json__TokenKind_NULL,
litaC_std__json__TokenKind_INT_NUMBER,
litaC_std__json__TokenKind_REAL_NUMBER,
litaC_std__json__TokenKind_TRUE,
litaC_std__json__TokenKind_FALSE,
litaC_std__json__TokenKind_STRING} litaC_std__json__TokenKind;
typedef struct litaC_std__json__SrcPos litaC_std__json__SrcPos;
typedef union litaC_std__json__anon_0 litaC_std__json__anon_0;
typedef struct litaC_std__json__Token litaC_std__json__Token;

#line 859 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
typedef enum litaC_std__json__JsonParserStatus {litaC_std__json__JsonParserStatus_OK = 
#line 860 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
0,
litaC_std__json__JsonParserStatus_WARNING,
litaC_std__json__JsonParserStatus_ERROR} litaC_std__json__JsonParserStatus;
typedef struct litaC_std__json__JsonParser litaC_std__json__JsonParser;

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
typedef enum litaC_std__map__KeyState {litaC_std__map__KeyState_EMPTY = 
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
0,
litaC_std__map__KeyState_TOMBSTONE} litaC_std__map__KeyState;
typedef struct litaC_std__time__Time litaC_std__time__Time;
typedef struct litaC_std__time__Date litaC_std__time__Date;
typedef struct litaC_std__time__DateTime litaC_std__time__DateTime;
typedef struct litaC_std__time__Offset litaC_std__time__Offset;
typedef struct litaC_std__time__OffsetDateTime litaC_std__time__OffsetDateTime;

#line 49 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
typedef enum litaC_std__time__Weekday {litaC_std__time__Weekday_Sunday = 
#line 50 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
0,
litaC_std__time__Weekday_Monday,
litaC_std__time__Weekday_Tuesday,
litaC_std__time__Weekday_Wednesday,
litaC_std__time__Weekday_Thursday,
litaC_std__time__Weekday_Friday,
litaC_std__time__Weekday_Saturday} litaC_std__time__Weekday;

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
typedef enum litaC_std__time__Month {litaC_std__time__Month_January = 
#line 60 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
1,
litaC_std__time__Month_February,
litaC_std__time__Month_March,
litaC_std__time__Month_April,
litaC_std__time__Month_May,
litaC_std__time__Month_June,
litaC_std__time__Month_July,
litaC_std__time__Month_August,
litaC_std__time__Month_September,
litaC_std__time__Month_October,
litaC_std__time__Month_November,
litaC_std__time__Month_December} litaC_std__time__Month;

#line 74 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
typedef enum litaC_std__time__TimeUnit {litaC_std__time__TimeUnit_NANOSECONDS,
litaC_std__time__TimeUnit_MILLISECONDS,
litaC_std__time__TimeUnit_SECONDS,
litaC_std__time__TimeUnit_MINUTES,
litaC_std__time__TimeUnit_HOURS,
litaC_std__time__TimeUnit_DAYS,
litaC_std__time__TimeUnit_MONTHS,
litaC_std__time__TimeUnit_YEARS} litaC_std__time__TimeUnit;

#line 85 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
typedef enum litaC_std__time__DateTimeStatus {litaC_std__time__DateTimeStatus_OK,
litaC_std__time__DateTimeStatus_INVALID_INPUT_FORMAT} litaC_std__time__DateTimeStatus;


#line 7 "/Users/tony/projects/ringhttp/src/http_common.lita"
typedef enum litaC_http_common__Status {litaC_http_common__Status_OK,
litaC_http_common__Status_ERROR_OUT_OF_MEMORY,
litaC_http_common__Status_ERROR_CREATING_THREAD,
litaC_http_common__Status_ERROR_UNABLE_TO_CREATE_SERVER_SOCKET,
litaC_http_common__Status_ERROR_CREATING_ADDRESS,
litaC_http_common__Status_ERROR_SOCKET_BIND,
litaC_http_common__Status_ERROR_SOCKET_LISTEN,
litaC_http_common__Status_ERROR_FILE_NOT_FOUND,
litaC_http_common__Status_ERROR_IO_ERROR,
litaC_http_common__Status_ERROR_IOURING_ERROR,
litaC_http_common__Status_ERROR_PIPE_ERROR,
litaC_http_common__Status_ERROR_PARSING_HTTP_REQUEST,
litaC_http_common__Status_ERROR_UNSUPPORTED_METHOD,
litaC_http_common__Status_ERROR_REQUEST_PATH_NOT_ALLOWED,
litaC_http_common__Status_ERROR_UNKNOWN_BODY_LENGTH,
litaC_http_common__Status_ERROR_INVALID_REQUEST_PATH,
litaC_http_common__Status_ERROR_INVALID_REQUEST_PATH_EXCEEDED_LIMIT,
litaC_http_common__Status_ERROR_INVALID_HEADER_EXCEEDED_LIMIT,
litaC_http_common__Status_ERROR_INVALID_BODY_EXCEEDED_LIMIT,
litaC_http_common__Status_ERROR_NO_ROUTE_FOUND,
litaC_http_common__Status_ERROR_NO_STREAM_HANDLER_FOUND,
litaC_http_common__Status_ERROR_UNABLE_TO_REGISTER_HANDLER,
litaC_http_common__Status_ERROR_CONTROLLER_CALLBACK_ERROR,
litaC_http_common__Status_PARTIAL_REQUEST_DISPATCHING_READ,
litaC_http_common__Status_ERROR_UNSUPPORTED_UPGRADE_PROTOCOL,
litaC_http_common__Status_ERROR_WEB_SOCKET_SECURITY_KEY,
litaC_http_common__Status_ERROR_WEB_SOCKET_FRAME,
litaC_http_common__Status_ERROR_WEB_SOCKET_FRAME_LENGTH,
litaC_http_common__Status_ERROR_WEB_SOCKET_HANDLE_FRAME_ERROR,
litaC_http_common__Status_PARTIAL_WEB_SOCKET_DISPATCHING_READ,
litaC_http_common__Status_WEB_SOCKET_CLOSED,
litaC_http_common__Status_ERROR_TEMPLATE_NO_END_TAG,
litaC_http_common__Status_ERROR_TEMPLATE_START_TAG_BEFORE_END_TAG,
litaC_http_common__Status_ERROR_TEMPLATE_INVALID_COMMAND} litaC_http_common__Status;
typedef struct litaC_template__Template litaC_template__Template;

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
typedef enum litaC_std__fs__ListFileFlags {litaC_std__fs__ListFileFlags_RECURSE_DIRECTORIES = 
#line 17 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
(1 << 1)} litaC_std__fs__ListFileFlags;
typedef struct litaC_std__fs__FileHandle litaC_std__fs__FileHandle;
typedef struct litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_ litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_;
typedef struct litaC_std__array__std__array__Array_cb__ptr_const_char_ce_ litaC_std__array__std__array__Array_cb__ptr_const_char_ce_;
typedef struct litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_ litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_;
typedef struct litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_ litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_;
typedef struct litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_ litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_;
typedef struct litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_ litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_;
typedef struct litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_ litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_;
typedef struct litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_ litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_;
typedef struct litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_ litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_;
typedef struct litaC_std__map__std__map__Map_cb_i32_c_i32_ce_ litaC_std__map__std__map__Map_cb_i32_c_i32_ce_;
typedef struct litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_ litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_;
typedef struct litaC_std__array__std__array__Array_cb_std__builtins__String_ce_ litaC_std__array__std__array__Array_cb_std__builtins__String_ce_;
typedef struct litaC_std__array__std__array__Array_cb_i32_ce_ litaC_std__array__std__array__Array_cb_i32_ce_;
typedef struct litaC_std__map__std__map__Map_cb_i64_c_i32_ce_ litaC_std__map__std__map__Map_cb_i64_c_i32_ce_;
typedef struct litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_ litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_;

#line 10 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_i32 litaC_Users__tony__projects__ringhttp__src__pre_main__main(litaC_i32 litaC_len,litaC_char** litaC_args);

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestSuite_init(litaC_std__test__TestSuite* litaC_this,const litaC_std__mem__Allocator* litaC_allocator);

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestSuite_free(litaC_std__test__TestSuite* litaC_this);

#line 101 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase* litaC_std__test__TestSuite_enterTest(litaC_std__test__TestSuite* litaC_this);

#line 112 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase* litaC_std__test__TestSuite_addDynamicTest(litaC_std__test__TestSuite* litaC_this,const litaC_char* litaC_name,litaC_void* litaC_userData,litaC_void (*litaC_testFn)(litaC_std__test__TestCase*,litaC_void*),litaC_void (*litaC_cleanupFn)(litaC_std__test__TestCase*,litaC_void*));

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase* litaC_std__test__TestSuite_enterDynamicTest(litaC_std__test__TestSuite* litaC_this);

#line 141 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestSuite_executeDynamicTest(litaC_std__test__TestSuite* litaC_this);

#line 152 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestSuite_printDynamicTest(litaC_std__test__TestSuite* litaC_this,litaC_bool litaC_isJsonFormat);

#line 160 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_init(litaC_std__test__TestCase* litaC_this,litaC_std__test__TestSuite* litaC_testSuite);

#line 165 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_free(litaC_std__test__TestCase* litaC_this);

#line 169 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_reset(litaC_std__test__TestCase* litaC_this);

#line 173 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_addError(litaC_std__test__TestCase* litaC_this,const litaC_char* litaC_error,const litaC_char* litaC_filename,litaC_usize litaC_lineNumber);

#line 187 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_printResults(litaC_std__test__TestCase* litaC_this,const litaC_char* litaC_name,litaC_bool litaC_isJson);

#line 256 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__AssertCStr(const litaC_char* litaC_expected,const litaC_char* litaC_actual,const litaC_char* litaC_filename,litaC_usize litaC_lineNumber);

#line 286 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__Assert(litaC_bool litaC_cond,const litaC_char* litaC_filename,litaC_usize litaC_lineNumber);


#line 381 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__testInsertAll(void);

#line 48 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* litaC_std__mem__memduplicate(const litaC_void* litaC_p,litaC_usize litaC_len,const litaC_std__mem__Allocator* litaC_a);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_bool litaC_std__mem__isPowerOfTwo(litaC_usize litaC_x);

#line 65 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_usize litaC_std__mem__alignForward(litaC_usize litaC_ptr,litaC_usize litaC_align);
LITAC_INLINE 

#line 132 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* litaC_std__mem__Allocator_alloc(const litaC_std__mem__Allocator* litaC_a,litaC_usize litaC_size);
LITAC_INLINE 

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* litaC_std__mem__Allocator_calloc(const litaC_std__mem__Allocator* litaC_a,litaC_usize litaC_num,litaC_usize litaC_size);
LITAC_INLINE 

#line 142 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* litaC_std__mem__Allocator_realloc(const litaC_std__mem__Allocator* litaC_a,litaC_void* litaC_ptr,litaC_usize litaC_oldsize,litaC_usize litaC_newsize);
LITAC_INLINE 

#line 147 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void litaC_std__mem__Allocator_free(const litaC_std__mem__Allocator* litaC_a,litaC_void* litaC_ptr);


#line 279 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void litaC_std__mem__testLineNumber(void);

#line 211 "/Users/tony/projects/litac-lang/stdlib/std/libc/libc.lita"
litaC_i32 litaC_std__libc___vscprintf(const litaC_char* litaC_format,va_list litaC_args);

#line 7 "/Users/tony/projects/litac-lang/stdlib/std/assert.lita"
litaC_void litaC_std__assert__assert(litaC_bool litaC_cond,const litaC_char* litaC_filename,litaC_usize litaC_lineNumber);

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__StringInit(const litaC_char* litaC_buffer,litaC_i32 litaC_length);

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_std__string__String_hash(litaC_std__builtins__String litaC_b);

#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_substring(litaC_std__builtins__String litaC_b,litaC_i32 litaC_start,litaC_i32 litaC_end);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_substringOf(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_substringOfAfter(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str);

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_startsWith(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_prefix,litaC_i32 litaC_fromIndex);

#line 93 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_endsWith(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_suffix);

#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_equalsString(litaC_std__builtins__String litaC_b,const litaC_char* litaC_str,litaC_i32 litaC_len);

#line 110 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_equals(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_other);

#line 114 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_equalsIgnoreCase(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str);

#line 139 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_contains(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str);

#line 143 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_endIndexOf(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str);

#line 147 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_endIndexOfAt(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str,litaC_i32 litaC_fromIndex);

#line 153 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_indexOf(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str);

#line 157 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_indexOfAt(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str,litaC_i32 litaC_fromIndex);

#line 201 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_lastIndexOfAt(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str,litaC_i32 litaC_fromIndex);

#line 262 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__SplitIter_hasNext(litaC_std__string__SplitIter* litaC_this);

#line 267 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__SplitIter_next(litaC_std__string__SplitIter* litaC_this);

#line 276 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__SplitIter_remaining(litaC_std__string__SplitIter* litaC_this);

#line 288 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__string__SplitIter litaC_std__string__String_split(litaC_std__builtins__String litaC_this,litaC_std__builtins__String litaC_str);

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_leftTrim(litaC_std__builtins__String litaC_this);

#line 309 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_rightTrim(litaC_std__builtins__String litaC_this);

#line 321 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_trim(litaC_std__builtins__String litaC_this);

#line 326 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_copyTo(litaC_std__builtins__String litaC_b,litaC_char* litaC_buf,litaC_i32 litaC_len,litaC_bool litaC_addZero);

#line 343 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_copy(litaC_std__builtins__String litaC_s,const litaC_std__mem__Allocator* litaC_allocator);

#line 362 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__String_forEach(litaC_std__builtins__String litaC_b,litaC_bool (*litaC_fn)(litaC_char));

#line 370 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_empty(litaC_std__builtins__String litaC_b);

#line 374 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_size(litaC_std__builtins__String litaC_b);

#line 378 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char litaC_std__string__String_get(litaC_std__builtins__String litaC_b,litaC_i32 litaC_index);

#line 386 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char* litaC_std__string__String_toCStr(litaC_std__builtins__String litaC_b,const litaC_std__mem__Allocator* litaC_allocator);

#line 391 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char* litaC_std__string__StringClone(const litaC_char* litaC_original,litaC_i32 litaC_len,const litaC_std__mem__Allocator* litaC_allocator);

#line 411 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char* litaC_std__string__StringCopy(const litaC_char* litaC_src,litaC_char* litaC_dest,litaC_usize litaC_size);

#line 426 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_std__string__StringHashLen(const litaC_char* litaC_str,litaC_usize litaC_size);

#line 438 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_std__string__StringHash(const litaC_char* litaC_str);

#line 448 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__StringEqualLen(const litaC_char* litaC_a,const litaC_char* litaC_b,litaC_usize litaC_size);

#line 455 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__StringEqual(const litaC_char* litaC_a,const litaC_char* litaC_b);

#line 462 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_std__string__char_hash(const litaC_char* litaC_str);

#line 466 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__char_equals(const litaC_char* litaC_str,const litaC_char* litaC_other);

#line 473 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__char_equalsString(const litaC_char* litaC_str,litaC_std__builtins__String litaC_other);

#line 477 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__char_length(const litaC_char* litaC_str);

#line 482 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__char_empty(const litaC_char* litaC_str);

#line 486 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__char_toString(const litaC_char* litaC_str);


#line 495 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testEquals(void);


#line 513 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testContains(void);


#line 526 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testStartsWith(void);


#line 543 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testEndsWith(void);


#line 556 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testIndexOf(void);


#line 572 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testLastIndexOf(void);


#line 587 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testSplitSingle(void);


#line 614 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testSplitMulti(void);


#line 642 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testSplitOne(void);


#line 661 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testSplitOneFirst(void);


#line 687 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testSplitOneLast(void);


#line 706 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testLeftTrim(void);


#line 721 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testRightTrim(void);


#line 736 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__testTrim(void);

#line 49 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
litaC_void* litaC_std__mem__libc_allocator__cMalloc(const litaC_std__mem__Allocator* litaC_a,litaC_usize litaC_size);

#line 53 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
litaC_void* litaC_std__mem__libc_allocator__cCalloc(const litaC_std__mem__Allocator* litaC_a,litaC_usize litaC_num,litaC_usize litaC_size);

#line 57 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
litaC_void* litaC_std__mem__libc_allocator__cRealloc(const litaC_std__mem__Allocator* litaC_a,litaC_void* litaC_ptr,litaC_usize litaC_oldSize,litaC_usize litaC_size);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
litaC_void litaC_std__mem__libc_allocator__cFree(const litaC_std__mem__Allocator* litaC_a,litaC_void* litaC_ptr);

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder litaC_std__string__builder__StringBuilderInit(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__StringBuilder_init(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 42 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__StringBuilder_free(litaC_std__string__builder__StringBuilder* litaC_b);

#line 51 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendString(litaC_std__string__builder__StringBuilder* litaC_b,litaC_std__builtins__String litaC_str);

#line 55 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendStr(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_str);

#line 64 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendStrn(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_str,litaC_i32 litaC_len);

#line 83 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendFloat(litaC_std__string__builder__StringBuilder* litaC_b,litaC_f64 litaC_f);

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendI32(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_i);

#line 91 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendI64(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i64 litaC_i);

#line 95 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendU32(litaC_std__string__builder__StringBuilder* litaC_b,litaC_u32 litaC_i);

#line 99 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendU64(litaC_std__string__builder__StringBuilder* litaC_b,litaC_u64 litaC_i);

#line 103 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendChar(litaC_std__string__builder__StringBuilder* litaC_b,litaC_char litaC_c);

#line 116 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_append(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_format,...);

#line 140 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendArgs(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_format,va_list litaC_args);

#line 204 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_format(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_format,...);

#line 215 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__StringBuilder_delete(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_start,litaC_i32 litaC_end);

#line 240 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_bool litaC_std__string__builder__StringBuilder_contains(litaC_std__string__builder__StringBuilder* litaC_b,litaC_std__builtins__String litaC_str);

#line 244 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_indexOf(litaC_std__string__builder__StringBuilder* litaC_b,litaC_std__builtins__String litaC_str);

#line 248 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_indexOfAt(litaC_std__string__builder__StringBuilder* litaC_b,litaC_std__builtins__String litaC_str,litaC_i32 litaC_fromIndex);

#line 253 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_replace(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_start,litaC_i32 litaC_end,litaC_std__builtins__String litaC_str);

#line 258 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_insert(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_index,const litaC_char* litaC_format,...);

#line 303 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder* litaC_std__string__builder__StringBuilder_trim(litaC_std__string__builder__StringBuilder* litaC_b);

#line 342 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_copyTo(litaC_std__string__builder__StringBuilder* litaC_b,litaC_char* litaC_buf,litaC_i32 litaC_len,litaC_bool litaC_addZero);

#line 347 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__StringBuilder_forEach(litaC_std__string__builder__StringBuilder* litaC_b,litaC_bool (*litaC_fn)(litaC_char));


#line 362 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder litaC_std__string__builder__StringBuilder_slice(litaC_std__string__builder__StringBuilder* litaC_b);
LITAC_INLINE 

#line 370 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_remaining(litaC_std__string__builder__StringBuilder* litaC_b);
LITAC_INLINE 

#line 375 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_bool litaC_std__string__builder__StringBuilder_empty(litaC_std__string__builder__StringBuilder* litaC_b);
LITAC_INLINE 

#line 380 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_size(litaC_std__string__builder__StringBuilder* litaC_b);
LITAC_INLINE 

#line 385 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder* litaC_std__string__builder__StringBuilder_clear(litaC_std__string__builder__StringBuilder* litaC_b);

#line 390 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
const litaC_char* litaC_std__string__builder__StringBuilder_cStrConst(litaC_std__string__builder__StringBuilder* litaC_b);

#line 394 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_char* litaC_std__string__builder__StringBuilder_cStr(litaC_std__string__builder__StringBuilder* litaC_b);
LITAC_INLINE 

#line 407 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__builder__StringBuilder_toBuffer(litaC_std__string__builder__StringBuilder* litaC_b);

#line 411 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_char litaC_std__string__builder__StringBuilder_get(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_index);

#line 419 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_bool litaC_std__string__builder__StringBuilder_reserve(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_length);

#line 428 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_bool litaC_std__string__builder__BufferGrow(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_increment);


#line 450 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__testTrim(void);

#line 55 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__File_open(litaC_std__io__File* litaC_file,const litaC_char* litaC_filename,litaC_std__io__FileOpenOp litaC_op);

#line 98 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_std__io__File_length(litaC_std__io__File* litaC_file);

#line 117 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i32 litaC_std__io__File_handle(litaC_std__io__File* litaC_file);

#line 126 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_std__io__File_position(litaC_std__io__File* litaC_file);

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__File_seek(litaC_std__io__File* litaC_this,litaC_i64 litaC_pos);

#line 138 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_void litaC_std__io__File_close(litaC_std__io__File* litaC_file);

#line 150 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__File_readBytes(litaC_std__io__File* litaC_this,litaC_char* litaC_buffer,litaC_usize litaC_length);

#line 172 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__File_writeBytes(litaC_std__io__File* litaC_this,const litaC_char* litaC_buffer,litaC_usize litaC_len);

#line 195 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_std__io__FileLength(const litaC_char* litaC_fileName);

#line 210 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__ReadFileFullyStr(litaC_std__builtins__String litaC_fileName,litaC_std__string__builder__StringBuilder* litaC_buffer);

#line 227 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__ReadFileFully(const litaC_char* litaC_fileName,litaC_std__string__builder__StringBuilder* litaC_buffer);

#line 275 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__ReadFile(const litaC_char* litaC_fileName,litaC_char** litaC_data,litaC_usize* litaC_length,const litaC_std__mem__Allocator* litaC_alloc);

#line 324 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__WriteFile(const litaC_char* litaC_fileName,const litaC_char* litaC_buffer,litaC_usize litaC_len);

#line 13 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__CString(litaC_char* litaC_str,litaC_i32 litaC_len);

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__StringBufferInit(litaC_char* litaC_str,litaC_i32 litaC_capacity,litaC_i32 litaC_len);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_u32 litaC_std__string__buffer__StringBuffer_hash(litaC_std__string__buffer__StringBuffer* litaC_s);

#line 62 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_bool litaC_std__string__buffer__StringBuffer_equals(litaC_std__string__buffer__StringBuffer* litaC_s,litaC_std__string__buffer__StringBuffer* litaC_other);

#line 73 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_format(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_format,...);

#line 91 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_formatv(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_format,va_list litaC_args);

#line 104 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_append(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_format,...);

#line 125 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_appendv(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_format,va_list litaC_args);

#line 142 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_appendStr(litaC_std__string__buffer__StringBuffer* litaC_b,const litaC_char* litaC_str);

#line 151 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_appendStrn(litaC_std__string__buffer__StringBuffer* litaC_b,const litaC_char* litaC_str,litaC_i32 litaC_len);

#line 167 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_setStrn(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_str,litaC_i32 litaC_len);

#line 182 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_appendChar(litaC_std__string__buffer__StringBuffer* litaC_s,litaC_char litaC_c);

#line 191 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__builtins__String litaC_std__string__buffer__StringBuffer_substring(litaC_std__string__buffer__StringBuffer litaC_s,litaC_i32 litaC_start,litaC_i32 litaC_end);

#line 209 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_memset(litaC_std__string__buffer__StringBuffer litaC_s,litaC_i32 litaC_value);

#line 216 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_toLower(litaC_std__string__buffer__StringBuffer litaC_s);

#line 222 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_toUpper(litaC_std__string__buffer__StringBuffer litaC_s);

#line 228 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__StringBuffer_copy(litaC_std__string__buffer__StringBuffer litaC_s,const litaC_std__mem__Allocator* litaC_allocator);

#line 249 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_adjust(litaC_std__string__buffer__StringBuffer* litaC_s);

#line 253 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_clear(litaC_std__string__buffer__StringBuffer* litaC_s);

#line 258 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_bool litaC_std__string__buffer__StringBuffer_empty(litaC_std__string__buffer__StringBuffer litaC_s);

#line 262 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_size(litaC_std__string__buffer__StringBuffer litaC_s);

#line 266 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_remaining(litaC_std__string__buffer__StringBuffer litaC_s);

#line 270 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_char* litaC_std__string__buffer__StringBuffer_cStr(litaC_std__string__buffer__StringBuffer litaC_s);

#line 277 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
const litaC_char* litaC_std__string__buffer__StringBuffer_cStrConst(litaC_std__string__buffer__StringBuffer litaC_s);

#line 284 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__StringBuffer_slice(litaC_std__string__buffer__StringBuffer litaC_s);
LITAC_INLINE 

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__builtins__String litaC_std__string__buffer__StringBuffer_toString(litaC_std__string__buffer__StringBuffer litaC_s);


#line 23 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_void litaC_std__limits__testLimits(void);

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__char_isWhitespace(litaC_char litaC_this);

#line 32 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__char_isNumeric(litaC_char litaC_this);

#line 36 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__char_isAlphabetic(litaC_char litaC_this);

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__char_isAlphanumeric(litaC_char litaC_this);

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_i32 litaC_std__ascii__char_asHex(litaC_char litaC_this);


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_void litaC_std__ascii__testWhitespace(void);

#line 183 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__ArchAsStr(Lita_ArchType litaC_type);

#line 195 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
Lita_ArchType litaC_std__system__ArchFromStr(const litaC_char* litaC_str,litaC_usize litaC_len);

#line 260 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__OSAsStr(Lita_OSType litaC_type);

#line 273 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
Lita_OSType litaC_std__system__OSFromStr(const litaC_char* litaC_str,litaC_usize litaC_len);



#line 358 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__SystemInit(void);

#line 362 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
Lita_OSType litaC_std__system__GetOS(void);

#line 366 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
Lita_ArchType litaC_std__system__GetArch(void);

#line 370 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__GetEnv(const litaC_char* litaC_varName);

#line 374 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_void litaC_std__system__SetEnv(const litaC_char* litaC_varName,const litaC_char* litaC_value);

#line 380 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__CurrentWorkingPath(void);

#line 384 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileTruncate(const litaC_char* litaC_filename,litaC_usize litaC_newLength);

#line 388 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileTruncateFile(FILE* litaC_file,litaC_usize litaC_newLength);

#line 392 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileDelete(const litaC_char* litaC_filename);

#line 396 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileExists(const litaC_char* litaC_filename);

#line 401 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileMove(const litaC_char* litaC_srcFilename,const litaC_char* litaC_destFilename);

#line 405 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileIsDir(const litaC_char* litaC_filename);

#line 409 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__Mkdir(const litaC_char* litaC_dir);

#line 413 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__Mkdirs(const litaC_char* litaC_dir);

#line 443 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__FilePath(const litaC_char* litaC_filename,litaC_char* litaC_out);

#line 467 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__FileParent(const litaC_char* litaC_filename,litaC_char* litaC_out,litaC_i32* litaC_length);

#line 498 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__PathNormalize(const litaC_char* litaC_filename,litaC_char* litaC_out);

#line 519 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__PathNative(const litaC_char* litaC_filename,litaC_char* litaC_out);

#line 546 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_std__system__strcicmp(const litaC_char* litaC_a,const litaC_char* litaC_b,litaC_usize litaC_size);

#line 573 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__GetAbsolutePath(const litaC_char* litaC_pwd,const litaC_char* litaC_path,litaC_char* litaC_output);

#line 630 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__PathEquals(const litaC_char* litaC_a,const litaC_char* litaC_b);

#line 658 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__FilePathToUri(const litaC_char* litaC_path,litaC_char* litaC_output);

#line 681 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__UriToFilePath(const litaC_char* litaC_uri,litaC_char* litaC_output);


#line 803 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_f64 litaC_std__system__SystemTimeMSec(void);

#line 823 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__CurrentDateTime(void);

#line 834 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__system__Process litaC_std__system__SystemExec(const litaC_char* litaC_command);

#line 846 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i64 litaC_std__system__Process_readOutput(litaC_std__system__Process* litaC_this,litaC_char* litaC_buffer,litaC_usize litaC_length);

#line 854 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i64 litaC_std__system__Process_writeInput(litaC_std__system__Process* litaC_this,litaC_char* litaC_buffer,litaC_usize litaC_length);

#line 862 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_std__system__Process_close(litaC_std__system__Process* litaC_this);


#line 874 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_std__system__LoadEnv(const litaC_char* litaC_envFile,const litaC_std__mem__Allocator* litaC_allocator);


#line 910 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_void litaC_std__system__testAbsolutePath(void);


#line 919 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_void litaC_std__system__testMkdirDelete(void);


#line 48 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_bool litaC_std__system__system_posix___SystemInit(void);

#line 56 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
const litaC_char* litaC_std__system__system_posix___CurrentWorkingPath(void);

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_bool litaC_std__system__system_posix___Mkdir(const litaC_char* litaC_dir);

#line 102 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_bool litaC_std__system__system_posix___FileIsDir(const litaC_char* litaC_filename);
LITAC_INLINE 

#line 111 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_bool litaC_std__system__system_posix___FileTruncate(const litaC_char* litaC_filename,litaC_usize litaC_newLength);
LITAC_INLINE 

#line 117 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_bool litaC_std__system__system_posix___FileTruncateFile(FILE* litaC_file,litaC_usize litaC_newLength);
LITAC_INLINE 

#line 127 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_bool litaC_std__system__system_posix___FileDelete(const litaC_char* litaC_filename);


#line 147 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_f64 litaC_std__system__system_posix___SystemTimeMSec(void);
LITAC_INLINE 

#line 156 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_void litaC_std__system__system_posix___SetEnv(const litaC_char* litaC_varName,const litaC_char* litaC_value);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void* litaC_std__json__DefaultMakePtrFn(litaC_u64 litaC_type,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__DefaultMakeFn(litaC_u64 litaC_type,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json,litaC_void* litaC_result);

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonContext litaC_std__json__JsonContextInit(litaC_void (*litaC_maker)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*,litaC_void*),litaC_void* (*litaC_makerPtr)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*),const litaC_std__mem__Allocator* litaC_allocator);

#line 54 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonContext_init(litaC_std__json__JsonContext* litaC_this,litaC_void (*litaC_maker)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*,litaC_void*),litaC_void* (*litaC_makerPtr)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*),const litaC_std__mem__Allocator* litaC_allocator);
LITAC_INLINE 

#line 104 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_isNull(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 109 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_isBool(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 114 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_isTrue(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 119 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_isFalse(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_isNumber(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 129 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_isString(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 134 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_isArray(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 139 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_isObject(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 144 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonNode_asString(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 149 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_asBool(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 154 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_f64 litaC_std__json__JsonNode_asNumber(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 159 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_f64 litaC_std__json__JsonNode_asFloat(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 164 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_std__json__JsonNode_asInt(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 169 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i64 litaC_std__json__JsonNode_asLong(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 174 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_std__json__JsonNode_asArray(litaC_std__json__JsonNode* litaC_node);
LITAC_INLINE 

#line 179 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonObject* litaC_std__json__JsonNode_asObject(litaC_std__json__JsonNode* litaC_node);

#line 183 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonNumber(litaC_f64 litaC_value,const litaC_std__mem__Allocator* litaC_alloc);

#line 195 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonIntNumber(litaC_i64 litaC_value,const litaC_std__mem__Allocator* litaC_alloc);

#line 207 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonFloatNumber(litaC_f64 litaC_value,const litaC_std__mem__Allocator* litaC_alloc);

#line 215 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonString(const litaC_char* litaC_str,litaC_i32 litaC_len,const litaC_std__mem__Allocator* litaC_alloc);

#line 256 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonEscapeString(litaC_std__string__builder__StringBuilder* litaC_buf,const litaC_char* litaC_string,litaC_i32 litaC_length);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonStringNoDup(const litaC_char* litaC_str,const litaC_std__mem__Allocator* litaC_alloc);

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonArray(const litaC_std__mem__Allocator* litaC_alloc);

#line 320 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonObject(const litaC_std__mem__Allocator* litaC_alloc);

#line 334 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_put(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_std__json__JsonNode* litaC_n);

#line 352 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putNoDup(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_std__json__JsonNode* litaC_n);

#line 369 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putStr(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,const litaC_char* litaC_str,litaC_i32 litaC_len);

#line 384 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putNumber(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_f64 litaC_number);

#line 393 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putIntNumber(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_i64 litaC_number);

#line 402 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putFloatNumber(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_f64 litaC_number);

#line 411 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putBool(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_bool litaC_b);

#line 420 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_contains(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key);

#line 428 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonNode_get(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key);

#line 441 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_getBool(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_bool litaC_defaultValue);

#line 450 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_std__json__JsonNode_getInt(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_i32 litaC_defaultValue);

#line 466 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i64 litaC_std__json__JsonNode_getLong(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_i64 litaC_defaultValue);

#line 482 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_f64 litaC_std__json__JsonNode_getFloat(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_f64 litaC_defaultValue);

#line 498 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonNode_getStr(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,const litaC_char* litaC_defaultValue);

#line 507 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char* litaC_std__json__JsonNode_getStrCopy(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_char* litaC_str,litaC_i32 litaC_len);

#line 519 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonNode_getArray(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key);

#line 528 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonNode_getObject(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key);

#line 537 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_add(litaC_std__json__JsonNode* litaC_node,litaC_std__json__JsonNode* litaC_n);

#line 543 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonNode_at(litaC_std__json__JsonNode* litaC_node,litaC_i32 litaC_index);

#line 551 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_std__json__JsonNode_size(litaC_std__json__JsonNode* litaC_node);

#line 562 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_empty(litaC_std__json__JsonNode* litaC_node);

#line 571 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonIterator litaC_std__json__JsonNode_iter(litaC_std__json__JsonNode* litaC_node);

#line 577 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonIterator_hasNext(litaC_std__json__JsonIterator* litaC_this);

#line 581 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_std__json__JsonIterator_next(litaC_std__json__JsonIterator* litaC_this);

#line 605 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_equals(litaC_std__json__JsonNode* litaC_node,litaC_std__json__JsonNode* litaC_other);

#line 687 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonNode_print(litaC_std__json__JsonNode* litaC_node,litaC_std__string__builder__StringBuilder* litaC_buf);

#line 692 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonNode_prettyPrint(litaC_std__json__JsonNode* litaC_node,litaC_std__string__builder__StringBuilder* litaC_buf,litaC_i32 litaC_tabSize);

#line 697 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_free(litaC_std__json__JsonNode* litaC_node);

#line 878 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser litaC_std__json__JsonParserInit(const litaC_std__mem__Allocator* litaC_alloc);

#line 884 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_init(litaC_std__json__JsonParser* litaC_p,const litaC_std__mem__Allocator* litaC_alloc);

#line 896 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_free(litaC_std__json__JsonParser* litaC_p);

#line 902 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJson(litaC_std__json__JsonParser* litaC_p,const litaC_char* litaC_buffer);

#line 921 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonParser_hasError(litaC_std__json__JsonParser* litaC_p);

#line 925 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__PrintJson(litaC_std__json__JsonNode* litaC_node,litaC_std__string__builder__StringBuilder* litaC_buf);

#line 983 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__PrettyPrintJson(litaC_std__json__JsonNode* litaC_node,litaC_std__string__builder__StringBuilder* litaC_buf,litaC_i32 litaC_offset,litaC_i32 litaC_tabSize);

#line 1045 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonNode(litaC_std__json__JsonParser* litaC_p);

#line 1084 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonIntNumber(litaC_std__json__JsonParser* litaC_p);

#line 1088 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonRealNumber(litaC_std__json__JsonParser* litaC_p);

#line 1092 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonStr(litaC_std__json__JsonParser* litaC_p);

#line 1096 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonArray(litaC_std__json__JsonParser* litaC_p);

#line 1111 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonObject(litaC_std__json__JsonParser* litaC_p);

#line 1138 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__TokenName(litaC_std__json__TokenKind litaC_t);

#line 1143 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_error(litaC_std__json__JsonParser* litaC_p,const litaC_char* litaC_format,...);

#line 1154 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_scanInt(litaC_std__json__JsonParser* litaC_p);

#line 1209 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_scanFloat(litaC_std__json__JsonParser* litaC_p);

#line 1246 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_scanStr(litaC_std__json__JsonParser* litaC_p);

#line 1304 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_scanMultiStr(litaC_std__json__JsonParser* litaC_p);

#line 1369 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_skipComments(litaC_std__json__JsonParser* litaC_l);

#line 1396 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_nextToken(litaC_std__json__JsonParser* litaC_p);

#line 1529 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonParser_check(litaC_std__json__JsonParser* litaC_p,litaC_std__json__TokenKind litaC_kind);

#line 1533 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonParser_match(litaC_std__json__JsonParser* litaC_p,litaC_std__json__TokenKind litaC_kind);

#line 1542 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonParser_expect(litaC_std__json__JsonParser* litaC_p,litaC_std__json__TokenKind litaC_kind);


#line 1558 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__testParser(void);


#line 1593 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__testPrettyPrinter(void);

#line 351 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_std__map__nextPowerOf2(litaC_u32 litaC_v);

#line 367 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_std__map__i32_hash(litaC_i32 litaC_this);

#line 371 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__i32_equals(litaC_i32 litaC_this,litaC_i32 litaC_b);

#line 375 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__Print(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m);

#line 389 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__testRemove(void);


#line 429 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__performanceTest(void);

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__i8_hash(litaC_i8 litaC_this);

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__i8_equals(litaC_i8 litaC_this,litaC_i8 litaC_other);

#line 21 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__u8_hash(litaC_u8 litaC_this);

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__u8_equals(litaC_u8 litaC_this,litaC_u8 litaC_other);

#line 30 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__i16_hash(litaC_i16 litaC_this);

#line 35 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__i16_equals(litaC_i16 litaC_this,litaC_i16 litaC_other);

#line 39 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__u16_hash(litaC_u16 litaC_this);

#line 44 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__u16_equals(litaC_u16 litaC_this,litaC_u16 litaC_other);

#line 48 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__i32_hash(litaC_i32 litaC_this);

#line 53 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__i32_equals(litaC_i32 litaC_this,litaC_i32 litaC_other);

#line 57 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__u32_hash(litaC_u32 litaC_this);

#line 62 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__u32_equals(litaC_u32 litaC_this,litaC_u32 litaC_other);

#line 66 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__i64_hash(litaC_i64 litaC_this);

#line 71 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__i64_equals(litaC_i64 litaC_this,litaC_i64 litaC_other);

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__u64_hash(litaC_u64 litaC_this);

#line 80 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__u64_equals(litaC_u64 litaC_this,litaC_u64 litaC_other);

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__usize_hash(litaC_usize litaC_this);

#line 89 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__usize_equals(litaC_usize litaC_this,litaC_usize litaC_other);

#line 93 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__f32_hash(litaC_f32 litaC_this);

#line 99 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__f32_equals(litaC_f32 litaC_this,litaC_f32 litaC_other);

#line 103 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__f64_hash(litaC_f64 litaC_this);

#line 109 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__f64_equals(litaC_f64 litaC_this,litaC_f64 litaC_other);

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__bool_hash(litaC_bool litaC_this);

#line 127 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__bool_equals(litaC_bool litaC_this,litaC_bool litaC_other);


#line 29 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_std__unicode__utf8__Utf8Decode(const litaC_u8* litaC_str,litaC_i32 litaC_len,litaC_i32* litaC_codepoint);

#line 35 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_std__unicode__utf8__Utf8HexDecode(const litaC_char* litaC_str,litaC_i32 litaC_len);


#line 54 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_std__unicode__utf8__Utf8Encode(litaC_i32 litaC_codepoint,litaC_u8* litaC_dst);


#line 87 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_std__unicode__utf8__Utf8CharWidth(litaC_i32 litaC_codepoint);

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_bool litaC_std__unicode__utf8__Utf8CodepointValid(litaC_i32 litaC_codepoint);

#line 169 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_void litaC_std__unicode__utf8__decode(const litaC_char* litaC_str);


#line 178 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_void litaC_std__unicode__utf8__Test_Uf8Decode(void);

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__u8_fromJson(litaC_u8* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 74 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__i8_fromJson(litaC_i8* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 80 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__u16_fromJson(litaC_u16* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 86 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__i16_fromJson(litaC_i16* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 92 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__u32_fromJson(litaC_u32* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 98 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__i32_fromJson(litaC_i32* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 104 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__u64_fromJson(litaC_u64* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 110 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__i64_fromJson(litaC_i64* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 116 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__usize_fromJson(litaC_usize* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 123 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__f64_fromJson(litaC_f64* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 129 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__f32_fromJson(litaC_f32* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 136 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__bool_fromJson(litaC_bool* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 143 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__char_fromJson(const litaC_char** litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 150 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__String_fromJson(litaC_std__builtins__String* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 157 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__StringBuffer_fromJson(litaC_std__string__buffer__StringBuffer* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 164 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__StringBuilder_fromJson(litaC_std__string__builder__StringBuilder* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 171 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__DateTime_fromJson(litaC_std__time__DateTime* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 91 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__i64_toDateTime(litaC_i64 litaC_this);

#line 95 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__OffsetDateTime litaC_std__time__DateTime_toOffsetDateTime(litaC_std__time__DateTime* litaC_this,litaC_std__time__Offset* litaC_offset);

#line 102 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_i64 litaC_std__time__DateTime_toEpochTime(litaC_std__time__DateTime* litaC_this);

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTimeStatus litaC_std__time__DateTime_format(litaC_std__time__DateTime* litaC_this,litaC_std__builtins__String litaC_format,litaC_std__string__buffer__StringBuffer* litaC_output);

#line 114 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTime_add(litaC_std__time__DateTime* litaC_this,litaC_i32 litaC_amount,litaC_std__time__TimeUnit litaC_unit);

#line 118 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTime_minus(litaC_std__time__DateTime* litaC_this,litaC_i32 litaC_amount,litaC_std__time__TimeUnit litaC_unit);

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_i32 litaC_std__time__DateTime_compare(litaC_std__time__DateTime* litaC_this,litaC_std__time__DateTime* litaC_other);

#line 126 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTimeStatus litaC_std__time__DateTime_isoFormat(litaC_std__time__DateTime* litaC_this,litaC_std__string__buffer__StringBuffer* litaC_output);

#line 134 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_i64 litaC_std__time__Now(void);

#line 138 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTimeNow(void);

#line 142 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTimeFrom(litaC_std__builtins__String litaC_format,litaC_std__builtins__String litaC_value);

#line 149 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTimeFromIso(litaC_std__builtins__String litaC_value);


#line 159 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_void litaC_std__time__testDateTime(void);

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix__ToDateTime(litaC_i64 litaC_epoch);
LITAC_INLINE 

#line 53 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix__FromTM(tm_time* litaC_tm);
LITAC_INLINE 

#line 69 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
tm_time* litaC_std__time__time_posix__ToTM(litaC_std__time__DateTime* litaC_dateTime,tm_time* litaC_tm);

#line 79 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix__DateTimeAdd(litaC_std__time__DateTime* litaC_this,litaC_i64 litaC_amount,litaC_std__time__TimeUnit litaC_unit);

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_i64 litaC_std__time__time_posix__ToEpochTime(litaC_std__time__DateTime* litaC_dateTime);

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_i64 litaC_std__time__time_posix___Now(void);

#line 142 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix___DateTimeNow(void);

#line 147 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTimeStatus litaC_std__time__time_posix__DateTimeFormat(litaC_std__time__DateTime* litaC_dateTime,litaC_std__builtins__String litaC_format,litaC_std__string__buffer__StringBuffer* litaC_buffer);

#line 175 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix___DateTimeFrom(litaC_std__builtins__String litaC_format,litaC_std__builtins__String litaC_value);

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__u8_toJson(litaC_u8 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__i8_toJson(litaC_i8 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 14 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__u16_toJson(litaC_u16 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__i16_toJson(litaC_i16 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 20 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__u32_toJson(litaC_u32 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 23 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__i32_toJson(litaC_i32 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__u64_toJson(litaC_u64 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__i64_toJson(litaC_i64 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 32 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__usize_toJson(litaC_usize litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 36 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__f64_toJson(litaC_f64 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 39 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__f32_toJson(litaC_f32 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 43 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__bool_toJson(litaC_bool litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 47 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__char_toJson(const litaC_char* litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 56 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__String_toJson(litaC_std__builtins__String litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__StringBuffer_toJson(litaC_std__string__buffer__StringBuffer litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 64 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__StringBuilder_toJson(litaC_std__string__builder__StringBuilder litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__DateTime_toJson(litaC_std__time__DateTime litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 23 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_void litaC_template__Template_init(litaC_template__Template* litaC_this,const litaC_std__mem__Allocator* litaC_allocator);

#line 31 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__Template_build(litaC_template__Template* litaC_this,litaC_std__builtins__String litaC_assetPath);

#line 35 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__ScanForTemplates(litaC_template__Template* litaC_template,litaC_std__builtins__String litaC_assetPath);

#line 43 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__ScanDirectory(litaC_template__Template* litaC_template,litaC_std__string__buffer__StringBuffer* litaC_path);

#line 85 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__LoadTemplate(const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String litaC_path,litaC_std__string__builder__StringBuilder* litaC_fileBuffer,litaC_std__string__builder__StringBuilder* litaC_output);

#line 104 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__GenerateFromTemplate(const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String litaC_name,litaC_std__builtins__String litaC_template,litaC_std__string__builder__StringBuilder* litaC_output);

#line 132 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__GenerateBody(const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String litaC_template,litaC_std__string__builder__StringBuilder* litaC_output);

#line 174 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__HandleDirective(const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String* litaC_code,litaC_std__string__builder__StringBuilder* litaC_output);

#line 213 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_template__ReadString(litaC_std__builtins__String litaC_str);

#line 234 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_template__SanatizeName(litaC_std__builtins__String litaC_name);


#line 252 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_void litaC_template__testTemplate(void);

#line 21 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__io__FileStatus litaC_std__fs__ListFiles(litaC_std__builtins__String litaC_path,litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_result,litaC_i32 litaC_flags,const litaC_std__mem__Allocator* litaC_allocator);

#line 35 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__io__FileStatus litaC_std__fs__WalkDir(litaC_std__builtins__String litaC_path,litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_result,litaC_i32 litaC_flags,const litaC_std__mem__Allocator* litaC_allocator);

#line 72 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_open(litaC_std__fs__FileHandle* litaC_this,litaC_std__builtins__String litaC_path);

#line 89 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_isFile(litaC_std__fs__FileHandle* litaC_this);

#line 93 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_isDirectory(litaC_std__fs__FileHandle* litaC_this);

#line 97 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
const litaC_char* litaC_std__fs__FileHandle_name(litaC_std__fs__FileHandle* litaC_this);

#line 101 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_hasNext(litaC_std__fs__FileHandle* litaC_this);

#line 105 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_next(litaC_std__fs__FileHandle* litaC_this);

#line 129 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_close(litaC_std__fs__FileHandle* litaC_this);


#line 137 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_void litaC_std__fs__testFileHandle(void);

#line 1 "/Users/tony/projects/ringhttp/src/http_common.lita"
const litaC_char* litaC_http_common__StatusAsStr(litaC_http_common__Status litaC_enumType);

#line 1 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonTypeAsStr(litaC_std__json__JsonType litaC_enumType);

#line 1 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
const litaC_char* litaC_std__terminal__ConsoleColorsAsStr(litaC_std__terminal__ConsoleColors litaC_enumType);

#line 1 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
const litaC_char* litaC_std__io__FileStatusAsStr(litaC_std__io__FileStatus litaC_enumType);

#line 1 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_bool litaC_std__test__TestInfoMessage_fromJson(litaC_std__test__TestInfoMessage* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);
litaC_bool litaC_std__test__TestInfoMessage_toJson(litaC_std__test__TestInfoMessage* litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);
litaC_bool litaC_std__test__TestStatus_fromJson(litaC_std__test__TestStatus* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);
litaC_bool litaC_std__test__TestStatus_toJson(litaC_std__test__TestStatus* litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_ litaC_std__array__std__array__ArrayInit_cb_std__test__TestCase_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);
LITAC_INLINE 

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_size_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a);

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__TestCase litaC_std__array__std__array__Array_get_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_i32 litaC_index);

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_std__test__TestCase litaC_element);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_i32 litaC_increment);

#line 139 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__TestCase* litaC_std__array__std__array__Array_lastPtr_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a);

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__TestCase* litaC_std__array__std__array__Array_getPtr_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_i32 litaC_index);

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_ litaC_std__array__std__array__ArrayInit_cb_std__test__AssertEntry_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a);
LITAC_INLINE 

#line 277 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_clear_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a,litaC_std__test__AssertEntry litaC_element);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a,litaC_i32 litaC_increment);

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb__ptr_const_char_ce_ litaC_std__array__std__array__ArrayInit_cb__ptr_const_char_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);
LITAC_INLINE 

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_size_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a);

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a);

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__AssertEntry litaC_std__array__std__array__Array_get_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a,litaC_i32 litaC_index);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a,const litaC_char* litaC_element);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a,litaC_i32 litaC_increment);
LITAC_INLINE 

#line 267 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__Array_empty_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a);

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_i32_ce_ litaC_std__array__std__array__ArrayInit_cb_i32_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_element);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_increment);

#line 218 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_insertAllAt_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_index,litaC_std__array__std__array__Array_cb_i32_ce_* litaC_elements);

#line 240 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_addAll_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_std__array__std__array__Array_cb_i32_ce_* litaC_other);

#line 98 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_setAll_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_index,litaC_std__array__std__array__Array_cb_i32_ce_* litaC_other);

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_get_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_index);
LITAC_INLINE 

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_size_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a);

#line 36 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__json__JsonNode* litaC_std__mem__std__mem__new_cb_std__json__JsonNode_ce_(const litaC_std__mem__Allocator* litaC_a);
litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_std__mem__std__mem__new_cb_std__array__Array_ce_(const litaC_std__mem__Allocator* litaC_a);

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 36 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__json__JsonObject* litaC_std__mem__std__mem__new_cb_std__json__JsonObject_ce_(const litaC_std__mem__Allocator* litaC_a);

#line 65 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_init_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,litaC_i32 litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator,const litaC_char* litaC_emptyKey);

#line 259 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__MapGrow_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,litaC_i32 litaC_newlength);

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_put_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,const litaC_char* litaC_key,litaC_i32 litaC_value);

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_free_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m);

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a,litaC_std__json__JsonEntry litaC_element);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a,litaC_i32 litaC_increment);
LITAC_INLINE 

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a);

#line 234 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__Map_contains_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,const litaC_char* litaC_key);

#line 141 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_get_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,const litaC_char* litaC_key);

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__json__JsonEntry litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a,litaC_i32 litaC_index);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a,litaC_std__json__JsonNode* litaC_element);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a,litaC_i32 litaC_increment);

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__json__JsonNode* litaC_std__array__std__array__Array_get_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a,litaC_i32 litaC_index);
LITAC_INLINE 

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a);
LITAC_INLINE 

#line 97 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_size_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m);

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a);
litaC_void litaC_std__array__std__array__Array_free_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a);

#line 65 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_init_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator,litaC_i32 litaC_emptyKey);

#line 259 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__MapGrow_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_newlength);

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_key,litaC_i32 litaC_value);

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_free_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m);

#line 141 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_key);

#line 202 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_remove_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_key);

#line 65 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_init_cb_i64_c_i32_ce_(litaC_std__map__std__map__Map_cb_i64_c_i32_ce_* litaC_m,litaC_i32 litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator,litaC_i64 litaC_emptyKey);

#line 259 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__MapGrow_cb_i64_c_i32_ce_(litaC_std__map__std__map__Map_cb_i64_c_i32_ce_* litaC_m,litaC_i32 litaC_newlength);

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_put_cb_i64_c_i32_ce_(litaC_std__map__std__map__Map_cb_i64_c_i32_ce_* litaC_m,litaC_i64 litaC_key,litaC_i32 litaC_value);

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_free_cb_i64_c_i32_ce_(litaC_std__map__std__map__Map_cb_i64_c_i32_ce_* litaC_m);

#line 54 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_ litaC_std__map__std__map__StringMap_cb_std__builtins__String_ce_(litaC_std__builtins__String litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator);

#line 65 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_init_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_m,litaC_std__builtins__String litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String litaC_emptyKey);

#line 259 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__MapGrow_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_m,litaC_i32 litaC_newlength);

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_put_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_m,litaC_std__builtins__String litaC_key,litaC_std__builtins__String litaC_value);

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_free_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_m);

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__builtins__String_ce_ litaC_std__array__std__array__ArrayInit_cb_std__builtins__String_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_std__builtins__String_ce_(litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_std__builtins__String_ce_(litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_a,litaC_std__builtins__String litaC_element);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_std__builtins__String_ce_(litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_a,litaC_i32 litaC_increment);

#line 246 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__std__json__from_json__Array_fromJson_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json);

#line 98 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__std__json__to_json__Array_toJson_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb);
LITAC_INLINE 

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_size_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a);

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_char* litaC_std__array__std__array__Array_get_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a,litaC_i32 litaC_index);

#line 2 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_i32 litaC_Users__tony__projects__ringhttp__src__pre_main____LitaTestMain(litaC_i32 litaC_len,litaC_char** litaC_args);


// Generated code for interfaces

#endif /* _LITAC_HEADER_H */


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// translated code begins
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



#line 77 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
struct litaC_std__json__JsonEntry {
#line 78 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* key;

#line 79 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* value;
};


#line 13 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
struct litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_ {
#line 14 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 hash;

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i64 key;

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 value;
};


#line 17 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
struct litaC_std__builtins__NativeVararg {
#line 18 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
litaC_u64* args;

#line 19 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
litaC_i32 numberOfArgs;
};


#line 566 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
struct litaC_std__json__JsonIterator {
#line 567 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 index;

#line 568 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* json;
};


#line 8 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
struct litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_ {
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 length;

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 capacity;

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__json__JsonNode** elements;

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_std__mem__Allocator* alloc;
};


#line 19 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
struct litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_ {
#line 20 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 length;

#line 21 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 capacity;

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
const litaC_std__mem__Allocator* allocator;

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_* entries;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 emptyValue;

#line 27 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
const litaC_char* emptyKey;
};


#line 21 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
struct litaC_std__io__File {
#line 22 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
FILE* file;

#line 23 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 _position;
};


#line 7 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
struct litaC_std__string__buffer__StringBuffer {
#line 8 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_char* buffer;

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 length;

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 capacity;
};


#line 842 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
struct litaC_std__system__Process {
#line 843 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
FILE* pipe;
};


#line 8 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
struct litaC_std__array__std__array__Array_cb__ptr_const_char_ce_ {
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 length;

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 capacity;

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_char** elements;

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_std__mem__Allocator* alloc;
};


#line 8 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
struct litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_ {
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 length;

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 capacity;

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__json__JsonEntry* elements;

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_std__mem__Allocator* alloc;
};


#line 19 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
struct litaC_std__map__std__map__Map_cb_i32_c_i32_ce_ {
#line 20 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 length;

#line 21 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 capacity;

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
const litaC_std__mem__Allocator* allocator;

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_* entries;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 emptyValue;

#line 27 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 emptyKey;
};


#line 40 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"

struct litaC_std__test__TestInfoMessage {
#line 41 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
const litaC_char* type;

#line 42 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
const litaC_char* name;

#line 43 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestStatus status;

#line 44 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_cb__ptr_const_char_ce_ errors;

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_f64 durationMSec;
};



#line 26 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
struct litaC_std__time__Date {
#line 27 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_i32 year;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_u8 month;

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_u8 day;
};


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"


#line 8 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
struct litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_ {
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 length;

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 capacity;

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__TestCase* elements;

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_std__mem__Allocator* alloc;
};


#line 12 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
struct litaC_std__builtins__String {
#line 13 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
const litaC_char* buffer;

#line 14 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
litaC_i32 length;
};


#line 254 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
struct litaC_std__string__SplitIter {
#line 255 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String str;

#line 256 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String split;

#line 258 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 lastIndex;

#line 259 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 currentIndex;
};


#line 87 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
union litaC_std__json__JsonValue {
#line 88 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool boolValue;

#line 89 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_f64 doubleValue;

#line 90 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i64 intValue;

#line 91 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* strValue;

#line 93 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonObject* objValue;

#line 94 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* arrayValue;
};


#line 840 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
struct litaC_std__json__SrcPos {
#line 841 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* name;

#line 842 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 line;
};


#line 8 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
struct litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_ {
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 length;

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 capacity;

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__AssertEntry* elements;

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_std__mem__Allocator* alloc;
};


#line 19 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
struct litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_ {
#line 20 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 length;

#line 21 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 capacity;

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
const litaC_std__mem__Allocator* allocator;

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_* entries;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__builtins__String emptyValue;

#line 27 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__builtins__String emptyKey;
};


#line 19 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
struct litaC_std__map__std__map__Map_cb_i64_c_i32_ce_ {
#line 20 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 length;

#line 21 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 capacity;

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
const litaC_std__mem__Allocator* allocator;

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_* entries;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 emptyValue;

#line 27 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i64 emptyKey;
};


#line 39 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
struct litaC_std__json__JsonContext {
#line 40 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_std__mem__Allocator* allocator;

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void (*maker)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*,litaC_void*);

#line 42 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void* (*makerPtr)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*);
};


#line 20 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
struct litaC_std__time__Time {
#line 21 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_u8 sec;

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_u8 min;

#line 23 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_u8 hour;
};


#line 38 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
struct litaC_std__time__Offset {
#line 39 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_u8 min;

#line 40 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_u8 hr;
};


#line 13 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
struct litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_ {
#line 14 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 hash;

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
const litaC_char* key;

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 value;
};


#line 7 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
struct litaC_std__builtins__any {
#line 8 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
litaC_void* value;

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/builtins.lita"
litaC_u64 id;
};


#line 11 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
struct litaC_std__string__builder__StringBuilder {
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__buffer__StringBuffer asBuffer;

#line 13 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
const litaC_std__mem__Allocator* alloc;
};


#line 82 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
struct litaC_std__json__JsonObject {
#line 83 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_ indexes;

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_ values;
};


#line 8 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
struct litaC_std__array__std__array__Array_cb_i32_ce_ {
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 length;

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 capacity;

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32* elements;

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_std__mem__Allocator* alloc;
};


#line 851 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"


#line 13 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
struct litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_ {
#line 14 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 hash;

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 key;

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 value;
};


#line 124 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
struct litaC_std__mem__Allocator {
#line 125 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* (*allocFn)(const litaC_std__mem__Allocator*,litaC_usize);

#line 126 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* (*callocFn)(const litaC_std__mem__Allocator*,litaC_usize,litaC_usize);

#line 127 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* (*reallocFn)(const litaC_std__mem__Allocator*,litaC_void*,litaC_usize,litaC_usize);

#line 128 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void (*freeFn)(const litaC_std__mem__Allocator*,litaC_void*);
};


#line 8 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
struct litaC_std__array__std__array__Array_cb_std__builtins__String_ce_ {
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 length;

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 capacity;

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__builtins__String* elements;

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_std__mem__Allocator* alloc;
};


#line 48 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
struct litaC_std__test__AssertEntry {
#line 49 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
const litaC_char* filename;

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_usize lineNumber;

#line 51 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
const litaC_char* errorMessage;
};


#line 33 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
struct litaC_std__time__DateTime {
#line 34 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__Date date;

#line 35 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__Time time;
};


#line 13 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
struct litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_ {
#line 14 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 hash;

#line 15 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__builtins__String key;

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__builtins__String value;
};


#line 97 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
struct litaC_std__json__JsonNode {
#line 98 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_std__mem__Allocator* alloc;

#line 99 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonType type;

#line 100 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonValue value;
};


#line 845 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
struct litaC_std__json__Token {
#line 846 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__TokenKind kind;

#line 847 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__SrcPos pos;

#line 848 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* start;

#line 849 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* end;

#line 851 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
union  {
#line 852 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i64 intNumValue;

#line 853 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_f64 realNumValue;

#line 854 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* strValue;

#line 855 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* name;
};
};


#line 15 "/Users/tony/projects/ringhttp/src/template.lita"
struct litaC_template__Template {
#line 16 "/Users/tony/projects/ringhttp/src/template.lita"
const litaC_std__mem__Allocator* allocator;

#line 17 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder fileBuffer;

#line 18 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder generatedCode;

#line 20 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_ templates;
};


#line 64 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
struct litaC_std__test__TestCase {
#line 65 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestSuite* testSuite;

#line 66 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_ errors;

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_f64 startTime;

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_bool isDisabled;

#line 70 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
const litaC_char* name;

#line 71 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void* userData;

#line 72 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void (*testFn)(litaC_std__test__TestCase*,litaC_void*);

#line 73 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void (*cleanupFn)(litaC_std__test__TestCase*,litaC_void*);
};


#line 44 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
struct litaC_std__time__OffsetDateTime {
#line 45 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime dateTime;

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__Offset offset;
};


#line 67 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
struct litaC_std__fs__FileHandle {
#line 68 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
tinydir_dir dir;

#line 69 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
tinydir_file file;
};


#line 54 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
struct litaC_std__test__TestSuite {
#line 55 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
const litaC_std__mem__Allocator* allocator;

#line 56 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_ testCases;

#line 57 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase* currentCase;

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
jmp_buf env;

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_ dynamicTestCases;

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_i32 index;
};


#line 867 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
struct litaC_std__json__JsonParser {
#line 868 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_std__mem__Allocator* alloc;

#line 869 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParserStatus status;

#line 870 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char errorMsg[256];

#line 872 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__Token token;

#line 873 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder buffer;

#line 874 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* stream;

#line 875 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* lineStart;
};


#line 26 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestSuite litaC_std__test__testSuite =  {0};

#line 269 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
LITAC_THREADLOCAL 
const litaC_std__mem__Allocator* litaC_std__mem__defaultAllocator = (const litaC_std__mem__Allocator*)(&((litaC_std__mem__Allocator) {
#line 270 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
.allocFn = &(litaC_std__mem__libc_allocator__cMalloc),

#line 271 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
.callocFn = &(litaC_std__mem__libc_allocator__cCalloc),

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
.reallocFn = &(litaC_std__mem__libc_allocator__cRealloc),

#line 273 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
.freeFn = &(litaC_std__mem__libc_allocator__cFree)}));

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
const litaC_std__mem__Allocator* litaC_std__mem__libc_allocator__cAllocator = (const litaC_std__mem__Allocator*)(&((litaC_std__mem__Allocator) {
#line 10 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
.allocFn = &(litaC_std__mem__libc_allocator__cMalloc),

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
.callocFn = &(litaC_std__mem__libc_allocator__cCalloc),

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
.reallocFn = &(litaC_std__mem__libc_allocator__cRealloc),

#line 13 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
.freeFn = &(litaC_std__mem__libc_allocator__cFree)}));

#line 4 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__WHITESPACE[256] =  {
#line 5 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
[9] = litaC_true,

#line 6 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
[10] = litaC_true,

#line 7 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
[11] = litaC_true,

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
[12] = litaC_true,

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
[13] = litaC_true,

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
[32] = litaC_true};

#line 13 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_i32 litaC_std__ascii__HEX[256] =  {
#line 15 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
['0'] = 0,
['1'] = 1,
['2'] = 2,
['3'] = 3,

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
['4'] = 4,
['5'] = 5,
['6'] = 6,
['7'] = 7,

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
['8'] = 8,
['9'] = 9,

#line 20 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
['A'] = 10,
['B'] = 11,
['C'] = 12,

#line 21 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
['D'] = 13,
['E'] = 14,
['F'] = 15,

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
['a'] = 10,
['b'] = 11,
['c'] = 12,

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
['d'] = 13,
['e'] = 14,
['f'] = 15};

#line 337 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

#define litaC_std__system__OPEN_MODE ("r")

#line 349 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

#define litaC_std__system__PATH_SEPARATOR ("/")

#line 635 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__uriEscapeChars[256] =  {
#line 636 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
[' '] = "%20",

#line 637 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['!'] = "%21",

#line 638 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['#'] = "%23",

#line 639 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['$'] = "%24",

#line 640 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['%'] = "%25",

#line 641 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['&'] = "%26",

#line 642 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['\''] = "%27",

#line 643 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['('] = "%28",

#line 644 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
[')'] = "%29",

#line 645 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['*'] = "%2A",

#line 646 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['+'] = "%2B",

#line 647 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
[','] = "%2C",

#line 649 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
[':'] = "%3A",

#line 650 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
[';'] = "%3B",

#line 651 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['='] = "%3D",

#line 652 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['?'] = "%3F",

#line 653 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['@'] = "%40",

#line 654 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
['['] = "%5B",

#line 655 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
[']'] = "%5D"};

#line 55 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_char litaC_std__system__system_posix__pwd[
#line 55 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
PATH_MAX] =  {0};

#line 232 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__escapeStrings[256] =  {
#line 233 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['"'] = "\\\"",

#line 234 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\b'] = "\\b",

#line 235 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\f'] = "\\f",

#line 236 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\n'] = "\\n",

#line 237 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\r'] = "\\r",

#line 238 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\t'] = "\\t",

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\\'] = "\\\\",

#line 241 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\0'] = "\\0"};

#line 244 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__escapeChars[256] =  {
#line 245 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['b'] = "\\\\b",

#line 246 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['f'] = "\\\\f",

#line 247 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['n'] = "\\\\n",

#line 248 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['r'] = "\\\\r",

#line 249 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['t'] = "\\\\t",

#line 250 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\\'] = "\\\\",

#line 251 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\''] = "\\'",

#line 252 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['"'] = "\\\\\"",

#line 253 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\0'] = "\\0"};

#line 752 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JSON_NULL = &((litaC_std__json__JsonNode) {
#line 753 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.alloc = NULL,

#line 754 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.type = litaC_std__json__JsonType_NULL,

#line 755 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.value =  {0}});

#line 758 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JSON_TRUE = &((litaC_std__json__JsonNode) {
#line 759 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.alloc = NULL,

#line 760 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.type = litaC_std__json__JsonType_BOOLEAN,

#line 761 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.value =  {.boolValue = litaC_true}});

#line 764 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JSON_FALSE = &((litaC_std__json__JsonNode) {
#line 765 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.alloc = NULL,

#line 766 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.type = litaC_std__json__JsonType_BOOLEAN,

#line 767 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.value =  {.boolValue = litaC_false}});

#line 788 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__tokenKindNames[14] =  {
#line 789 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_EOF] = "EOF",

#line 790 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_ERROR] = "ERROR",

#line 791 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_COMMA] = ",",

#line 792 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_COLON] = ":",

#line 793 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_LEFT_BRACE] = "{",

#line 794 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_RIGHT_BRACE] = "}",

#line 795 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_LEFT_BRACKET] = "[",

#line 796 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_RIGHT_BRACKET] = "]",

#line 797 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_NULL] = "null",

#line 798 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_INT_NUMBER] = "int",

#line 799 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_REAL_NUMBER] = "float",

#line 800 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_TRUE] = "true",

#line 801 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_FALSE] = "false",

#line 802 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
[litaC_std__json__TokenKind_STRING] = "string"};

#line 806 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_std__json__charToDigit[256] =  {
#line 807 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['0'] = 0,

#line 808 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['1'] = 1,

#line 809 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['2'] = 2,

#line 810 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['3'] = 3,

#line 811 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['4'] = 4,

#line 812 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['5'] = 5,

#line 813 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['6'] = 6,

#line 814 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['7'] = 7,

#line 815 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['8'] = 8,

#line 816 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['9'] = 9,

#line 817 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['a'] = 10,
['A'] = 10,

#line 818 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['b'] = 11,
['B'] = 11,

#line 819 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['c'] = 12,
['C'] = 12,

#line 820 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['d'] = 13,
['D'] = 13,

#line 821 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['e'] = 14,
['E'] = 14,

#line 822 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['f'] = 15,
['F'] = 15};

#line 825 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char litaC_std__json__escapeToChar[256] =  {
#line 826 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['0'] = '\0',

#line 827 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\''] = '\'',

#line 828 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['"'] = '"',

#line 829 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['\\'] = '\\',

#line 830 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['n'] = '\n',

#line 831 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['r'] = '\r',

#line 832 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['t'] = '\t',

#line 833 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
['/'] = '/'};

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"

#define litaC_std__time__ISO_8601_DATE_FORMAT ("%Y-%m-%dT%H:%M:%S")

#line 10 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_i32 litaC_Users__tony__projects__ringhttp__src__pre_main__main(litaC_i32 litaC_len,litaC_char** litaC_args) {
#line 11 "/Users/tony/projects/ringhttp/src/pre_main.lita"
const char* litaC_templateInputDir = "static/templates/";

#line 12 "/Users/tony/projects/ringhttp/src/pre_main.lita"
if(litaC_len > 1) {{
#line 13 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_templateInputDir = litaC_args[1];

}
} 


#line 15 "/Users/tony/projects/ringhttp/src/pre_main.lita"
printf("Generating templates from '%s'...\n", litaC_templateInputDir);

#line 17 "/Users/tony/projects/ringhttp/src/pre_main.lita"
const litaC_std__mem__Allocator* litaC_allocator = litaC_std__mem__defaultAllocator;

#line 19 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_template__Template litaC_template = {0};
{
}

#line 20 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_template__Template_init(&((litaC_template)), litaC_allocator);

#line 21 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_http_common__Status litaC_status = litaC_template__Template_build(&((litaC_template)), litaC_std__string__char_toString(litaC_templateInputDir));
if(litaC_status) {{
#line 22 "/Users/tony/projects/ringhttp/src/pre_main.lita"
printf("Error building templates: %s\n", litaC_http_common__StatusAsStr(litaC_status));

#line 23 "/Users/tony/projects/ringhttp/src/pre_main.lita"
return 1;


}}


#line 26 "/Users/tony/projects/ringhttp/src/pre_main.lita"
printf("Generated code:\n");

#line 27 "/Users/tony/projects/ringhttp/src/pre_main.lita"
printf("%s\n", litaC_std__string__builder__StringBuilder_cStr(&((litaC_template.generatedCode))));

#line 30 "/Users/tony/projects/ringhttp/src/pre_main.lita"
return 0;

}


#line 77 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestSuite_init(litaC_std__test__TestSuite* litaC_this,const litaC_std__mem__Allocator* litaC_allocator) {
#line 79 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"

#line 80 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__system__SystemInit();

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->allocator = litaC_allocator;

#line 82 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->testCases = litaC_std__array__std__array__ArrayInit_cb_std__test__TestCase_ce_(64, litaC_allocator);

#line 83 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->dynamicTestCases = litaC_std__array__std__array__ArrayInit_cb_std__test__TestCase_ce_(64, litaC_allocator);

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->index = 0;
}


#line 87 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestSuite_free(litaC_std__test__TestSuite* litaC_this) {
#line 88 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__test__TestCase_ce_(&((litaC_this->testCases)));litaC_i += 1) {{
#line 89 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase litaC_t = litaC_std__array__std__array__Array_get_cb_std__test__TestCase_ce_(&((litaC_this->testCases)), litaC_i);

#line 90 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase_free(&((litaC_t)));

}}

#line 92 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_free_cb_std__test__TestCase_ce_(&((litaC_this->testCases)));

#line 94 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__test__TestCase_ce_(&((litaC_this->dynamicTestCases)));litaC_i += 1) {{
#line 95 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase litaC_t = litaC_std__array__std__array__Array_get_cb_std__test__TestCase_ce_(&((litaC_this->dynamicTestCases)), litaC_i);

#line 96 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase_free(&((litaC_t)));

}}

#line 98 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_free_cb_std__test__TestCase_ce_(&((litaC_this->dynamicTestCases)));
}


#line 101 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase* litaC_std__test__TestSuite_enterTest(litaC_std__test__TestSuite* litaC_this) {
#line 102 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_add_cb_std__test__TestCase_ce_(&((litaC_this->testCases)), 
#line 103 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
(litaC_std__test__TestCase) {0});

#line 105 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->currentCase = litaC_std__array__std__array__Array_lastPtr_cb_std__test__TestCase_ce_(&((litaC_this->testCases)));

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase_init(litaC_this->currentCase, litaC_this);

#line 107 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->currentCase->startTime = litaC_std__system__SystemTimeMSec();

#line 108 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_this->currentCase;

}


#line 112 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase* litaC_std__test__TestSuite_addDynamicTest(litaC_std__test__TestSuite* litaC_this,const litaC_char* litaC_name,litaC_void* litaC_userData,litaC_void (*litaC_testFn)(litaC_std__test__TestCase*,litaC_void*),litaC_void (*litaC_cleanupFn)(litaC_std__test__TestCase*,litaC_void*)) {
#line 117 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"

#line 118 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_add_cb_std__test__TestCase_ce_(&((litaC_this->dynamicTestCases)), 
#line 119 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
(litaC_std__test__TestCase) {0});

#line 121 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase* litaC_testCase = litaC_std__array__std__array__Array_lastPtr_cb_std__test__TestCase_ce_(&((litaC_this->dynamicTestCases)));

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase_init(litaC_testCase, litaC_this);

#line 123 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_testCase->name = litaC_name;

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_testCase->userData = litaC_userData;

#line 125 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_testCase->testFn = litaC_testFn;

#line 126 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_testCase->cleanupFn = litaC_cleanupFn;

#line 127 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_testCase;

}


#line 130 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase* litaC_std__test__TestSuite_enterDynamicTest(litaC_std__test__TestSuite* litaC_this) {
#line 131 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(litaC_this->index >= litaC_std__array__std__array__Array_size_cb_std__test__TestCase_ce_(&((litaC_this->dynamicTestCases))) || litaC_this->index < 0) {{
#line 132 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return NULL;


}
} 


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->currentCase = litaC_std__array__std__array__Array_getPtr_cb_std__test__TestCase_ce_(&((litaC_this->dynamicTestCases)), litaC_this->index);

#line 135 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->currentCase->startTime = litaC_std__system__SystemTimeMSec();

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->index += 1;

#line 138 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_this->currentCase;

}


#line 141 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestSuite_executeDynamicTest(litaC_std__test__TestSuite* litaC_this) {
#line 142 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(!(litaC_this->currentCase) || !(litaC_this->currentCase->testFn)) {{
#line 143 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return;


}
} 


#line 146 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->currentCase->testFn(litaC_this->currentCase, litaC_this->currentCase->userData);

#line 147 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(litaC_this->currentCase->cleanupFn) {{
#line 148 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->currentCase->cleanupFn(litaC_this->currentCase, litaC_this->currentCase->userData);

}
} 

}


#line 152 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestSuite_printDynamicTest(litaC_std__test__TestSuite* litaC_this,litaC_bool litaC_isJsonFormat) {
#line 153 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(!(litaC_this->currentCase) || !(litaC_this->currentCase->testFn)) {{
#line 154 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return;


}
} 


#line 157 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestCase_printResults(litaC_this->currentCase, litaC_this->currentCase->name, litaC_isJsonFormat);
}


#line 160 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_init(litaC_std__test__TestCase* litaC_this,litaC_std__test__TestSuite* litaC_testSuite) {
#line 161 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->testSuite = litaC_testSuite;

#line 162 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_this->errors = litaC_std__array__std__array__ArrayInit_cb_std__test__AssertEntry_ce_(32, litaC_testSuite->allocator);
}


#line 165 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_free(litaC_std__test__TestCase* litaC_this) {
#line 166 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_free_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)));
}


#line 169 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_reset(litaC_std__test__TestCase* litaC_this) {
#line 170 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_clear_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)));
}


#line 173 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_addError(litaC_std__test__TestCase* litaC_this,const litaC_char* litaC_error,const litaC_char* litaC_filename,litaC_usize litaC_lineNumber) {
#line 177 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"

#line 178 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_add_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)), 
#line 179 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
(litaC_std__test__AssertEntry) {
#line 180 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.filename = litaC_filename,

#line 181 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.lineNumber = litaC_lineNumber,

#line 182 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.errorMessage = litaC_error});
}


#line 187 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__TestCase_printResults(litaC_std__test__TestCase* litaC_this,const litaC_char* litaC_name,litaC_bool litaC_isJson) {
#line 190 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"

#line 191 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_f64 litaC_durationMSec = litaC_std__system__SystemTimeMSec() - litaC_this->startTime;

#line 193 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(litaC_isJson) {{
#line 194 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_cb__ptr_const_char_ce_ litaC_errors = litaC_std__array__std__array__ArrayInit_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_size_cb_std__test__AssertEntry_ce_(&((litaC_this->errors))) + 1, litaC_this->testSuite->allocator);

#line 195 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"


#line 197 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)));litaC_i += 1) {{
#line 198 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_add_cb__ptr_const_char_ce_(&((litaC_errors)), litaC_std__array__std__array__Array_get_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)), litaC_i).errorMessage);

}}

#line 200 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestStatus litaC_status = (litaC_std__array__std__array__Array_empty_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)))) ? litaC_std__test__TestStatus_SUCCESS : litaC_std__test__TestStatus_FAILED;

#line 201 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(litaC_this->isDisabled) {{
#line 202 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_status = litaC_std__test__TestStatus_DISABLED;

}
} 


#line 205 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestInfoMessage litaC_testInfo =  {
#line 206 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.type = "TEST_RESULT",

#line 207 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.name = litaC_name,

#line 208 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.status = litaC_status,

#line 209 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.errors = litaC_errors,

#line 210 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.durationMSec = litaC_durationMSec};

#line 213 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder litaC_sb = litaC_std__string__builder__StringBuilderInit(1024, litaC_this->testSuite->allocator);

#line 214 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"


#line 216 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestInfoMessage_toJson(&((litaC_testInfo)), &((litaC_sb)));

#line 217 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
printf(
#line 218 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
"%s\n", 
#line 219 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_cStr(&((litaC_sb))));

#line 221 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
fflush(stdout);

#line 214 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_free(&((litaC_sb)));

#line 195 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_free_cb__ptr_const_char_ce_(&((litaC_errors)));

}
} else {
#line 223 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
{
#line 224 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
const char* litaC_resultText = 
#line 225 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
(litaC_std__array__std__array__Array_empty_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)))) ? "SUCCESS" : "FAILED";

#line 227 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__builtins__String litaC_dots = (litaC_std__builtins__String) { .buffer = "...............................................................", .length = 63 };

#line 228 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_i32 litaC_nDots = MAX(0, litaC_dots.length - litaC_std__string__char_length(litaC_name) - litaC_std__string__char_length(litaC_resultText));

#line 230 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__terminal__ConsoleColors litaC_resultColor = 
#line 231 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
(litaC_std__array__std__array__Array_empty_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)))) ? litaC_std__terminal__ConsoleColors_GREEN : litaC_std__terminal__ConsoleColors_RED;

#line 233 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
printf(
#line 234 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
"Testing '%s'", 
#line 235 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_name);

#line 237 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
printf(
#line 238 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
"%.*s", 
#line 239 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_nDots, 
#line 240 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_dots.buffer);

#line 242 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
printf(
#line 243 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
"%s%s%s\n", 
#line 244 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__terminal__ConsoleColorsAsStr(litaC_resultColor), 
#line 245 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_resultText, 
#line 246 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__terminal__ConsoleColorsAsStr(litaC_std__terminal__ConsoleColors_CLEAR));

#line 248 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)));litaC_i += 1) {{
#line 249 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
printf("%s\n", litaC_std__array__std__array__Array_get_cb_std__test__AssertEntry_ce_(&((litaC_this->errors)), litaC_i).errorMessage);

}}

#line 251 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
fflush(stdout);

}} 

}


#line 256 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__AssertCStr(const litaC_char* litaC_expected,const litaC_char* litaC_actual,const litaC_char* litaC_filename,litaC_usize litaC_lineNumber) {
#line 261 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"

#line 262 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__Assert(
#line 263 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__StringEqual(litaC_expected, litaC_actual), 
#line 264 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_filename, 
#line 265 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_lineNumber);
}


#line 286 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_void litaC_std__test__Assert(litaC_bool litaC_cond,const litaC_char* litaC_filename,litaC_usize litaC_lineNumber) {
#line 290 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"

#line 291 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(!(litaC_std__test__testSuite.allocator)) {{
#line 292 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestSuite_init(&((litaC_std__test__testSuite)), litaC_std__mem__defaultAllocator);

#line 293 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestSuite_enterTest(&((litaC_std__test__testSuite)));

}
} 


#line 296 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(!(litaC_cond)) {{
#line 297 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder litaC_sb = litaC_std__string__builder__StringBuilderInit(256, litaC_std__test__testSuite.allocator);

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_sb)), 
#line 299 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
"%s:%zu: Assertion failed", 
#line 300 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_filename, 
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_lineNumber);

#line 303 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_add_cb_std__test__AssertEntry_ce_(&((litaC_std__test__testSuite.currentCase->errors)), 
#line 304 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
(litaC_std__test__AssertEntry) {
#line 305 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.filename = litaC_filename,

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.lineNumber = litaC_lineNumber,

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
.errorMessage = litaC_std__string__builder__StringBuilder_cStr(&((litaC_sb)))});

#line 311 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
longjmp(litaC_std__test__testSuite.env, 1);

}
} 

}


#line 381 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

litaC_void litaC_std__array__testInsertAll(void) {
#line 382 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_i32_ce_ litaC_list = litaC_std__array__std__array__ArrayInit_cb_i32_ce_(10, litaC_std__mem__defaultAllocator);

#line 383 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_list.capacity;litaC_i += 1) {{
#line 384 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_add_cb_i32_ce_(&((litaC_list)), litaC_i + 1);

}}

#line 387 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_i32_ce_ litaC_other = litaC_std__array__std__array__ArrayInit_cb_i32_ce_(3, litaC_std__mem__defaultAllocator);

#line 388 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_add_cb_i32_ce_(&((litaC_other)), 33);

#line 389 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_add_cb_i32_ce_(&((litaC_other)), 44);

#line 390 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_add_cb_i32_ce_(&((litaC_other)), 55);

#line 391 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_insertAllAt_cb_i32_ce_(&((litaC_list)), 7, &((litaC_other)));

#line 393 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 6) == 7, __FILE__, __LINE__);

#line 394 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 7) == 33, __FILE__, __LINE__);

#line 395 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 8) == 44, __FILE__, __LINE__);

#line 396 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 9) == 55, __FILE__, __LINE__);

#line 397 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 10) == 8, __FILE__, __LINE__);

#line 398 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_size_cb_i32_ce_(&((litaC_list))) == 13, __FILE__, __LINE__);

#line 400 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_insertAllAt_cb_i32_ce_(&((litaC_list)), 12, &((litaC_other)));

#line 401 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_size_cb_i32_ce_(&((litaC_list))) == 16, __FILE__, __LINE__);

#line 402 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 11) == 9, __FILE__, __LINE__);

#line 403 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 12) == 33, __FILE__, __LINE__);

#line 404 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 13) == 44, __FILE__, __LINE__);

#line 405 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 14) == 55, __FILE__, __LINE__);

#line 406 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 15) == 10, __FILE__, __LINE__);

#line 408 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_setAll_cb_i32_ce_(&((litaC_list)), 15, &((litaC_other)));

#line 409 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_size_cb_i32_ce_(&((litaC_list))) == 16, __FILE__, __LINE__);

#line 410 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 11) == 9, __FILE__, __LINE__);

#line 411 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 12) == 33, __FILE__, __LINE__);

#line 412 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 13) == 44, __FILE__, __LINE__);

#line 413 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 14) == 55, __FILE__, __LINE__);

#line 414 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), 15) == 33, __FILE__, __LINE__);

#line 416 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_insertAllAt_cb_i32_ce_(&((litaC_list)), 0, &((litaC_other)));

#line 418 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_i32_ce_(&((litaC_list)));litaC_i += 1) {{
#line 419 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_x = litaC_std__array__std__array__Array_get_cb_i32_ce_(&((litaC_list)), litaC_i);

#line 420 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
printf("list[%d] = %d\n", litaC_i, litaC_x);

}}
}


#line 48 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* litaC_std__mem__memduplicate(const litaC_void* litaC_p,litaC_usize litaC_len,const litaC_std__mem__Allocator* litaC_a) {
#line 50 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"

#line 51 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* litaC_copy = litaC_std__mem__Allocator_alloc(litaC_a, litaC_len);

#line 52 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
memcpy(litaC_copy, litaC_p, litaC_len);

#line 54 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return litaC_copy;

}


#line 61 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_bool litaC_std__mem__isPowerOfTwo(litaC_usize litaC_x) {
#line 62 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return (litaC_x & (litaC_x - 1)) == 0;

}


#line 65 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_usize litaC_std__mem__alignForward(litaC_usize litaC_ptr,litaC_usize litaC_align) {
#line 66 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__assert__assert(litaC_std__mem__isPowerOfTwo(litaC_align), __FILE__, __LINE__);

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_usize litaC_p = litaC_ptr;

#line 69 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_usize litaC_a = litaC_align;

#line 70 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_usize litaC_modulo = litaC_p & (litaC_a - 1);

#line 72 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
if(litaC_modulo != 0) {{
#line 73 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_p += (litaC_a - litaC_modulo);

}
} 


#line 76 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return litaC_p;

}


#line 132 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
LITAC_INLINE 
litaC_void* litaC_std__mem__Allocator_alloc(const litaC_std__mem__Allocator* litaC_a,litaC_usize litaC_size) {
#line 133 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return litaC_a->allocFn(litaC_a, litaC_size);

}


#line 137 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
LITAC_INLINE 
litaC_void* litaC_std__mem__Allocator_calloc(const litaC_std__mem__Allocator* litaC_a,litaC_usize litaC_num,litaC_usize litaC_size) {
#line 138 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return litaC_a->callocFn(litaC_a, litaC_num, litaC_size);

}


#line 142 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
LITAC_INLINE 
litaC_void* litaC_std__mem__Allocator_realloc(const litaC_std__mem__Allocator* litaC_a,litaC_void* litaC_ptr,litaC_usize litaC_oldsize,litaC_usize litaC_newsize) {
#line 143 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return litaC_a->reallocFn(litaC_a, litaC_ptr, litaC_oldsize, litaC_newsize);

}


#line 147 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
LITAC_INLINE 
litaC_void litaC_std__mem__Allocator_free(const litaC_std__mem__Allocator* litaC_a,litaC_void* litaC_ptr) {
#line 148 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_a->freeFn(litaC_a, litaC_ptr);
}


#line 279 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"

litaC_void litaC_std__mem__testLineNumber(void) {
#line 280 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_void* litaC_mem = litaC_std__mem__Allocator_alloc(litaC_std__mem__defaultAllocator, 1024);
}


#line 211 "/Users/tony/projects/litac-lang/stdlib/std/libc/libc.lita"
litaC_i32 litaC_std__libc___vscprintf(const litaC_char* litaC_format,va_list litaC_args) {
#line 212 "/Users/tony/projects/litac-lang/stdlib/std/libc/libc.lita"
va_list litaC_argcopy = {0};

#line 213 "/Users/tony/projects/litac-lang/stdlib/std/libc/libc.lita"
va_copy(litaC_argcopy, litaC_args);

#line 214 "/Users/tony/projects/litac-lang/stdlib/std/libc/libc.lita"
litaC_i32 litaC_retval = vsnprintf(NULL, 0, litaC_format, litaC_argcopy);

#line 215 "/Users/tony/projects/litac-lang/stdlib/std/libc/libc.lita"
va_end(litaC_argcopy);

#line 217 "/Users/tony/projects/litac-lang/stdlib/std/libc/libc.lita"
return litaC_retval;

}


#line 7 "/Users/tony/projects/litac-lang/stdlib/std/assert.lita"
litaC_void litaC_std__assert__assert(litaC_bool litaC_cond,const litaC_char* litaC_filename,litaC_usize litaC_lineNumber) {
#line 11 "/Users/tony/projects/litac-lang/stdlib/std/assert.lita"

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/assert.lita"
litaC_std__test__Assert(litaC_cond, litaC_filename, litaC_lineNumber);
}


#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__StringInit(const litaC_char* litaC_buffer,litaC_i32 litaC_length) {
#line 13 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_buffer == NULL) {{
#line 14 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {
#line 15 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.buffer = NULL,

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.length = 0};


}
} 


#line 20 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {
#line 21 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.buffer = litaC_buffer,

#line 22 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.length = ((litaC_length < 0)) ? litaC_std__string__char_length(litaC_buffer) : litaC_length};

}


#line 26 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_std__string__String_hash(litaC_std__builtins__String litaC_b) {
#line 27 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_hash = 5381U;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_b.length;litaC_i += 1) {{
#line 29 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_hash = ((litaC_hash << 5U) + litaC_hash) + ((litaC_u32)(litaC_b.buffer[litaC_i]));

}}

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_hash;

}


#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_substring(litaC_std__builtins__String litaC_b,litaC_i32 litaC_start,litaC_i32 litaC_end) {
#line 35 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_endIndex = (litaC_end < 0) ? litaC_b.length : litaC_end;

#line 37 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_endIndex <= litaC_start || litaC_start < 0 || litaC_start >= litaC_b.length) {{
#line 38 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {
#line 39 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.buffer = NULL,

#line 40 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.length = 0};


}
} 


#line 44 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {
#line 45 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.buffer = &(litaC_b.buffer[litaC_start]),

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.length = litaC_endIndex - litaC_start};

}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_substringOf(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_index = litaC_std__string__String_indexOf(litaC_b, litaC_str);

#line 52 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_index < 0) {{
#line 53 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {0};


}
} 


#line 56 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_substring(litaC_b, 0, litaC_index);

}


#line 59 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_substringOfAfter(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str) {
#line 60 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_index = litaC_std__string__String_indexOf(litaC_b, litaC_str);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_index < 0) {{
#line 62 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {0};


}
} 


#line 65 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_substring(litaC_b, litaC_index + litaC_str.length, -(
#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

}


#line 68 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_startsWith(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_prefix,litaC_i32 litaC_fromIndex) {
#line 69 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_prefix.length < 1) {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_false;


}
} 


#line 73 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
const litaC_char* litaC_ta = litaC_b.buffer;

#line 74 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_to = litaC_fromIndex;

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
const litaC_char* litaC_pa = litaC_prefix.buffer;

#line 76 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_po = 0;

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_pc = litaC_prefix.length;

#line 79 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if((litaC_fromIndex < 0) || (litaC_fromIndex > litaC_b.length - litaC_pc)) {{
#line 80 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_false;


}
} 


#line 83 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while((litaC_pc -= 1) >= 0) {{
#line 84 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_ta[litaC_to] != litaC_pa[litaC_po]) {{
#line 85 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_false;


}
} 


#line 87 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_to += 1;

#line 88 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_po += 1;

}}

#line 90 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_true;

}


#line 93 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_endsWith(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_suffix) {
#line 94 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_startsWith(litaC_b, litaC_suffix, litaC_b.length - litaC_suffix.length);

}


#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_equalsString(litaC_std__builtins__String litaC_b,const litaC_char* litaC_str,litaC_i32 litaC_len) {
#line 98 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_str)) {{
#line 99 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_b.buffer == NULL;


}
} 


#line 102 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_len = ((litaC_len < 0)) ? litaC_std__string__char_length(litaC_str) : litaC_len;

#line 103 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_b.length != litaC_len) {{
#line 104 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_false;


}
} 


#line 107 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return strncmp(litaC_b.buffer, litaC_str, litaC_b.length) == 0;

}


#line 110 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_equals(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_other) {
#line 111 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_equalsString(litaC_b, litaC_other.buffer, litaC_other.length);

}


#line 114 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_equalsIgnoreCase(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str) {
#line 115 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_b.length != litaC_str.length) {{
#line 116 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_false;


}
} 


#line 119 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_len = litaC_str.length;

#line 120 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(litaC_len) {{
#line 121 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_c1 = tolower(*(litaC_b.buffer));

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_c2 = tolower(*(litaC_str.buffer));

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_c1 != litaC_c2) {{
#line 125 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_false;


}
} 


#line 128 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_c1 == '\0') {{
#line 129 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_true;


}
} 


#line 132 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_b.buffer += 1;

#line 133 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str.buffer += 1;

#line 134 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_len -= 1;

}}

#line 136 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_true;

}


#line 139 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_contains(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str) {
#line 140 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_indexOf(litaC_b, litaC_str) > -(1);

}


#line 143 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_endIndexOf(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str) {
#line 144 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_endIndexOfAt(litaC_b, litaC_str, 0);

}


#line 147 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_endIndexOfAt(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str,litaC_i32 litaC_fromIndex) {
#line 148 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_index = litaC_std__string__String_indexOfAt(litaC_b, litaC_str, litaC_fromIndex);

#line 149 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_index < 0) {return -(1);

} 


#line 150 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_index + litaC_str.length;

}


#line 153 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_indexOf(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str) {
#line 154 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_indexOfAt(litaC_b, litaC_str, 0);

}


#line 157 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_indexOfAt(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str,litaC_i32 litaC_fromIndex) {
#line 158 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_str.length < 1) {{
#line 159 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return -(1);


}
} 


#line 162 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
const litaC_char* litaC_target = litaC_str.buffer;

#line 163 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
const litaC_char* litaC_source = litaC_b.buffer;

#line 165 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_targetOffset = 0;

#line 166 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_sourceOffset = 0;

#line 168 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char litaC_first = litaC_target[0];

#line 170 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_len = litaC_str.length;

#line 171 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_targetCount = litaC_len;

#line 173 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_max = litaC_sourceOffset + (litaC_b.length - litaC_targetCount);

#line 175 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
for(litaC_i32 litaC_i = litaC_sourceOffset + litaC_fromIndex;litaC_i <= litaC_max;litaC_i += 1) {{
#line 177 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_source[litaC_i] != litaC_first) {{
#line 178 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(litaC_i <= litaC_max && litaC_source[litaC_i] != litaC_first) {{
#line 179 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i += 1;

}}

}
} 


#line 184 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_i <= litaC_max) {{
#line 185 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_j = litaC_i + 1;

#line 186 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_end = litaC_j + litaC_targetCount - 1;

#line 187 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
for(litaC_i32 litaC_k = litaC_targetOffset + 1;litaC_j < litaC_end && litaC_source[litaC_j] == litaC_target[litaC_k];) {{
#line 188 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_j += 1;

#line 189 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_k += 1;

}}

#line 192 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_j == litaC_end) {{
#line 194 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_i - litaC_sourceOffset;


}
} 


}
} 


}}

#line 198 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return -(1);

}


#line 201 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_lastIndexOfAt(litaC_std__builtins__String litaC_b,litaC_std__builtins__String litaC_str,litaC_i32 litaC_fromIndex) {
#line 202 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_len = litaC_str.length;

#line 203 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_sourceCount = litaC_b.length;

#line 204 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_targetCount = litaC_len;

#line 206 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_targetOffset = 0;

#line 207 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_sourceOffset = 0;

#line 209 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
const litaC_char* litaC_source = litaC_b.buffer;

#line 210 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
const litaC_char* litaC_target = litaC_str.buffer;

#line 212 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_rightIndex = litaC_sourceCount - litaC_targetCount;

#line 213 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_fromIndex < 0) {{
#line 214 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_fromIndex = litaC_sourceCount;

}
} 


#line 216 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_fromIndex > litaC_rightIndex) {{
#line 217 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_fromIndex = litaC_rightIndex;

}
} 


#line 220 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_targetCount == 0) {{
#line 221 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_fromIndex;


}
} 


#line 224 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_strLastIndex = litaC_targetOffset + litaC_targetCount - 1;

#line 225 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char litaC_strLastChar = litaC_target[litaC_strLastIndex];

#line 226 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_min = litaC_sourceOffset + litaC_targetCount - 1;

#line 227 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_i = litaC_min + litaC_fromIndex;

#line 229 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
startSearchForLastChar:;


#line 230 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(litaC_true) {{
#line 231 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(litaC_i >= litaC_min && litaC_source[litaC_i] != litaC_strLastChar) {{
#line 232 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i -= 1;

}}

#line 234 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_i < litaC_min) {{
#line 235 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return -(1);


}
} 


#line 237 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_j = litaC_i - 1;

#line 238 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_start = litaC_j - (litaC_targetCount - 1);

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_k = litaC_strLastIndex - 1;

#line 241 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(litaC_j > litaC_start) {{
#line 242 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_source[litaC_j] != litaC_target[litaC_k]) {{
#line 243 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i -= 1;

#line 244 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
goto startSearchForLastChar;


}
} 


#line 246 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_j -= 1;

#line 247 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_k -= 1;

}}

#line 249 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_start - litaC_sourceOffset + 1;


}}
}


#line 262 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__SplitIter_hasNext(litaC_std__string__SplitIter* litaC_this) {
#line 263 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_this->currentIndex = litaC_std__string__String_endIndexOfAt(litaC_this->str, litaC_this->split, litaC_this->lastIndex);

#line 264 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_this->currentIndex > -(1) || litaC_this->lastIndex < litaC_this->str.length;

}


#line 267 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__SplitIter_next(litaC_std__string__SplitIter* litaC_this) {
#line 268 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_result = litaC_std__string__String_substring(litaC_this->str, litaC_this->lastIndex, litaC_this->currentIndex - litaC_this->split.length);

#line 270 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_this->lastIndex = litaC_this->currentIndex;

#line 271 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_this->lastIndex < 0) {litaC_this->lastIndex = litaC_this->str.length;
} 


#line 273 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_result;

}


#line 276 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__SplitIter_remaining(litaC_std__string__SplitIter* litaC_this) {
#line 277 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_this->currentIndex < 0 || litaC_this->currentIndex >= litaC_this->str.length) {{
#line 278 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {0};


}
} 


#line 281 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_offset = (litaC_i32)(&(litaC_this->str.buffer[litaC_this->currentIndex]) - litaC_this->str.buffer);

#line 282 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {
#line 283 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.buffer = litaC_this->str.buffer + litaC_this->currentIndex,

#line 284 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.length = litaC_this->str.length - litaC_offset};

}


#line 288 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__string__SplitIter litaC_std__string__String_split(litaC_std__builtins__String litaC_this,litaC_std__builtins__String litaC_str) {
#line 289 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__string__SplitIter) {
#line 290 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.str = litaC_this,

#line 291 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.split = litaC_str,

#line 292 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.lastIndex = 0,

#line 293 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.currentIndex = 0};

}


#line 297 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_leftTrim(litaC_std__builtins__String litaC_this) {
#line 298 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_i = 0;

#line 299 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(litaC_i < litaC_this.length) {{
#line 300 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char litaC_c = litaC_this.buffer[litaC_i];

#line 301 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(isspace(litaC_c))) {{
#line 302 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
break;

}
} 


#line 304 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i += 1;

}}

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_substring(litaC_this, litaC_i, -(
#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

}


#line 309 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_rightTrim(litaC_std__builtins__String litaC_this) {
#line 310 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_i = litaC_this.length - 1;

#line 311 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(litaC_i >= 0) {{
#line 312 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char litaC_c = litaC_this.buffer[litaC_i];

#line 313 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(isspace(litaC_c))) {{
#line 314 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
break;

}
} 


#line 316 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i -= 1;

}}

#line 318 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_substring(litaC_this, 0, litaC_i + 1);

}


#line 321 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_trim(litaC_std__builtins__String litaC_this) {
#line 322 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_left = litaC_std__string__String_leftTrim(litaC_this);

#line 323 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__String_rightTrim(litaC_left);

}


#line 326 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_copyTo(litaC_std__builtins__String litaC_b,litaC_char* litaC_buf,litaC_i32 litaC_len,litaC_bool litaC_addZero) {
#line 327 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_buf) || litaC_len == 0) {return 0;

} 


#line 329 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_bytesCopied = litaC_len;

#line 330 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_b.length < litaC_len) {{
#line 331 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bytesCopied = litaC_b.length;

}
} 


#line 334 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
memcpy((litaC_void*)litaC_buf, 
#line 335 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
(const litaC_void*)(&(litaC_b.buffer[0])), 
#line 336 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bytesCopied * sizeof(litaC_char));

#line 338 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_addZero) {litaC_buf[litaC_bytesCopied] = '\0';
} 


#line 340 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_bytesCopied);

}


#line 343 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__String_copy(litaC_std__builtins__String litaC_s,const litaC_std__mem__Allocator* litaC_allocator) {
#line 344 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_s.length < 1) {{
#line 345 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {
#line 346 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.buffer = NULL,

#line 347 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.length = 0};


}
} 


#line 351 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char* litaC_copiedStr = (litaC_char*)litaC_std__mem__Allocator_alloc(litaC_allocator, (litaC_s.length + 1) * sizeof(litaC_char));

#line 352 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
memcpy(litaC_copiedStr, litaC_s.buffer, litaC_s.length);

#line 354 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_copiedStr[litaC_s.length] = '\0';

#line 356 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {
#line 357 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.buffer = litaC_copiedStr,

#line 358 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.length = litaC_s.length};

}


#line 362 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_void litaC_std__string__String_forEach(litaC_std__builtins__String litaC_b,litaC_bool (*litaC_fn)(litaC_char)) {
#line 363 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_b.length;litaC_i += 1) {{
#line 364 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_fn(litaC_b.buffer[litaC_i])) {{
#line 365 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
break;

}
} 


}}
}


#line 370 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__String_empty(litaC_std__builtins__String litaC_b) {
#line 371 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_b.length == 0;

}


#line 374 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__String_size(litaC_std__builtins__String litaC_b) {
#line 375 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_b.length;

}


#line 378 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char litaC_std__string__String_get(litaC_std__builtins__String litaC_b,litaC_i32 litaC_index) {
#line 379 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_index < 0 || litaC_index >= litaC_b.length) {{
#line 380 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return '\0';


}
} 


#line 383 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_b.buffer[litaC_index];

}


#line 386 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char* litaC_std__string__String_toCStr(litaC_std__builtins__String litaC_b,const litaC_std__mem__Allocator* litaC_allocator) {
#line 387 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__StringClone(litaC_b.buffer, litaC_b.length, litaC_allocator);

}


#line 391 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char* litaC_std__string__StringClone(const litaC_char* litaC_original,litaC_i32 litaC_len,const litaC_std__mem__Allocator* litaC_allocator) {
#line 392 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_original)) {{
#line 393 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return NULL;


}
} 


#line 396 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_len < 0) {{
#line 397 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_len = litaC_std__string__char_length(litaC_original);

}
} 


#line 400 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char* litaC_copiedStr = NULL;

#line 402 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_len > 0) {{
#line 403 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_copiedStr = (litaC_char*)litaC_std__mem__Allocator_alloc(litaC_allocator, (litaC_len + 1) * sizeof(litaC_char));

#line 404 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
memcpy(litaC_copiedStr, litaC_original, litaC_len);

#line 406 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_copiedStr[litaC_len] = '\0';

}
} 


#line 408 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_copiedStr;

}


#line 411 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_char* litaC_std__string__StringCopy(const litaC_char* litaC_src,litaC_char* litaC_dest,litaC_usize litaC_size) {
#line 412 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_src)) {{
#line 413 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return NULL;


}
} 


#line 416 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(litaC_size > 0) {{
#line 417 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_usize litaC_i = {0};

#line 418 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
for(litaC_i = 0;
litaC_i < litaC_size - 1 && litaC_src[litaC_i];litaC_i += 1) {{
#line 419 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_dest[litaC_i] = litaC_src[litaC_i];

}}

#line 421 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_dest[litaC_i] = '\0';

}
} 


#line 423 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_dest;

}


#line 426 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_std__string__StringHashLen(const litaC_char* litaC_str,litaC_usize litaC_size) {
#line 427 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_hash = 5381U;

#line 429 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_usize litaC_index = 0;

#line 430 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(litaC_index < litaC_size) {{
#line 431 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_hash = ((litaC_hash << 5U) + litaC_hash) ^ ((litaC_u32)(*(litaC_str)));

#line 432 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str += 1;

#line 433 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_index += 1;

}}

#line 435 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_hash;

}


#line 438 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_std__string__StringHash(const litaC_char* litaC_str) {
#line 439 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_hash = 5381U;

#line 441 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
while(*(litaC_str)) {{
#line 442 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_hash = ((litaC_hash << 5U) + litaC_hash) ^ ((litaC_u32)(*(litaC_str)));

#line 443 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str += 1;

}}

#line 445 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_hash;

}


#line 448 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__StringEqualLen(const litaC_char* litaC_a,const litaC_char* litaC_b,litaC_usize litaC_size) {
#line 449 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_a) && !(litaC_b)) {return litaC_true;

} 


#line 450 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_a) || !(litaC_b)) {return litaC_false;

} 


#line 452 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return strncmp(litaC_a, litaC_b, litaC_size) == 0;

}


#line 455 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__StringEqual(const litaC_char* litaC_a,const litaC_char* litaC_b) {
#line 456 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_a) && !(litaC_b)) {return litaC_true;

} 


#line 457 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_a) || !(litaC_b)) {return litaC_false;

} 


#line 459 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return strcmp(litaC_a, litaC_b) == 0;

}


#line 462 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_u32 litaC_std__string__char_hash(const litaC_char* litaC_str) {
#line 463 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__StringHash(litaC_str);

}


#line 466 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__char_equals(const litaC_char* litaC_str,const litaC_char* litaC_other) {
#line 467 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_str) && !(litaC_other)) {return litaC_true;

} 


#line 468 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
if(!(litaC_str) || !(litaC_other)) {return litaC_false;

} 


#line 470 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return strcmp(litaC_str, litaC_other) == 0;

}


#line 473 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__char_equalsString(const litaC_char* litaC_str,litaC_std__builtins__String litaC_other) {
#line 474 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_std__string__StringEqualLen(litaC_str, litaC_other.buffer, litaC_other.length);

}


#line 477 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_std__string__char_length(const litaC_char* litaC_str) {
#line 478 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return strlen(litaC_str);

}


#line 482 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_bool litaC_std__string__char_empty(const litaC_char* litaC_str) {
#line 483 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return litaC_str[0] == '\0';

}


#line 486 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_std__string__char_toString(const litaC_char* litaC_str) {
#line 487 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
return (litaC_std__builtins__String) {
#line 488 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.buffer = litaC_str,

#line 489 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
.length = strlen(litaC_str)};

}


#line 495 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testEquals(void) {
#line 496 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_a = litaC_std__string__StringInit("Hello World", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 497 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_b = litaC_std__string__StringInit("Bye World", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 498 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_c = litaC_a;

#line 499 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_d = litaC_std__string__StringInit("HelloWorld", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 500 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_e = litaC_std__string__StringInit(NULL, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 502 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_a, litaC_c.buffer, litaC_c.length) == litaC_true, __FILE__, __LINE__);

#line 503 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_a, "Hell", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)) == 
#line 503 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_false, __FILE__, __LINE__);

#line 504 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_a, "Hello World", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)) == 
#line 504 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_true, __FILE__, __LINE__);

#line 505 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_a, litaC_b.buffer, litaC_b.length) == litaC_false, __FILE__, __LINE__);

#line 506 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_a, litaC_d.buffer, litaC_d.length) == litaC_false, __FILE__, __LINE__);

#line 507 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_e, litaC_d.buffer, litaC_d.length) == litaC_false, __FILE__, __LINE__);

#line 508 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_a, litaC_e.buffer, litaC_e.length) == litaC_false, __FILE__, __LINE__);
}


#line 513 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testContains(void) {
#line 514 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_a = (litaC_std__builtins__String) { .buffer = "Hello World", .length = 11 };

#line 515 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_e = litaC_std__string__StringInit(NULL, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 517 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_contains(litaC_a, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }) == litaC_true, __FILE__, __LINE__);

#line 518 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_contains(litaC_a, (litaC_std__builtins__String) { .buffer = "d", .length = 1 }) == litaC_true, __FILE__, __LINE__);

#line 519 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_contains(litaC_a, (litaC_std__builtins__String) { .buffer = "H", .length = 1 }) == litaC_true, __FILE__, __LINE__);

#line 520 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_contains(litaC_a, litaC_std__string__String_substring((litaC_std__builtins__String) { .buffer = "Which", .length = 5 }, 0, 1)) == litaC_true, __FILE__, __LINE__);

#line 521 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_contains(litaC_e, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }) == litaC_false, __FILE__, __LINE__);

#line 522 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_contains(litaC_a, litaC_e) == litaC_false, __FILE__, __LINE__);
}


#line 526 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testStartsWith(void) {
#line 527 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_a = litaC_std__string__StringInit("Hello World", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 528 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_e = litaC_std__string__StringInit(NULL, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 530 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, 0) == litaC_false, __FILE__, __LINE__);

#line 531 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "d", .length = 1 }, 0) == litaC_false, __FILE__, __LINE__);

#line 532 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "H", .length = 1 }, 0) == litaC_true, __FILE__, __LINE__);

#line 533 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "Hell", .length = 4 }, 0) == litaC_true, __FILE__, __LINE__);

#line 534 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "Hello World", .length = 11 }, 0) == litaC_true, __FILE__, __LINE__);

#line 535 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "Hello World!", .length = 12 }, 0) == litaC_false, __FILE__, __LINE__);

#line 536 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "Which", .length = 5 }, 1) == litaC_false, __FILE__, __LINE__);

#line 537 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "ello", .length = 4 }, 1) == litaC_true, __FILE__, __LINE__);

#line 538 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_e, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, 0) == litaC_false, __FILE__, __LINE__);

#line 539 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_startsWith(litaC_a, litaC_e, 0) == litaC_false, __FILE__, __LINE__);
}


#line 543 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testEndsWith(void) {
#line 544 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_a = litaC_std__string__StringInit("Hello World", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 545 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_e = litaC_std__string__StringInit(NULL, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 547 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_endsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }) == litaC_true, __FILE__, __LINE__);

#line 548 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_endsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "d", .length = 1 }) == litaC_true, __FILE__, __LINE__);

#line 549 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_endsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "H", .length = 1 }) == litaC_false, __FILE__, __LINE__);

#line 550 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_endsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "Hell", .length = 4 }) == litaC_false, __FILE__, __LINE__);

#line 551 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_endsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "Hello World", .length = 11 }) == litaC_true, __FILE__, __LINE__);

#line 552 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_endsWith(litaC_a, (litaC_std__builtins__String) { .buffer = "Hello World!", .length = 12 }) == litaC_false, __FILE__, __LINE__);
}


#line 556 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testIndexOf(void) {
#line 557 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_a = litaC_std__string__StringInit("Hello World", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 558 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_e = litaC_std__string__StringInit(NULL, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 560 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_indexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, 2) == 6, __FILE__, __LINE__);

#line 561 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_indexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, 7) == -(1), __FILE__, __LINE__);

#line 562 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_indexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "d", .length = 1 }, 0) == 10, __FILE__, __LINE__);

#line 563 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_indexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "H", .length = 1 }, 0) == 0, __FILE__, __LINE__);

#line 564 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_indexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "H", .length = 1 }, 2) == -(1), __FILE__, __LINE__);

#line 566 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_indexOfAt(litaC_e, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, 0) == -(1), __FILE__, __LINE__);

#line 567 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_indexOfAt(litaC_a, litaC_e, 0) == -(1), __FILE__, __LINE__);
}


#line 572 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testLastIndexOf(void) {
#line 573 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_a = litaC_std__string__StringInit("Hello World", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 574 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_e = litaC_std__string__StringInit(NULL, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 576 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_lastIndexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, -(
#line 201 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)) == 
#line 576 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
6, __FILE__, __LINE__);

#line 577 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_lastIndexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, 5) == -(1), __FILE__, __LINE__);

#line 578 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_lastIndexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, 7) == 6, __FILE__, __LINE__);

#line 579 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_lastIndexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "l", .length = 1 }, -(
#line 201 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)) == 
#line 579 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
9, __FILE__, __LINE__);

#line 580 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_lastIndexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "o", .length = 1 }, -(
#line 201 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)) == 
#line 580 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
7, __FILE__, __LINE__);

#line 581 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_lastIndexOfAt(litaC_a, (litaC_std__builtins__String) { .buffer = "z", .length = 1 }, -(
#line 201 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)) == 
#line 581 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
-(1), __FILE__, __LINE__);

#line 583 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_lastIndexOfAt(litaC_e, (litaC_std__builtins__String) { .buffer = "World", .length = 5 }, -(
#line 201 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)) == 
#line 583 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
-(1), __FILE__, __LINE__);
}


#line 587 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testSplitSingle(void) {
#line 588 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit("a=xxx&b=yyy", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 589 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__string__SplitIter litaC_it = litaC_std__string__String_split(litaC_str, (litaC_std__builtins__String) { .buffer = "&", .length = 1 });

#line 591 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_count = 0;

#line 592 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
{
#line 593 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))), __FILE__, __LINE__);

#line 594 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_n1 = litaC_std__string__SplitIter_next(&((litaC_it)));

#line 595 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
printf("N='%.*s'\n", litaC_n1.length, litaC_n1.buffer);

#line 596 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_n1, "a=xxx", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 596 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 597 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_count += 1;

}

#line 600 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
{
#line 601 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))), __FILE__, __LINE__);

#line 602 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_n1 = litaC_std__string__SplitIter_next(&((litaC_it)));

#line 603 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
printf("N='%.*s'\n", litaC_n1.length, litaC_n1.buffer);

#line 604 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_n1, "b=yyy", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 604 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 605 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_count += 1;

}

#line 608 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))) == litaC_false, __FILE__, __LINE__);

#line 610 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_count == 2, __FILE__, __LINE__);
}


#line 614 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testSplitMulti(void) {
#line 615 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit("a=xxx&&b=yyy", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 616 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__string__SplitIter litaC_it = litaC_std__string__String_split(litaC_str, (litaC_std__builtins__String) { .buffer = "&&", .length = 2 });

#line 618 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_count = 0;

#line 619 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
{
#line 620 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))), __FILE__, __LINE__);

#line 621 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_n1 = litaC_std__string__SplitIter_next(&((litaC_it)));

#line 622 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
printf("N='%.*s'\n", litaC_n1.length, litaC_n1.buffer);

#line 623 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_n1, "a=xxx", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 623 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 624 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_count += 1;

}

#line 627 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
{
#line 628 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))), __FILE__, __LINE__);

#line 629 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_n1 = litaC_std__string__SplitIter_next(&((litaC_it)));

#line 630 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
printf("N='%.*s'\n", litaC_n1.length, litaC_n1.buffer);

#line 631 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_n1, "b=yyy", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 631 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 632 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_count += 1;

}

#line 635 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))) == litaC_false, __FILE__, __LINE__);

#line 637 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_count == 2, __FILE__, __LINE__);
}


#line 642 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testSplitOne(void) {
#line 643 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit("a=xxx", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 644 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__string__SplitIter litaC_it = litaC_std__string__String_split(litaC_str, (litaC_std__builtins__String) { .buffer = "&&", .length = 2 });

#line 646 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_count = 0;

#line 647 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
{
#line 648 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))), __FILE__, __LINE__);

#line 649 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_n1 = litaC_std__string__SplitIter_next(&((litaC_it)));

#line 650 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
printf("N='%.*s'\n", litaC_n1.length, litaC_n1.buffer);

#line 651 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_n1, "a=xxx", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 651 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 652 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_count += 1;

}

#line 655 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))) == litaC_false, __FILE__, __LINE__);

#line 657 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_count == 1, __FILE__, __LINE__);
}


#line 661 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testSplitOneFirst(void) {
#line 662 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit("&&a=xxx", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 663 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__string__SplitIter litaC_it = litaC_std__string__String_split(litaC_str, (litaC_std__builtins__String) { .buffer = "&&", .length = 2 });

#line 665 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_count = 0;

#line 666 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
{
#line 667 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))), __FILE__, __LINE__);

#line 668 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_n1 = litaC_std__string__SplitIter_next(&((litaC_it)));

#line 669 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
printf("N='%.*s'\n", litaC_n1.length, litaC_n1.buffer);

#line 670 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_n1, "", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 670 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 671 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_count += 1;

}

#line 673 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
{
#line 674 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))), __FILE__, __LINE__);

#line 675 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_n1 = litaC_std__string__SplitIter_next(&((litaC_it)));

#line 676 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
printf("N='%.*s'\n", litaC_n1.length, litaC_n1.buffer);

#line 677 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_n1, "a=xxx", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 677 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 678 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_count += 1;

}

#line 681 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))) == litaC_false, __FILE__, __LINE__);

#line 683 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_count == 2, __FILE__, __LINE__);
}


#line 687 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testSplitOneLast(void) {
#line 688 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit("a=xxx&&", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 689 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__string__SplitIter litaC_it = litaC_std__string__String_split(litaC_str, (litaC_std__builtins__String) { .buffer = "&&", .length = 2 });

#line 691 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_i32 litaC_count = 0;

#line 692 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
{
#line 693 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))), __FILE__, __LINE__);

#line 694 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_n1 = litaC_std__string__SplitIter_next(&((litaC_it)));

#line 695 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
printf("N='%.*s'\n", litaC_n1.length, litaC_n1.buffer);

#line 696 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_n1, "a=xxx", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 696 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 697 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_count += 1;

}

#line 700 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__SplitIter_hasNext(&((litaC_it))) == litaC_false, __FILE__, __LINE__);

#line 702 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_count == 1, __FILE__, __LINE__);
}


#line 706 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testLeftTrim(void) {
#line 707 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit("  x yz", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 708 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_leftTrim(litaC_str), "x yz", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 708 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 710 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit("\n\tx yz", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 711 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_leftTrim(litaC_str), "x yz", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 711 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 713 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit("", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 714 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_leftTrim(litaC_str), "", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 714 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 716 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit("x ", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 717 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_leftTrim(litaC_str), "x ", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 717 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);
}


#line 721 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testRightTrim(void) {
#line 722 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit("xy z  ", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 723 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_rightTrim(litaC_str), "xy z", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 723 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 725 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit("xy z\n\t", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 726 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_rightTrim(litaC_str), "xy z", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 726 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 728 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit("", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 729 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_rightTrim(litaC_str), "", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 729 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 731 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit(" x", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 732 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_rightTrim(litaC_str), " x", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 732 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);
}


#line 736 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"

litaC_void litaC_std__string__testTrim(void) {
#line 737 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit("  xy z  ", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 738 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_trim(litaC_str), "xy z", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 738 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 740 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit("\n\txy z\n\t", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 741 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_trim(litaC_str), "xy z", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 741 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 743 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit("", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 744 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_trim(litaC_str), "", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 744 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);

#line 746 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_str = litaC_std__string__StringInit("x", -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 747 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
litaC_std__assert__assert(litaC_std__string__String_equalsString(litaC_std__string__String_trim(litaC_str), "x", -(
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 747 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
__FILE__, __LINE__);
}


#line 49 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
litaC_void* litaC_std__mem__libc_allocator__cMalloc(const litaC_std__mem__Allocator* litaC_a,litaC_usize litaC_size) {
#line 50 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
return malloc(litaC_size);

}


#line 53 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
litaC_void* litaC_std__mem__libc_allocator__cCalloc(const litaC_std__mem__Allocator* litaC_a,litaC_usize litaC_num,litaC_usize litaC_size) {
#line 54 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
return calloc(litaC_num, litaC_size);

}


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
litaC_void* litaC_std__mem__libc_allocator__cRealloc(const litaC_std__mem__Allocator* litaC_a,litaC_void* litaC_ptr,litaC_usize litaC_oldSize,litaC_usize litaC_size) {
#line 58 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
return realloc(litaC_ptr, litaC_size);

}


#line 61 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
litaC_void litaC_std__mem__libc_allocator__cFree(const litaC_std__mem__Allocator* litaC_a,litaC_void* litaC_ptr) {
#line 62 "/Users/tony/projects/litac-lang/stdlib/std/mem/libc_allocator.lita"
free(litaC_ptr);
}


#line 16 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder litaC_std__string__builder__StringBuilderInit(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 17 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"

#line 18 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder litaC_sb =  {0};

#line 19 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_init(&((litaC_sb)), litaC_initialSize, litaC_alloc);

#line 21 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_sb;

}


#line 24 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__StringBuilder_init(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 25 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_alloc)) {{
#line 27 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_alloc = litaC_std__mem__defaultAllocator;

}
} 


#line 30 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->alloc = litaC_alloc;

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length = 0;

#line 32 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.capacity = litaC_initialSize;

#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_length = litaC_initialSize;

#line 35 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.buffer = (litaC_char*)litaC_std__mem__Allocator_calloc(litaC_alloc, litaC_length, sizeof(litaC_char));

#line 36 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_b->asBuffer.buffer)) {{
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.capacity = 0;

#line 38 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length = 0;

}
} 

}


#line 42 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__StringBuilder_free(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 43 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_b && litaC_b->asBuffer.buffer && litaC_b->alloc) {{
#line 44 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__mem__Allocator_free(litaC_b->alloc, (litaC_void*)litaC_b->asBuffer.buffer);

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.buffer = NULL;

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length = 0;

#line 47 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.capacity = 0;

}
} 

}


#line 51 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendString(litaC_std__string__builder__StringBuilder* litaC_b,litaC_std__builtins__String litaC_str) {
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_appendStrn(litaC_b, litaC_str.buffer, litaC_str.length);

}


#line 55 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendStr(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_str) {
#line 56 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_str == NULL) {{
#line 57 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return 0;


}
} 


#line 59 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_len = litaC_std__string__char_length(litaC_str);

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_appendStrn(litaC_b, litaC_str, litaC_len);

}


#line 64 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendStrn(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_str,litaC_i32 litaC_len) {
#line 65 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_str == NULL || litaC_len < 1) {{
#line 66 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return 0;


}
} 


#line 69 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_b->asBuffer.length + litaC_len > litaC_b->asBuffer.capacity) {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_std__string__builder__BufferGrow(litaC_b, litaC_len))) {{
#line 71 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return -(1);


}
} 


}
} 


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
memcpy((litaC_void*)(&(litaC_b->asBuffer.buffer[litaC_b->asBuffer.length])), 
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
(const litaC_void*)litaC_str, 
#line 77 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_len * sizeof(litaC_char));

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length += litaC_len;

#line 79 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_len;

}


#line 83 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendFloat(litaC_std__string__builder__StringBuilder* litaC_b,litaC_f64 litaC_f) {
#line 84 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_append(litaC_b, "%f", litaC_f);

}


#line 87 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendI32(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_i) {
#line 88 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_append(litaC_b, "%d", litaC_i);

}


#line 91 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendI64(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i64 litaC_i) {
#line 92 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_append(litaC_b, "%ld", litaC_i);

}


#line 95 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendU32(litaC_std__string__builder__StringBuilder* litaC_b,litaC_u32 litaC_i) {
#line 96 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_append(litaC_b, "%u", litaC_i);

}


#line 99 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendU64(litaC_std__string__builder__StringBuilder* litaC_b,litaC_u64 litaC_i) {
#line 100 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_append(litaC_b, "%lu", litaC_i);

}


#line 103 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendChar(litaC_std__string__builder__StringBuilder* litaC_b,litaC_char litaC_c) {
#line 105 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_b->asBuffer.length + 1 >= litaC_b->asBuffer.capacity) {{
#line 106 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_std__string__builder__BufferGrow(litaC_b, 1))) {{
#line 107 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return -(1);


}
} 


}
} 


#line 111 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.buffer[litaC_b->asBuffer.length] = litaC_c;

#line 112 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length += 1;

#line 113 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return 1;

}


#line 116 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_append(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_format,...) {
#line 118 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_list litaC_args1 = {0};

#line 119 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_start(litaC_args1, litaC_format);

#line 121 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_len = litaC_std__libc___vscprintf(litaC_format, litaC_args1);

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_b->asBuffer.length + litaC_len >= litaC_b->asBuffer.capacity) {{
#line 123 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_growBy = (litaC_b->asBuffer.length + litaC_len + 1) - litaC_b->asBuffer.capacity;

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_std__string__builder__BufferGrow(litaC_b, litaC_growBy))) {{
#line 125 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return -(1);


}
} 


}
} 


#line 129 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_len = vsnprintf(&(litaC_b->asBuffer.buffer[litaC_b->asBuffer.length]), litaC_len + 1, litaC_format, litaC_args1);

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_end(litaC_args1);

#line 132 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_len < 0) {{
#line 133 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_len;


}
} 


#line 136 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length += litaC_len;

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_len;

}


#line 140 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_appendArgs(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_format,va_list litaC_args) {
#line 141 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_list litaC_copyArgs = {0};

#line 142 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_copy(litaC_copyArgs, litaC_args);

#line 144 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_len = litaC_std__libc___vscprintf(litaC_format, litaC_copyArgs);

#line 145 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_b->asBuffer.length + litaC_len >= litaC_b->asBuffer.capacity) {{
#line 146 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_std__string__builder__BufferGrow(litaC_b, (litaC_len + 1) - litaC_b->asBuffer.capacity))) {{
#line 147 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return -(1);


}
} 


}
} 


#line 151 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_len = vsnprintf(&(litaC_b->asBuffer.buffer[litaC_b->asBuffer.length]), litaC_len + 1, litaC_format, litaC_copyArgs);

#line 152 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_end(litaC_copyArgs);

#line 177 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_len < 0) {{
#line 178 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_len;


}
} 


#line 181 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length += litaC_len;

#line 182 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_len;

}


#line 204 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_format(litaC_std__string__builder__StringBuilder* litaC_b,const litaC_char* litaC_format,...) {
#line 205 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_clear(litaC_b);

#line 207 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_list litaC_args = {0};

#line 208 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_start(litaC_args, litaC_format);

#line 209 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_result = litaC_std__string__builder__StringBuilder_appendArgs(litaC_b, litaC_format, litaC_args);

#line 210 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_end(litaC_args);

#line 212 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_result;

}


#line 215 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__StringBuilder_delete(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_start,litaC_i32 litaC_end) {
#line 216 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_b->asBuffer.length == 0) {{
#line 217 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return;


}
} 


#line 220 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_start < 0) {{
#line 221 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_start = 0;

}
} 


#line 223 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_end > litaC_b->asBuffer.length) {{
#line 224 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_end = litaC_b->asBuffer.length;

}
} 


#line 227 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_start > litaC_end) {{
#line 228 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return;


}
} 


#line 233 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
memmove((litaC_void*)(&(litaC_b->asBuffer.buffer[litaC_start])), 
#line 234 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
(const litaC_void*)(&(litaC_b->asBuffer.buffer[litaC_end])), 
#line 235 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
(litaC_b->asBuffer.length - litaC_end) * sizeof(litaC_char));

#line 237 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length -= (litaC_end - litaC_start);
}


#line 240 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_bool litaC_std__string__builder__StringBuilder_contains(litaC_std__string__builder__StringBuilder* litaC_b,litaC_std__builtins__String litaC_str) {
#line 241 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_indexOf(litaC_b, litaC_str) > -(1);

}


#line 244 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_indexOf(litaC_std__string__builder__StringBuilder* litaC_b,litaC_std__builtins__String litaC_str) {
#line 245 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_indexOfAt(litaC_b, litaC_str, 0);

}


#line 248 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_indexOfAt(litaC_std__string__builder__StringBuilder* litaC_b,litaC_std__builtins__String litaC_str,litaC_i32 litaC_fromIndex) {
#line 249 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__builtins__String litaC_view = litaC_std__string__buffer__StringBuffer_toString(litaC_b->asBuffer);

#line 250 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__String_indexOfAt(litaC_view, litaC_str, litaC_fromIndex);

}


#line 253 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_replace(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_start,litaC_i32 litaC_end,litaC_std__builtins__String litaC_str) {
#line 254 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_delete(litaC_b, litaC_start, litaC_end);

#line 255 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__StringBuilder_insert(litaC_b, litaC_start, "%.*s", litaC_str.length, litaC_str.buffer);

}


#line 258 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_insert(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_index,const litaC_char* litaC_format,...) {
#line 259 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_index < 0) {{
#line 260 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_index = 0;

}
} 


#line 264 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_index > litaC_b->asBuffer.length) {{
#line 265 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_index = litaC_b->asBuffer.length;

}
} 


#line 269 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_list litaC_args = {0};

#line 270 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_start(litaC_args, litaC_format);

#line 273 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_len = litaC_std__libc___vscprintf(litaC_format, litaC_args);

#line 274 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_len < 0) {{
#line 275 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_len;


}
} 


#line 278 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_required = litaC_b->asBuffer.length + litaC_len + 1;

#line 279 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_required >= litaC_b->asBuffer.capacity) {{
#line 280 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_std__string__builder__BufferGrow(litaC_b, litaC_required - litaC_b->asBuffer.capacity))) {{
#line 281 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return -(1);


}
} 


}
} 


#line 285 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_char litaC_startChar = litaC_b->asBuffer.buffer[litaC_index];

#line 286 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_moveLength = litaC_b->asBuffer.length - litaC_index;

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
memmove((litaC_void*)(&(litaC_b->asBuffer.buffer[litaC_index + litaC_len])), 
#line 288 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
(const litaC_void*)(&(litaC_b->asBuffer.buffer[litaC_index])), 
#line 289 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_moveLength * sizeof(litaC_char));

#line 290 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_n = vsnprintf(&(litaC_b->asBuffer.buffer[litaC_index]), litaC_len + 1, litaC_format, litaC_args);

#line 291 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
va_end(litaC_args);

#line 293 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_n < 0) {{
#line 294 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_n;


}
} 


#line 297 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.buffer[litaC_index + litaC_len] = litaC_startChar;

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length += litaC_n;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_len;

}


#line 303 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder* litaC_std__string__builder__StringBuilder_trim(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 304 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_start = 0;

#line 305 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_end = 0;

#line 308 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_b->asBuffer.length;litaC_i += 1) {{
#line 309 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_char litaC_c = litaC_b->asBuffer.buffer[litaC_i];

#line 310 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_std__ascii__char_isWhitespace(litaC_c)) {{
#line 311 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_end += 1;

}
} else {
#line 313 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
{
#line 314 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
break;

}} 


}}

#line 318 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_end > litaC_start) {{
#line 319 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_delete(litaC_b, litaC_start, litaC_end);

}
} 


#line 323 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_start = litaC_b->asBuffer.length;

#line 324 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_end = litaC_b->asBuffer.length;

#line 325 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
for(litaC_i32 litaC_i = litaC_b->asBuffer.length - 1;litaC_i >= 0;litaC_i -= 1) {{
#line 326 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_char litaC_c = litaC_b->asBuffer.buffer[litaC_i];

#line 327 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_std__ascii__char_isWhitespace(litaC_c)) {{
#line 328 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_start -= 1;

}
} else {
#line 330 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
{
#line 331 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
break;

}} 


}}

#line 335 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_end > litaC_start) {{
#line 336 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_delete(litaC_b, litaC_start, litaC_end);

}
} 


#line 339 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_b;

}


#line 342 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_std__string__builder__StringBuilder_copyTo(litaC_std__string__builder__StringBuilder* litaC_b,litaC_char* litaC_buf,litaC_i32 litaC_len,litaC_bool litaC_addZero) {
#line 343 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__builtins__String litaC_view = litaC_std__string__buffer__StringBuffer_toString(litaC_b->asBuffer);

#line 344 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__String_copyTo(litaC_view, litaC_buf, litaC_len, litaC_addZero);

}


#line 347 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_void litaC_std__string__builder__StringBuilder_forEach(litaC_std__string__builder__StringBuilder* litaC_b,litaC_bool (*litaC_fn)(litaC_char)) {
#line 348 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_b->asBuffer.length;litaC_i += 1) {{
#line 349 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_fn(litaC_b->asBuffer.buffer[litaC_i])) {{
#line 350 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
break;

}
} 


}}
}


#line 362 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"

litaC_std__string__builder__StringBuilder litaC_std__string__builder__StringBuilder_slice(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 363 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return (litaC_std__string__builder__StringBuilder) {
#line 364 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
.alloc = litaC_b->alloc,

#line 365 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
.asBuffer = litaC_std__string__buffer__StringBuffer_slice(litaC_b->asBuffer)};

}


#line 370 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
LITAC_INLINE 
litaC_i32 litaC_std__string__builder__StringBuilder_remaining(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 371 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_b->asBuffer.capacity - litaC_b->asBuffer.length;

}


#line 375 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
LITAC_INLINE 
litaC_bool litaC_std__string__builder__StringBuilder_empty(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 376 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_b->asBuffer.length == 0;

}


#line 380 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
LITAC_INLINE 
litaC_i32 litaC_std__string__builder__StringBuilder_size(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 381 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_b->asBuffer.length;

}


#line 385 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
LITAC_INLINE 
litaC_std__string__builder__StringBuilder* litaC_std__string__builder__StringBuilder_clear(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 386 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.length = 0;

#line 387 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_b;

}


#line 390 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
const litaC_char* litaC_std__string__builder__StringBuilder_cStrConst(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 391 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return (const litaC_char*)litaC_std__string__builder__StringBuilder_cStr(litaC_b);

}


#line 394 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_char* litaC_std__string__builder__StringBuilder_cStr(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 395 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_b->asBuffer.length + 1 > litaC_b->asBuffer.capacity) {{
#line 396 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_std__string__builder__BufferGrow(litaC_b, 1))) {{
#line 398 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return NULL;


}
} 


}
} 


#line 402 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.buffer[litaC_b->asBuffer.length] = '\0';

#line 403 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_b->asBuffer.buffer;

}


#line 407 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
LITAC_INLINE 
litaC_std__string__buffer__StringBuffer litaC_std__string__builder__StringBuilder_toBuffer(litaC_std__string__builder__StringBuilder* litaC_b) {
#line 408 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_b->asBuffer;

}


#line 411 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_char litaC_std__string__builder__StringBuilder_get(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_index) {
#line 412 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_index < 0 || litaC_index >= litaC_b->asBuffer.length) {{
#line 413 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return '\0';


}
} 


#line 416 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_b->asBuffer.buffer[litaC_index];

}


#line 419 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_bool litaC_std__string__builder__StringBuilder_reserve(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_length) {
#line 420 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_available = litaC_b->asBuffer.capacity - litaC_b->asBuffer.length;

#line 421 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_available >= litaC_length) {{
#line 422 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_true;


}
} 


#line 425 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_std__string__builder__BufferGrow(litaC_b, litaC_length - litaC_available);

}


#line 428 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_bool litaC_std__string__builder__BufferGrow(litaC_std__string__builder__StringBuilder* litaC_b,litaC_i32 litaC_increment) {
#line 429 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_doubleCurrent = litaC_b->asBuffer.capacity * 2;

#line 430 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_minReq = litaC_b->asBuffer.capacity + litaC_increment;

#line 431 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_i32 litaC_n = litaC_minReq;

#line 433 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(litaC_doubleCurrent > litaC_minReq) {{
#line 434 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_n = litaC_doubleCurrent;

}
} 


#line 436 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_usize litaC_newlength = (sizeof(litaC_char) * (litaC_u64)litaC_n);

#line 437 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_usize litaC_oldlength = (sizeof(litaC_char) * (litaC_u64)litaC_b->asBuffer.capacity);

#line 438 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_char* litaC_newBuffer = (litaC_char*)litaC_std__mem__Allocator_realloc(litaC_b->alloc, (litaC_void*)litaC_b->asBuffer.buffer, litaC_oldlength, litaC_newlength);

#line 439 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
if(!(litaC_newBuffer)) {{
#line 440 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_false;


}
} 


#line 443 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.buffer = litaC_newBuffer;

#line 444 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_b->asBuffer.capacity = litaC_n;

#line 445 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
return litaC_true;

}


#line 450 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"

litaC_void litaC_std__string__builder__testTrim(void) {
#line 451 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder litaC_str = litaC_std__string__builder__StringBuilderInit(256, NULL);

#line 452 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_str)), "  xy z  ");

#line 453 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__assert__assert(litaC_std__string__char_equals(litaC_std__string__builder__StringBuilder_cStr(litaC_std__string__builder__StringBuilder_trim(&((litaC_str)))), "xy z"), __FILE__, __LINE__);

#line 455 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_str = litaC_std__string__builder__StringBuilderInit(256, NULL);

#line 456 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_str)), "\n\txy z\n\t");

#line 457 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__assert__assert(litaC_std__string__char_equals(litaC_std__string__builder__StringBuilder_cStr(litaC_std__string__builder__StringBuilder_trim(&((litaC_str)))), "xy z"), __FILE__, __LINE__);

#line 459 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_str = litaC_std__string__builder__StringBuilderInit(256, NULL);

#line 460 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_str)), "");

#line 461 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__assert__assert(litaC_std__string__char_equals(litaC_std__string__builder__StringBuilder_cStr(litaC_std__string__builder__StringBuilder_trim(&((litaC_str)))), ""), __FILE__, __LINE__);

#line 463 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_str = litaC_std__string__builder__StringBuilderInit(256, NULL);

#line 464 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_str)), "x");

#line 465 "/Users/tony/projects/litac-lang/stdlib/std/string/builder.lita"
litaC_std__assert__assert(litaC_std__string__char_equals(litaC_std__string__builder__StringBuilder_cStr(litaC_std__string__builder__StringBuilder_trim(&((litaC_str)))), "x"), __FILE__, __LINE__);
}


#line 55 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__File_open(litaC_std__io__File* litaC_file,const litaC_char* litaC_filename,litaC_std__io__FileOpenOp litaC_op) {
#line 56 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{
#line 59 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
const char* litaC_opStr = "rb";

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
switch(litaC_op) {
#line 61 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileOpenOp_READ_ONLY_BINARY: {{
#line 62 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_opStr = "rb";

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
break;

}

}

#line 65 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileOpenOp_READ_ONLY: 
#line 66 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_opStr = "r";

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
break;

}

#line 69 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileOpenOp_WRITE_BINARY: {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_opStr = "wb";

#line 71 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
break;

}

}

#line 73 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileOpenOp_WRITE: {{
#line 74 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_opStr = "w";

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
break;

}

}

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileOpenOp_WRITE_APPEND: {{
#line 78 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_opStr = "a";

#line 79 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
break;

}

}

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileOpenOp_WRITE_APPEND_BINARY: {{
#line 82 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_opStr = "ab";

#line 83 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
break;

}

}}

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_file->file = fopen(litaC_filename, litaC_opStr);

#line 88 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_file->_position = 0;

#line 90 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_file->file == NULL) {{
#line 91 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_FileNotFoundError;


}
} 


#line 94 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_Ok;


}
}


#line 98 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_std__io__File_length(litaC_std__io__File* litaC_file) {
#line 99 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 102 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{
#line 103 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(!(litaC_file) || !(litaC_file->file)) {{
#line 104 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return 0;


}
} 


#line 108 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_file->file, 0, SEEK_END)) {{
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return 0;


}
} 


#line 112 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_len = ftell(litaC_file->file);

#line 113 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_len;


}
}


#line 117 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i32 litaC_std__io__File_handle(litaC_std__io__File* litaC_file) {
#line 118 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 121 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{
#line 122 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return fileno(litaC_file->file);


}
}


#line 126 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_std__io__File_position(litaC_std__io__File* litaC_file) {
#line 127 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_file->_position;

}


#line 130 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__File_seek(litaC_std__io__File* litaC_this,litaC_i64 litaC_pos) {
#line 131 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_this->file, litaC_this->_position, SEEK_SET)) {{
#line 132 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_IOError;


}
} 


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_this->_position = litaC_pos;

#line 135 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_Ok;

}


#line 138 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_void litaC_std__io__File_close(litaC_std__io__File* litaC_file) {
#line 139 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 141 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{
#line 142 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_file && litaC_file->file) {{
#line 143 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_file->file);

}
} 


}
}


#line 150 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__File_readBytes(litaC_std__io__File* litaC_this,litaC_char* litaC_buffer,litaC_usize litaC_length) {
#line 152 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 154 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_this->file, litaC_this->_position, SEEK_SET)) {{
#line 155 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_IOError;


}
} 


#line 158 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_usize litaC_bytesRead = fread(litaC_buffer, sizeof(litaC_char), litaC_length, litaC_this->file);

#line 159 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(ferror(litaC_this->file)) {{
#line 160 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_IOError;


}
} 


#line 163 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_bytesRead > 0) {{
#line 164 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_this->_position += (litaC_i64)litaC_bytesRead;

#line 165 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_Ok;


}
} 


#line 168 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_EndOfFile;

}


#line 172 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__File_writeBytes(litaC_std__io__File* litaC_this,const litaC_char* litaC_buffer,litaC_usize litaC_len) {
#line 173 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 175 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{
#line 176 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_this->file, litaC_this->_position, SEEK_SET)) {{
#line 177 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_IOError;


}
} 


#line 180 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_usize litaC_bytesWritten = fwrite((const litaC_void*)litaC_buffer, sizeof(litaC_char), litaC_len, litaC_this->file);

#line 181 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_bytesWritten > 0) {{
#line 182 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_this->_position += (litaC_i64)litaC_bytesWritten;

}
} 


#line 185 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_bytesWritten != litaC_len) {{
#line 186 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_IOError;


}
} 


#line 189 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_Ok;


}
}


#line 195 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_std__io__FileLength(const litaC_char* litaC_fileName) {
#line 196 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
FILE* litaC_fp = fopen(litaC_fileName, "r");

#line 197 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_fp == NULL) {{
#line 198 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return -(1);


}
} 


#line 200 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"


#line 202 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_fp, 0, SEEK_END)) {{
#line 203 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_i64 ___result = -(1);

#line 200 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 206 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_len = ftell(litaC_fp);

#line 207 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_i64 ___result = litaC_len;

#line 200 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}

fclose(litaC_fp);
}


#line 210 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__ReadFileFullyStr(litaC_std__builtins__String litaC_fileName,litaC_std__string__builder__StringBuilder* litaC_buffer) {
#line 213 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 216 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#define litaC_MAX_PATHX (256)

#line 218 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_char litaC_path[256] = {0};

#line 219 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__string__buffer__StringBuffer litaC_strPath = litaC_std__string__buffer__StringBufferInit(litaC_path, litaC_MAX_PATHX, 0);

#line 220 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__string__buffer__StringBuffer_format(&((litaC_strPath)), "%.*s", litaC_fileName.length, litaC_fileName.buffer);

#line 221 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__ReadFileFully(
#line 222 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__string__buffer__StringBuffer_cStr(litaC_strPath), 
#line 223 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_buffer);

#undef litaC_MAX_PATHX
}


#line 227 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__ReadFileFully(const litaC_char* litaC_fileName,litaC_std__string__builder__StringBuilder* litaC_buffer) {
#line 230 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 232 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__assert__assert(litaC_fileName != NULL, __FILE__, __LINE__);

#line 233 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__assert__assert(litaC_buffer != NULL, __FILE__, __LINE__);

#line 235 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
FILE* litaC_fp = fopen(litaC_fileName, "rb");

#line 236 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_fp == NULL) {{
#line 237 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_FileNotFoundError;


}
} 


#line 239 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"


#line 241 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_fp, 0, SEEK_END)) {{
#line 242 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_IOError;

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 245 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_len = ftell(litaC_fp);

#line 246 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_len < 0L) {{
#line 247 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_IOError;

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 250 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_len > litaC_std__limits__MAX_I32) {{
#line 251 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_BufferOverflow;

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 254 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_fp, 0, SEEK_SET)) {{
#line 255 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_IOError;

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 258 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(!(litaC_std__string__builder__StringBuilder_reserve(litaC_buffer, (litaC_i32)litaC_len + 1))) {{
#line 259 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_OutOfMemory;

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 262 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_usize litaC_newLen = fread(&(litaC_buffer->asBuffer.buffer[litaC_buffer->asBuffer.length]), sizeof(litaC_char), litaC_len, litaC_fp);

#line 263 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(ferror(litaC_fp)) {{
#line 264 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_IOError;

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 267 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_newLen > 0) {{
#line 268 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_buffer->asBuffer.buffer[litaC_buffer->asBuffer.length + litaC_newLen] = '\0';

#line 269 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_buffer->asBuffer.length += ((litaC_i32)litaC_newLen);

}
} 


#line 272 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_Ok;

#line 239 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}

fclose(litaC_fp);
}


#line 275 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__ReadFile(const litaC_char* litaC_fileName,litaC_char** litaC_data,litaC_usize* litaC_length,const litaC_std__mem__Allocator* litaC_alloc) {
#line 278 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 279 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 281 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{
#line 282 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
FILE* litaC_fp = fopen(litaC_fileName, "r");

#line 283 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_fp == NULL) {{
#line 284 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
*(litaC_length) = -(1);

#line 285 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_FileNotFoundError;


}
} 


#line 287 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"


#line 289 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_fp, 0, SEEK_END)) {{
#line 290 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
*(litaC_length) = -(1);

#line 291 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_IOError;

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 294 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_i64 litaC_len = ftell(litaC_fp);

#line 295 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_len < 0L) {{
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
*(litaC_length) = -(1);

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_IOError;

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 300 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(fseek(litaC_fp, 0, SEEK_SET)) {{
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
*(litaC_length) = -(1);

#line 302 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_IOError;

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 305 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_char* litaC_buf = (litaC_char*)litaC_std__mem__Allocator_alloc(litaC_alloc, sizeof(litaC_char) * ((litaC_u64)litaC_len + 1UL));

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
(*(litaC_data)) = litaC_buf;

#line 309 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_usize litaC_newLen = fread(litaC_buf, sizeof(litaC_char), litaC_len, litaC_fp);

#line 310 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(ferror(litaC_fp)) {{
#line 311 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
*(litaC_length) = -(1);

#line 312 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_IOError;

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}


}
} 


#line 315 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_buf[litaC_newLen] = '\0';

#line 316 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
*(litaC_length) = litaC_newLen;

#line 318 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_Ok;

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}

fclose(litaC_fp);

}
}


#line 324 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__FileStatus litaC_std__io__WriteFile(const litaC_char* litaC_fileName,const litaC_char* litaC_buffer,litaC_usize litaC_len) {
#line 325 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"

#line 327 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{
#line 328 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
FILE* litaC_fp = fopen(litaC_fileName, "w");

#line 329 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
if(litaC_fp == NULL) {{
#line 330 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
return litaC_std__io__FileStatus_FileNotFoundError;


}
} 


#line 332 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"


#line 334 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
litaC_std__io__File litaC_file =  {.file = litaC_fp};

#line 335 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__File_writeBytes(&((litaC_file)), litaC_buffer, litaC_len);

#line 332 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
fclose(litaC_fp);
return ___result;
}

fclose(litaC_fp);

}
}


#line 13 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__CString(litaC_char* litaC_str,litaC_i32 litaC_len) {
#line 14 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_str == NULL) {{
#line 15 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__string__buffer__StringBuffer) {
#line 16 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = NULL,

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = 0,

#line 18 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.capacity = 0};


}
} 


#line 22 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_len < 0) {{
#line 23 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_len = litaC_std__string__char_length(litaC_str);

}
} 


#line 26 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__string__buffer__StringBuffer) {
#line 27 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = litaC_str,

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = litaC_len,

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.capacity = litaC_len};

}


#line 33 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__StringBufferInit(litaC_char* litaC_str,litaC_i32 litaC_capacity,litaC_i32 litaC_len) {
#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_str == NULL) {{
#line 35 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__string__buffer__StringBuffer) {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = NULL,

#line 37 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = 0,

#line 38 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.capacity = 0};


}
} 


#line 42 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_len < 0) {{
#line 43 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_len = litaC_std__string__char_length(litaC_str);

}
} 


#line 46 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_len > litaC_capacity) {{
#line 47 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_len = litaC_capacity;

}
} 


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__string__buffer__StringBuffer) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = litaC_str,

#line 52 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = litaC_len,

#line 53 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.capacity = litaC_capacity};

}


#line 58 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_u32 litaC_std__string__buffer__StringBuffer_hash(litaC_std__string__buffer__StringBuffer* litaC_s) {
#line 59 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_std__string__StringHashLen(litaC_s->buffer, litaC_s->length);

}


#line 62 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_bool litaC_std__string__buffer__StringBuffer_equals(litaC_std__string__buffer__StringBuffer* litaC_s,litaC_std__string__buffer__StringBuffer* litaC_other) {
#line 63 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s == NULL || litaC_other == NULL) {{
#line 64 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_false;


}
} 


#line 66 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s->length != litaC_other->length) {{
#line 67 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_false;


}
} 


#line 70 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return strncmp(litaC_s->buffer, litaC_other->buffer, litaC_s->length) == 0;

}


#line 73 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_format(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_format,...) {
#line 75 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
va_list litaC_args = {0};

#line 76 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
va_start(litaC_args, litaC_format);

#line 80 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_len = vsnprintf(litaC_s->buffer, litaC_s->capacity, litaC_format, litaC_args);

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
va_end(litaC_args);

#line 83 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_len < 0) {{
#line 84 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_len;


}
} 


#line 87 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length = MIN(litaC_len, litaC_s->capacity);

#line 88 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_len;

}


#line 91 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_formatv(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_format,va_list litaC_args) {
#line 94 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_len = vsnprintf(litaC_s->buffer, litaC_s->capacity, litaC_format, litaC_args);

#line 96 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_len < 0) {{
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_len;


}
} 


#line 100 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length = MIN(litaC_len, litaC_s->capacity);

#line 101 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_len;

}


#line 104 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_append(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_format,...) {
#line 106 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
va_list litaC_args1 = {0};

#line 107 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
va_start(litaC_args1, litaC_format);

#line 111 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_len = vsnprintf(litaC_s->buffer + litaC_s->length, litaC_s->capacity - litaC_s->length, litaC_format, litaC_args1);

#line 112 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
va_end(litaC_args1);

#line 114 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_len < 0) {{
#line 115 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_len;


}
} 


#line 118 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length += litaC_len;

#line 119 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s->length > litaC_s->capacity) {{
#line 120 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length = litaC_s->capacity;

}
} 


#line 122 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_len;

}


#line 125 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_appendv(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_format,va_list litaC_args) {
#line 128 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_len = vsnprintf(litaC_s->buffer + litaC_s->length, litaC_s->capacity - litaC_s->length, litaC_format, litaC_args);

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_len < 0) {{
#line 131 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_len;


}
} 


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length += litaC_len;

#line 136 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s->length > litaC_s->capacity) {{
#line 137 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length = litaC_s->capacity;

}
} 


#line 139 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_len;

}


#line 142 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_appendStr(litaC_std__string__buffer__StringBuffer* litaC_b,const litaC_char* litaC_str) {
#line 143 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_str == NULL) {{
#line 144 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return;


}
} 


#line 146 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_len = litaC_std__string__char_length(litaC_str);

#line 147 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer_appendStrn(litaC_b, litaC_str, litaC_len);
}


#line 151 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_appendStrn(litaC_std__string__buffer__StringBuffer* litaC_b,const litaC_char* litaC_str,litaC_i32 litaC_len) {
#line 152 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_str == NULL || litaC_len < 1) {{
#line 153 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return;


}
} 


#line 156 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_b->length + litaC_len > litaC_b->capacity) {{
#line 157 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_len = litaC_b->capacity - litaC_b->length;

}
} 


#line 160 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
memcpy((litaC_void*)(&(litaC_b->buffer[litaC_b->length])), 
#line 161 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
(const litaC_void*)litaC_str, 
#line 162 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_len * sizeof(litaC_char));

#line 163 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_b->length += litaC_len;
}


#line 167 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_setStrn(litaC_std__string__buffer__StringBuffer* litaC_s,const litaC_char* litaC_str,litaC_i32 litaC_len) {
#line 168 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_str == NULL || litaC_len < 1) {{
#line 169 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return;


}
} 


#line 172 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_len > litaC_s->capacity) {{
#line 173 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_len = litaC_s->capacity;

}
} 


#line 176 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
memcpy((litaC_void*)(&(litaC_s->buffer[0])), 
#line 177 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
(const litaC_void*)litaC_str, 
#line 178 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_len * sizeof(litaC_char));

#line 179 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length = litaC_len;
}


#line 182 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_appendChar(litaC_std__string__buffer__StringBuffer* litaC_s,litaC_char litaC_c) {
#line 183 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s->length >= litaC_s->capacity) {{
#line 184 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return;


}
} 


#line 187 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->buffer[litaC_s->length] = litaC_c;

#line 188 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length += 1;
}


#line 191 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__builtins__String litaC_std__string__buffer__StringBuffer_substring(litaC_std__string__buffer__StringBuffer litaC_s,litaC_i32 litaC_start,litaC_i32 litaC_end) {
#line 192 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_start < 0) {{
#line 193 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_start = 0;

}
} 


#line 195 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_end > litaC_s.length || litaC_end < 0) {{
#line 196 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_end = litaC_s.length;

}
} 


#line 198 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_start > litaC_end) {{
#line 199 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__builtins__String) {0};


}
} 


#line 202 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_len = litaC_end - litaC_start;

#line 203 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__builtins__String) {
#line 204 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = litaC_s.buffer + litaC_start,

#line 205 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = litaC_len};

}


#line 209 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_memset(litaC_std__string__buffer__StringBuffer litaC_s,litaC_i32 litaC_value) {
#line 210 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s.capacity < 1) {return;

} 


#line 212 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
memset((litaC_void*)litaC_s.buffer, litaC_value, litaC_s.capacity * sizeof(litaC_char));
}


#line 216 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_toLower(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 217 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_s.length;litaC_i += 1) {{
#line 218 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s.buffer[litaC_i] = (litaC_char)tolower(litaC_s.buffer[litaC_i]);

}}
}


#line 222 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_toUpper(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 223 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_s.length;litaC_i += 1) {{
#line 224 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s.buffer[litaC_i] = (litaC_char)toupper(litaC_s.buffer[litaC_i]);

}}
}


#line 228 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__StringBuffer_copy(litaC_std__string__buffer__StringBuffer litaC_s,const litaC_std__mem__Allocator* litaC_allocator) {
#line 229 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s.length < 1) {{
#line 230 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__string__buffer__StringBuffer) {
#line 231 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = NULL,

#line 232 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = 0,

#line 233 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.capacity = 0};


}
} 


#line 237 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_char* litaC_copiedStr = (litaC_char*)litaC_std__mem__Allocator_alloc(litaC_allocator, (litaC_s.length + 1) * sizeof(litaC_char));

#line 238 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
memcpy(litaC_copiedStr, litaC_s.buffer, litaC_s.length);

#line 240 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_copiedStr[litaC_s.length] = '\0';

#line 242 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__string__buffer__StringBuffer) {
#line 243 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = litaC_copiedStr,

#line 244 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = litaC_s.length,

#line 245 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.capacity = litaC_s.length};

}


#line 249 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_adjust(litaC_std__string__buffer__StringBuffer* litaC_s) {
#line 250 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length = strnlen(litaC_s->buffer, litaC_s->capacity);
}


#line 253 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_void litaC_std__string__buffer__StringBuffer_clear(litaC_std__string__buffer__StringBuffer* litaC_s) {
#line 254 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer_memset(*((litaC_s)), 0);

#line 255 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s->length = 0;
}


#line 258 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_bool litaC_std__string__buffer__StringBuffer_empty(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 259 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_s.length < 1;

}


#line 262 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_size(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 263 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_s.length;

}


#line 266 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_i32 litaC_std__string__buffer__StringBuffer_remaining(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 267 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_s.capacity - litaC_s.length;

}


#line 270 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_char* litaC_std__string__buffer__StringBuffer_cStr(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 271 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s.length < litaC_s.capacity && litaC_s.length > 0) {{
#line 272 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s.buffer[litaC_s.length] = '\0';

}
} 


#line 274 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return litaC_s.buffer;

}


#line 277 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
const litaC_char* litaC_std__string__buffer__StringBuffer_cStrConst(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 278 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s.length < litaC_s.capacity && litaC_s.length > 0) {{
#line 279 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_s.buffer[litaC_s.length] = '\0';

}
} 


#line 281 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (const litaC_char*)litaC_s.buffer;

}


#line 284 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
litaC_std__string__buffer__StringBuffer litaC_std__string__buffer__StringBuffer_slice(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 285 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
if(litaC_s.length >= litaC_s.capacity || litaC_s.length < 0) {{
#line 286 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__string__buffer__StringBuffer) {0};


}
} 


#line 289 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__string__buffer__StringBuffer) {
#line 290 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = &(litaC_s.buffer[litaC_s.length]),

#line 291 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = 0,

#line 292 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.capacity = litaC_std__string__buffer__StringBuffer_remaining(litaC_s)};

}


#line 297 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
LITAC_INLINE 
litaC_std__builtins__String litaC_std__string__buffer__StringBuffer_toString(litaC_std__string__buffer__StringBuffer litaC_s) {
#line 298 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
return (litaC_std__builtins__String) {
#line 299 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.buffer = litaC_s.buffer,

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/string/buffer.lita"
.length = litaC_s.length};

}


#line 23 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"

litaC_void litaC_std__limits__testLimits(void) {
#line 24 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_I8 == 0x7F, __FILE__, __LINE__);

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_I8 == 127, __FILE__, __LINE__);

#line 27 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_I16 == 0x7FFF, __FILE__, __LINE__);

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_I16 == 32767, __FILE__, __LINE__);

#line 30 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_I32 == 0x7FFFFFFF, __FILE__, __LINE__);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_I32 == 2147483647, __FILE__, __LINE__);

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_I64 == 0x7FFFFFFFFFFFFFFF, __FILE__, __LINE__);

#line 34 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_I64 == 9223372036854775807L, __FILE__, __LINE__);

#line 37 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MIN_I8 == -(0x80), __FILE__, __LINE__);

#line 38 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MIN_I8 == -(128U), __FILE__, __LINE__);

#line 40 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MIN_I16 == -(0x8000), __FILE__, __LINE__);

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MIN_I16 == -(32768U), __FILE__, __LINE__);

#line 43 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MIN_I32 == -(0x80000000), __FILE__, __LINE__);

#line 44 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MIN_I32 == -(2147483648U), __FILE__, __LINE__);

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MIN_I64 == -(0x8000000000000000), __FILE__, __LINE__);

#line 47 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MIN_I64 == -(9223372036854775808UL), __FILE__, __LINE__);

#line 49 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_U8 == 255, __FILE__, __LINE__);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_U8 == 0xFF, __FILE__, __LINE__);

#line 52 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_U16 == 65535, __FILE__, __LINE__);

#line 53 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_U16 == 0xFFFF, __FILE__, __LINE__);

#line 55 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_U32 == 4294967295U, __FILE__, __LINE__);

#line 56 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_U32 == 0xFFFFFFFF, __FILE__, __LINE__);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_U64 == 18446744073709551615UL, __FILE__, __LINE__);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/limits.lita"
litaC_std__assert__assert(litaC_std__limits__MAX_U64 == 0xFFFFFFFFFFFFFFFF, __FILE__, __LINE__);
}


#line 28 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__char_isWhitespace(litaC_char litaC_this) {
#line 29 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
return litaC_std__ascii__WHITESPACE[litaC_this & 0xFF];

}


#line 32 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__char_isNumeric(litaC_char litaC_this) {
#line 33 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
return litaC_this > 47 && litaC_this < 58;

}


#line 36 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__char_isAlphabetic(litaC_char litaC_this) {
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
return (litaC_this > 64 && litaC_this < 91) || 
#line 38 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
(litaC_this > 96 && litaC_this < 123);

}


#line 41 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_bool litaC_std__ascii__char_isAlphanumeric(litaC_char litaC_this) {
#line 42 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
return litaC_std__ascii__char_isNumeric(litaC_this) || litaC_std__ascii__char_isAlphabetic(litaC_this);

}


#line 45 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_i32 litaC_std__ascii__char_asHex(litaC_char litaC_this) {
#line 46 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
return litaC_std__ascii__HEX[litaC_this];

}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"

litaC_void litaC_std__ascii__testWhitespace(void) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_std__assert__assert(litaC_std__ascii__char_isWhitespace(' ') == litaC_true, __FILE__, __LINE__);

#line 52 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_std__assert__assert(litaC_std__ascii__char_isWhitespace('\t') == litaC_true, __FILE__, __LINE__);

#line 53 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_std__assert__assert(litaC_std__ascii__char_isWhitespace('\n') == litaC_true, __FILE__, __LINE__);

#line 54 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_std__assert__assert(litaC_std__ascii__char_isWhitespace('\r') == litaC_true, __FILE__, __LINE__);

#line 57 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_char litaC_c = (litaC_char)(-(1));

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_std__assert__assert(litaC_std__ascii__char_isWhitespace(litaC_c) == litaC_false, __FILE__, __LINE__);

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_char litaC_m = (litaC_char)(300);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_std__assert__assert(litaC_std__ascii__char_isWhitespace(litaC_m) == litaC_false, __FILE__, __LINE__);

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_std__assert__assert(litaC_std__ascii__char_isWhitespace('x') == litaC_false, __FILE__, __LINE__);

#line 64 "/Users/tony/projects/litac-lang/stdlib/std/ascii/ascii.lita"
litaC_std__assert__assert(litaC_std__ascii__char_isWhitespace(' ') == litaC_true, __FILE__, __LINE__);
}


#line 183 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__ArchAsStr(Lita_ArchType litaC_type) {
#line 184 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
switch(litaC_type) {
#line 185 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_ArchType_UNKNOWN: {return "UNKNOWN";


}

#line 186 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_ArchType_ARM32: {return "ARM32";


}

#line 187 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_ArchType_ARM64: {return "ARM64";


}

#line 188 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_ArchType_X86: {return "X86";


}

#line 189 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_ArchType_X86_64: {return "X86_64";


}

#line 190 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_ArchType_SPARC: {return "SPARC";


}
default: 
#line 191 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{return NULL;


}}
}


#line 195 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
Lita_ArchType litaC_std__system__ArchFromStr(const litaC_char* litaC_str,litaC_usize litaC_len) {
#line 196 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_str)) {{
#line 197 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_ArchType_UNKNOWN;


}
} 


#line 200 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "ARM32", litaC_len) == 0) {{
#line 201 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_ArchType_ARM32;


}
} 


#line 204 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "ARM64", litaC_len) == 0) {{
#line 205 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_ArchType_ARM64;


}
} 


#line 208 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "X86", litaC_len) == 0) {{
#line 209 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_ArchType_X86;


}
} 


#line 212 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "X86_64", litaC_len) == 0) {{
#line 213 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_ArchType_X86_64;


}
} 


#line 216 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "SPARC", litaC_len) == 0) {{
#line 217 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_ArchType_SPARC;


}
} 


#line 220 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_ArchType_UNKNOWN;

}


#line 260 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__OSAsStr(Lita_OSType litaC_type) {
#line 261 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
switch(litaC_type) {
#line 262 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_OSType_WINDOWS: {return "WINDOWS";


}

#line 263 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_OSType_ANDROID: {return "ANDROID";


}

#line 264 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_OSType_LINUX: {return "LINUX";


}

#line 265 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_OSType_BSD: {return "BSD";


}

#line 266 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_OSType_IOS: {return "IOS";


}

#line 267 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_OSType_MAC: {return "MAC";


}

#line 268 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
case Lita_OSType_OTHER: {return "OTHER";


}
default: 
#line 269 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{return NULL;


}}
}


#line 273 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
Lita_OSType litaC_std__system__OSFromStr(const litaC_char* litaC_str,litaC_usize litaC_len) {
#line 274 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_str)) {{
#line 275 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_OTHER;


}
} 


#line 278 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "WINDOWS", litaC_len) == 0) {{
#line 279 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_WINDOWS;


}
} 


#line 282 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "ANDROID", litaC_len) == 0) {{
#line 283 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_ANDROID;


}
} 


#line 286 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "LINUX", litaC_len) == 0) {{
#line 287 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_LINUX;


}
} 


#line 290 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "BSD", litaC_len) == 0) {{
#line 291 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_BSD;


}
} 


#line 294 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "IOS", litaC_len) == 0) {{
#line 295 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_IOS;


}
} 


#line 298 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "MAC", litaC_len) == 0) {{
#line 299 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_MAC;


}
} 


#line 302 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__system__strcicmp(litaC_str, "MACOS", litaC_len) == 0) {{
#line 303 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_MAC;


}
} 


#line 306 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return Lita_OSType_OTHER;

}


#line 358 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"


litaC_bool litaC_std__system__SystemInit(void) {
#line 359 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___SystemInit();

}


#line 362 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
Lita_OSType litaC_std__system__GetOS(void) {
#line 363 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaOS;

}


#line 366 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
Lita_ArchType litaC_std__system__GetArch(void) {
#line 367 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaArch;

}


#line 370 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__GetEnv(const litaC_char* litaC_varName) {
#line 371 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return getenv(litaC_varName);

}


#line 374 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_void litaC_std__system__SetEnv(const litaC_char* litaC_varName,const litaC_char* litaC_value) {
#line 375 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__system__system_posix___SetEnv(litaC_varName, litaC_value);
}


#line 380 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__CurrentWorkingPath(void) {
#line 381 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___CurrentWorkingPath();

}


#line 384 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileTruncate(const litaC_char* litaC_filename,litaC_usize litaC_newLength) {
#line 385 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___FileTruncate(litaC_filename, litaC_newLength);

}


#line 388 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileTruncateFile(FILE* litaC_file,litaC_usize litaC_newLength) {
#line 389 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___FileTruncateFile(litaC_file, litaC_newLength);

}


#line 392 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileDelete(const litaC_char* litaC_filename) {
#line 393 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___FileDelete(litaC_filename);

}


#line 396 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileExists(const litaC_char* litaC_filename) {
#line 397 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
FileStat litaC_s = {0};

#line 398 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return stat(litaC_filename, &(litaC_s)) == 0;

}


#line 401 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileMove(const litaC_char* litaC_srcFilename,const litaC_char* litaC_destFilename) {
#line 402 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return rename(litaC_srcFilename, litaC_destFilename) == 0;

}


#line 405 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__FileIsDir(const litaC_char* litaC_filename) {
#line 406 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___FileIsDir(litaC_filename);

}


#line 409 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__Mkdir(const litaC_char* litaC_dir) {
#line 410 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___Mkdir(litaC_dir);

}


#line 413 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__Mkdirs(const litaC_char* litaC_dir) {
#line 414 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char litaC_temp[
#line 414 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
PATH_MAX] = {0};

#line 415 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer litaC_path = litaC_std__string__buffer__StringBufferInit(litaC_temp, PATH_MAX, 0);

#line 417 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__builtins__String litaC_workingPath = litaC_std__string__StringInit(litaC_dir, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 418 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_index = 0;

#line 421 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_workingPath.length > 2) {{
#line 422 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_workingPath.buffer[2] == ':') {{
#line 423 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_path)), "%.*s", 2, litaC_workingPath.buffer);

#line 424 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_index = 3;

}
} 


}
} 


#line 428 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
while(litaC_index >= 0) {{
#line 429 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_index = litaC_std__string__String_indexOfAt(litaC_workingPath, (litaC_std__builtins__String) { .buffer = "/", .length = 1 }, litaC_index);

#line 430 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_index > -(1)) {{
#line 431 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_format(&((litaC_path)), "%.*s", litaC_index, litaC_workingPath.buffer);

#line 432 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__system__system_posix___Mkdir(litaC_std__string__buffer__StringBuffer_cStr(litaC_path));

#line 433 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_index += 1;

}
} else {
#line 435 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 436 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
break;

}} 


}}

#line 440 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___Mkdir(litaC_dir);

}


#line 443 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__FilePath(const litaC_char* litaC_filename,litaC_char* litaC_out) {
#line 444 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_index = 0;

#line 446 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_filename)) {{
#line 447 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
goto end;


}
} 


#line 450 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_len = litaC_std__string__char_length(litaC_filename);

#line 451 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_len > 0) {{
#line 452 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
for(litaC_index = litaC_len - 1;
litaC_index >= 0;litaC_index -= 1) {{
#line 453 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char litaC_c = litaC_filename[litaC_index];

#line 454 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_c == '/' || litaC_c == '\\') {{
#line 455 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
memcpy(litaC_out, litaC_filename, litaC_index);

#line 456 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
goto end;


}
} 


}}

#line 459 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_index = 0;

}
} 


#line 462 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
end:;


#line 463 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_out[litaC_index] = '\0';

#line 464 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_out;

}


#line 467 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__FileParent(const litaC_char* litaC_filename,litaC_char* litaC_out,litaC_i32* litaC_length) {
#line 468 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_index = 0;

#line 470 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_filename)) {{
#line 471 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
goto end;


}
} 


#line 474 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_len = litaC_std__string__char_length(litaC_filename);

#line 475 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_len > 0) {{
#line 476 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_index = litaC_len - 1;

#line 477 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_filename[litaC_len - 1] == '/') {{
#line 478 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_index -= 1;

}
} 


#line 480 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
for(;litaC_index >= 0;litaC_index -= 1) {{
#line 481 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char litaC_c = litaC_filename[litaC_index];

#line 482 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_c == '/' || litaC_c == '\\') {{
#line 483 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
memcpy(litaC_out, litaC_filename, litaC_index);

#line 484 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
goto end;


}
} 


}}

#line 487 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_index = 0;

}
} 


#line 490 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
end:;


#line 491 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_length) {{
#line 492 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
(*(litaC_length)) = litaC_index;

}
} 


#line 494 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_out[litaC_index] = '\0';

#line 495 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_out;

}


#line 498 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__PathNormalize(const litaC_char* litaC_filename,litaC_char* litaC_out) {
#line 499 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_i = 0;

#line 501 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_filename)) {{
#line 502 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
goto end;


}
} 


#line 505 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
for(;litaC_filename[litaC_i];litaC_i += 1) {{
#line 506 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char litaC_c = litaC_filename[litaC_i];

#line 507 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_c == '\\') {{
#line 508 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_c = '/';

}
} 


#line 510 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_out[litaC_i] = litaC_c;

}}

#line 514 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
end:;


#line 515 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_out[litaC_i] = '\0';

#line 516 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_out;

}


#line 519 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__PathNative(const litaC_char* litaC_filename,litaC_char* litaC_out) {
#line 520 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_i = 0;

#line 522 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_filename)) {{
#line 523 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
goto end;


}
} 


#line 526 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
for(;litaC_filename[litaC_i];litaC_i += 1) {{
#line 527 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char litaC_c = litaC_filename[litaC_i];

#line 528 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

#if defined(_WIN32) || defined(_WIN64)

#line 529 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_c == '/') {{
#line 530 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_c = '\\';

}
} 


#else

#line 533 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_c == '\\') {{
#line 534 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_c = '/';

}
} 


#endif


#line 537 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_out[litaC_i] = litaC_c;

}}

#line 541 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
end:;


#line 542 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_out[litaC_i] = '\0';

#line 543 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_out;

}


#line 546 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_std__system__strcicmp(const litaC_char* litaC_a,const litaC_char* litaC_b,litaC_usize litaC_size) {
#line 547 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_a == litaC_b) {return 0;

} 


#line 548 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_a) && litaC_b) {return -(1);

} 


#line 549 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_a && !(litaC_b)) {return 1;

} 


#line 551 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
for(litaC_usize litaC_i = 0;litaC_i < litaC_size;litaC_i += 1) {{
#line 552 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char litaC_ac = *(litaC_a);

#line 553 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char litaC_bc = *(litaC_b);

#line 555 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_ac) && litaC_bc) {return -(1);

} 


#line 556 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_ac && !(litaC_bc)) {return 1;

} 


#line 557 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_ac) && !(litaC_bc)) {return 0;

} 


#line 559 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_d = tolower(litaC_ac) - tolower(litaC_bc);

#line 560 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_d != 0) {{
#line 561 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_d;


}
} 


#line 563 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_a += 1;

#line 564 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_b += 1;

}}

#line 566 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return 0;

}


#line 573 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__GetAbsolutePath(const litaC_char* litaC_pwd,const litaC_char* litaC_path,litaC_char* litaC_output) {
#line 574 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer litaC_absStr = litaC_std__string__buffer__StringBufferInit(litaC_output, PATH_MAX, 0);

#line 575 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__builtins__String litaC_pathStr = litaC_std__string__StringInit(litaC_path, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 577 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__string__String_startsWith(litaC_pathStr, (litaC_std__builtins__String) { .buffer = ".", .length = 1 }, 0)) {{
#line 578 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_absStr)), "%s/", litaC_pwd);

}
} 


#line 581 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
while(*(litaC_path)) {{
#line 582 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_path[0] == '\\') {{
#line 583 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_path[1] == '\\') {{
#line 584 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_path += 1;

}
} 


#line 586 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_absStr)), '/');

}
} else {
#line 588 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_path[0] == '.') {{
#line 590 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_path[1] == '.') {{
#line 591 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_len = litaC_absStr.length;

#line 592 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_index = litaC_len - 1;

#line 593 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_upCount = 0;

#line 594 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
for(;litaC_index >= 0;litaC_index -= 1) {{
#line 595 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_absStr.buffer[litaC_index] == '/' || 
#line 596 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_absStr.buffer[litaC_index] == '\\') {{
#line 597 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_upCount += 1;

#line 598 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_upCount > 1) {{
#line 599 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
break;

}
} 


}
} 


}}

#line 603 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_index < 0) {{
#line 604 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_index = 0;

}
} 


#line 607 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_absStr.length = litaC_index;

#line 608 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_absStr.buffer[litaC_index] == '/' || 
#line 609 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_absStr.buffer[litaC_index] == '\\') {{
#line 610 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_absStr.length = litaC_index + 1;

}
} 


}
} else {
#line 613 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_path[1] == '/' || litaC_path[1] == '\\') {{
#line 615 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_path += 1;

}
} else {
#line 617 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 618 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_absStr)), '.');

}} 
} 


}
} else {
#line 621 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 622 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_absStr)), *(litaC_path));

}} 
} 


#line 624 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_path += 1;

}}

#line 627 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__string__buffer__StringBuffer_cStr(litaC_absStr);

}


#line 630 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_bool litaC_std__system__PathEquals(const litaC_char* litaC_a,const litaC_char* litaC_b) {
#line 632 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__strcicmp(litaC_a, litaC_b, PATH_MAX) == 0;

}


#line 658 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__FilePathToUri(const litaC_char* litaC_path,litaC_char* litaC_output) {
#line 659 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer litaC_outputStr = litaC_std__string__buffer__StringBufferInit(litaC_output, PATH_MAX, 0);

#line 660 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

#line 662 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 663 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_outputStr)), "%s", "file://");

}

#line 666 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
while(*(litaC_path)) {{
#line 667 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_escaped = litaC_std__system__uriEscapeChars[(litaC_i32)(*(litaC_path))];

#line 668 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_escaped) {{
#line 669 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_outputStr)), "%s", litaC_escaped);

}
} else {
#line 671 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 672 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), *(litaC_path));

}} 


#line 675 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_path += 1;

}}

#line 678 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__string__buffer__StringBuffer_cStr(litaC_outputStr);

}


#line 681 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char* litaC_std__system__UriToFilePath(const litaC_char* litaC_uri,litaC_char* litaC_output) {
#line 682 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__string__StringEqualLen(litaC_uri, "file:///", 8)) {{
#line 683 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

#line 685 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 686 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_uri = &(litaC_uri[7]);

}

}
} 


#line 690 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer litaC_outputStr = litaC_std__string__buffer__StringBufferInit(litaC_output, PATH_MAX, 0);

#line 691 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
while(*(litaC_uri)) {{
#line 692 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(*(litaC_uri) == '%') {{
#line 693 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[1] == '2') {{
#line 694 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '0') {{
#line 695 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), ' ');

}
} else {
#line 697 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '1') {{
#line 698 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '!');

}
} else {
#line 700 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '3') {{
#line 701 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '#');

}
} else {
#line 703 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '4') {{
#line 704 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '$');

}
} else {
#line 706 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '5') {{
#line 707 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '%');

}
} else {
#line 709 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '6') {{
#line 710 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '&');

}
} else {
#line 712 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '7') {{
#line 713 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '\'');

}
} else {
#line 715 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '8') {{
#line 716 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '(');

}
} else {
#line 718 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '9') {{
#line 719 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), ')');

}
} else {
#line 721 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'A') {{
#line 722 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '*');

}
} else {
#line 724 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'B') {{
#line 725 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '+');

}
} else {
#line 727 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'C') {{
#line 728 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), ',');

}
} else {
#line 730 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'F') {{
#line 731 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '/');

}
} else {
#line 733 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 735 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_outputStr)), "%s", "%2");

#line 736 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_uri += 2;

#line 737 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
continue;

}} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 


}
} else {
#line 740 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[1] == '3') {{
#line 741 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'A') {{
#line 742 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), ':');

}
} else {
#line 744 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'B') {{
#line 745 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), ';');

}
} else {
#line 747 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'D') {{
#line 748 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '=');

}
} else {
#line 750 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'F') {{
#line 751 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '?');

}
} else {
#line 753 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 755 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_outputStr)), "%s", "%3");

#line 756 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_uri += 2;

#line 757 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
continue;

}} 
} 
} 
} 


}
} else {
#line 760 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[1] == '4') {{
#line 761 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == '0') {{
#line 762 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '@');

}
} else {
#line 764 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 766 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_outputStr)), "%s", "%4");

#line 767 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_uri += 2;

#line 768 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
continue;

}} 


}
} else {
#line 771 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[1] == '5') {{
#line 772 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'B') {{
#line 773 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), '[');

}
} else {
#line 775 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_uri[2] == 'D') {{
#line 776 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), ']');

}
} else {
#line 778 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 780 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_outputStr)), "%s", "%5");

#line 781 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_uri += 2;

#line 782 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
continue;

}} 
} 


}
} else {
#line 785 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{
#line 786 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), *(litaC_uri));

#line 787 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_uri += 1;

#line 788 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
continue;

}} 
} 
} 
} 


#line 791 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_uri += 3;

#line 792 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
continue;

}
} 


#line 795 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_outputStr)), *(litaC_uri));

#line 796 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_uri += 1;

}}

#line 799 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__string__buffer__StringBuffer_cStr(litaC_outputStr);

}


#line 803 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

litaC_f64 litaC_std__system__SystemTimeMSec(void) {
#line 804 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return litaC_std__system__system_posix___SystemTimeMSec();

}


#line 823 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
const litaC_char* litaC_std__system__CurrentDateTime(void) {
#line 824 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
time_t litaC_rawtime = {0};

#line 825 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
tm* litaC_timeinfo = NULL;

#line 827 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
time(&(litaC_rawtime));

#line 828 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_timeinfo = localtime(&(litaC_rawtime));

#line 829 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return asctime(litaC_timeinfo);

}


#line 834 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__system__Process litaC_std__system__SystemExec(const litaC_char* litaC_command) {
#line 835 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
FILE* litaC_pipe = popen(litaC_command, litaC_std__system__OPEN_MODE);

#line 836 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return (litaC_std__system__Process) {
#line 837 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
.pipe = litaC_pipe};

}


#line 846 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i64 litaC_std__system__Process_readOutput(litaC_std__system__Process* litaC_this,litaC_char* litaC_buffer,litaC_usize litaC_length) {
#line 847 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_this->pipe)) {{
#line 848 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return -(1);


}
} 


#line 851 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return (litaC_i64)fread(litaC_buffer, sizeof(litaC_char), litaC_length, litaC_this->pipe);

}


#line 854 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i64 litaC_std__system__Process_writeInput(litaC_std__system__Process* litaC_this,litaC_char* litaC_buffer,litaC_usize litaC_length) {
#line 855 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(!(litaC_this->pipe)) {{
#line 856 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return -(1);


}
} 


#line 859 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return (litaC_i64)fwrite(litaC_buffer, sizeof(litaC_char), litaC_length, litaC_this->pipe);

}


#line 862 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_std__system__Process_close(litaC_std__system__Process* litaC_this) {
#line 863 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_this->pipe) {{
#line 864 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return pclose(litaC_this->pipe);


}
} 


#line 866 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
return 0;

}


#line 874 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

litaC_i32 litaC_std__system__LoadEnv(const litaC_char* litaC_envFile,const litaC_std__mem__Allocator* litaC_allocator) {
#line 877 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

#line 878 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__builder__StringBuilder litaC_sb = litaC_std__string__builder__StringBuilderInit(1024, litaC_allocator);

#line 879 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"


#line 881 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__io__FileStatus litaC_status = litaC_std__io__ReadFileFully(
#line 882 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_envFile, 
#line 883 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
&(litaC_sb));

#line 885 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_status != litaC_std__io__FileStatus_Ok) {{
#line 886 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{litaC_i32 ___result = -(1);

#line 879 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__builder__StringBuilder_free(&((litaC_sb)));
return ___result;
}


}
} 


#line 889 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_i32 litaC_result = 0;

#line 890 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__SplitIter litaC_lines = litaC_std__string__String_split(litaC_std__string__buffer__StringBuffer_toString(litaC_sb.asBuffer), (litaC_std__builtins__String) { .buffer = "\n", .length = 1 });

#line 891 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
while(litaC_std__string__SplitIter_hasNext(&((litaC_lines)))) {{
#line 892 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__builtins__String litaC_line = litaC_std__string__SplitIter_next(&((litaC_lines)));

#line 893 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
if(litaC_std__string__String_startsWith(litaC_line, (litaC_std__builtins__String) { .buffer = "#", .length = 1 }, 0)) {{
#line 894 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
continue;

}
} 


#line 896 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__builtins__String litaC_name = litaC_std__string__String_trim(litaC_std__string__String_substringOf(litaC_line, (litaC_std__builtins__String) { .buffer = "=", .length = 1 }));

#line 897 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__builtins__String litaC_value = litaC_std__string__String_trim(litaC_std__string__String_substringOfAfter(litaC_line, (litaC_std__builtins__String) { .buffer = "=", .length = 1 }));

#line 898 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__system__SetEnv(litaC_std__string__String_toCStr(litaC_name, litaC_allocator), litaC_std__string__String_toCStr(litaC_value, litaC_allocator));

#line 899 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_result += 1;

}}

#line 902 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
{litaC_i32 ___result = litaC_result;

#line 879 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__string__builder__StringBuilder_free(&((litaC_sb)));
return ___result;
}

litaC_std__string__builder__StringBuilder_free(&((litaC_sb)));
}


#line 910 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

litaC_void litaC_std__system__testAbsolutePath(void) {
#line 911 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_char litaC_path[
#line 911 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
PATH_MAX] =  {0};

#line 912 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__assert__assert(litaC_std__string__char_equals(litaC_std__system__GetAbsolutePath("C:/litac", "../src/main.lita", litaC_path), "C:/src/main.lita"), __FILE__, __LINE__);

#line 913 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__assert__assert(litaC_std__string__char_equals(litaC_std__system__GetAbsolutePath("C:/litac", "./../src/main.lita", litaC_path), "C:/src/main.lita"), __FILE__, __LINE__);

#line 914 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__assert__assert(litaC_std__string__char_equals(litaC_std__system__GetAbsolutePath("C:/litac", "./..\\src/main.lita", litaC_path), "C:/src/main.lita"), __FILE__, __LINE__);

#line 915 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__assert__assert(litaC_std__string__char_equals(litaC_std__system__GetAbsolutePath("C:/litac", "../../src/main.lita", litaC_path), "src/main.lita"), __FILE__, __LINE__);
}


#line 919 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"

litaC_void litaC_std__system__testMkdirDelete(void) {
#line 920 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__system__Mkdir("rodgers");

#line 921 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__assert__assert(litaC_std__system__FileExists("rodgers"), __FILE__, __LINE__);

#line 922 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__system__FileDelete("rodgers");

#line 923 "/Users/tony/projects/litac-lang/stdlib/std/system/system.lita"
litaC_std__assert__assert(!(litaC_std__system__FileExists("rodgers")), __FILE__, __LINE__);
}


#line 48 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"

litaC_bool litaC_std__system__system_posix___SystemInit(void) {
#line 49 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return litaC_true;

}


#line 56 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
const litaC_char* litaC_std__system__system_posix___CurrentWorkingPath(void) {
#line 57 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
static 
litaC_char litaC_path[
#line 57 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
PATH_MAX] = {0};

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
if(litaC_std__system__system_posix__pwd[0] == 0) {{
#line 59 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_char* litaC_result = getcwd(litaC_path, PATH_MAX);

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
if(litaC_result) {{
#line 61 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_std__system__GetAbsolutePath("", litaC_path, litaC_std__system__system_posix__pwd);

}
} 


}
} 


#line 65 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return litaC_std__system__system_posix__pwd;

}


#line 84 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_bool litaC_std__system__system_posix___Mkdir(const litaC_char* litaC_dir) {
#line 85 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
mkdir(litaC_dir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_std__builtins__String litaC_view = litaC_std__string__StringInit(litaC_dir, -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 90 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
if(litaC_std__string__String_endsWith(litaC_view, (litaC_std__builtins__String) { .buffer = "/", .length = 1 })) {{
#line 91 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_char litaC_path[
#line 91 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
PATH_MAX] =  {0};

#line 92 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_std__string__buffer__StringBuffer litaC_normalized = litaC_std__string__buffer__StringBufferInit(litaC_path, PATH_MAX, 0);

#line 93 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_std__string__buffer__StringBuffer_format(&((litaC_normalized)), "%.*s", litaC_view.length - 1, litaC_view.buffer);

#line 94 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return litaC_std__system__FileExists(litaC_std__string__buffer__StringBuffer_cStr(litaC_normalized));


}
} 


#line 96 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return litaC_std__system__FileExists(litaC_dir);

}


#line 102 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_bool litaC_std__system__system_posix___FileIsDir(const litaC_char* litaC_filename) {
#line 103 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
FileStat litaC_s = {0};

#line 104 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
if(stat(litaC_filename, &(litaC_s)) != 0) {{
#line 105 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return litaC_false;


}
} 


#line 107 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return S_ISDIR(litaC_s.st_mode);

}


#line 111 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
LITAC_INLINE 
litaC_bool litaC_std__system__system_posix___FileTruncate(const litaC_char* litaC_filename,litaC_usize litaC_newLength) {
#line 112 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
FILE* litaC_file = fopen(litaC_filename, "rw");

#line 113 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return litaC_std__system__system_posix___FileTruncateFile(litaC_file, litaC_newLength);

}


#line 117 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
LITAC_INLINE 
litaC_bool litaC_std__system__system_posix___FileTruncateFile(FILE* litaC_file,litaC_usize litaC_newLength) {
#line 118 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
if(!(litaC_file)) {{
#line 119 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return litaC_false;


}
} 


#line 122 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_i32 litaC_fd = fileno(litaC_file);

#line 123 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return ftruncate(litaC_fd, litaC_newLength);

}


#line 127 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
LITAC_INLINE 
litaC_bool litaC_std__system__system_posix___FileDelete(const litaC_char* litaC_filename) {
#line 128 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
if(litaC_std__system__system_posix___FileIsDir(litaC_filename)) {{
#line 129 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return rmdir(litaC_filename) == 0;


}
} 


#line 132 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return remove(litaC_filename) == 0;

}


#line 147 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"

litaC_f64 litaC_std__system__system_posix___SystemTimeMSec(void) {
#line 148 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
timeval litaC_t0 = {0};

#line 149 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
gettimeofday(&(litaC_t0), NULL);

#line 151 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
litaC_f64 litaC_time = (((litaC_f64)litaC_t0.tv_sec * 1000.0) + ((litaC_f64)litaC_t0.tv_usec / 1000.0));

#line 152 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
return litaC_time / 1000.0;

}


#line 156 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
LITAC_INLINE 
litaC_void litaC_std__system__system_posix___SetEnv(const litaC_char* litaC_varName,const litaC_char* litaC_value) {
#line 157 "/Users/tony/projects/litac-lang/stdlib/std/system/system_posix.lita"
setenv(litaC_varName, litaC_value, 1);
}


#line 29 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void* litaC_std__json__DefaultMakePtrFn(litaC_u64 litaC_type,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;

}


#line 33 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__DefaultMakeFn(litaC_u64 litaC_type,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json,litaC_void* litaC_result) {}


#line 45 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonContext litaC_std__json__JsonContextInit(litaC_void (*litaC_maker)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*,litaC_void*),litaC_void* (*litaC_makerPtr)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*),const litaC_std__mem__Allocator* litaC_allocator) {
#line 48 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonContext litaC_context =  {0};

#line 51 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonContext_init(&((litaC_context)), litaC_maker, litaC_makerPtr, litaC_allocator);

#line 52 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_context;

}


#line 54 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonContext_init(litaC_std__json__JsonContext* litaC_this,litaC_void (*litaC_maker)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*,litaC_void*),litaC_void* (*litaC_makerPtr)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*),const litaC_std__mem__Allocator* litaC_allocator) {
#line 57 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_this->allocator = litaC_allocator;

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_this->maker = litaC_maker;

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_this->makerPtr = litaC_makerPtr;
}


#line 104 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_isNull(litaC_std__json__JsonNode* litaC_node) {
#line 105 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->type == litaC_std__json__JsonType_NULL;

}


#line 109 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_isBool(litaC_std__json__JsonNode* litaC_node) {
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->type == litaC_std__json__JsonType_BOOLEAN;

}


#line 114 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_isTrue(litaC_std__json__JsonNode* litaC_node) {
#line 115 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->type == litaC_std__json__JsonType_BOOLEAN && litaC_node->value.boolValue;

}


#line 119 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_isFalse(litaC_std__json__JsonNode* litaC_node) {
#line 120 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return !(litaC_std__json__JsonNode_isTrue(litaC_node));

}


#line 124 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_isNumber(litaC_std__json__JsonNode* litaC_node) {
#line 125 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->type == litaC_std__json__JsonType_INT_NUMBER || 
#line 126 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->type == litaC_std__json__JsonType_FLOAT_NUMBER;

}


#line 129 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_isString(litaC_std__json__JsonNode* litaC_node) {
#line 130 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->type == litaC_std__json__JsonType_STRING;

}


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_isArray(litaC_std__json__JsonNode* litaC_node) {
#line 135 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->type == litaC_std__json__JsonType_ARRAY;

}


#line 139 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_isObject(litaC_std__json__JsonNode* litaC_node) {
#line 140 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->type == litaC_std__json__JsonType_OBJECT;

}


#line 144 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
const litaC_char* litaC_std__json__JsonNode_asString(litaC_std__json__JsonNode* litaC_node) {
#line 145 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.strValue;

}


#line 149 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_bool litaC_std__json__JsonNode_asBool(litaC_std__json__JsonNode* litaC_node) {
#line 150 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.boolValue;

}


#line 154 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_f64 litaC_std__json__JsonNode_asNumber(litaC_std__json__JsonNode* litaC_node) {
#line 155 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.doubleValue;

}


#line 159 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_f64 litaC_std__json__JsonNode_asFloat(litaC_std__json__JsonNode* litaC_node) {
#line 160 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.doubleValue;

}


#line 164 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_i32 litaC_std__json__JsonNode_asInt(litaC_std__json__JsonNode* litaC_node) {
#line 165 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_i32)litaC_node->value.intValue;

}


#line 169 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_i64 litaC_std__json__JsonNode_asLong(litaC_std__json__JsonNode* litaC_node) {
#line 170 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_i64)litaC_node->value.intValue;

}


#line 174 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_std__json__JsonNode_asArray(litaC_std__json__JsonNode* litaC_node) {
#line 175 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.arrayValue;

}


#line 179 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
LITAC_INLINE 
litaC_std__json__JsonObject* litaC_std__json__JsonNode_asObject(litaC_std__json__JsonNode* litaC_node) {
#line 180 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.objValue;

}


#line 183 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonNumber(litaC_f64 litaC_value,const litaC_std__mem__Allocator* litaC_alloc) {
#line 184 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__mem__std__mem__new_cb_std__json__JsonNode_ce_(litaC_alloc);

#line 185 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->alloc = litaC_alloc;

#line 186 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->type = litaC_std__json__JsonType_FLOAT_NUMBER;

#line 187 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->value = (litaC_std__json__JsonValue) {
#line 188 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.doubleValue = litaC_value};

#line 191 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node;

}


#line 195 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonIntNumber(litaC_i64 litaC_value,const litaC_std__mem__Allocator* litaC_alloc) {
#line 196 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__mem__std__mem__new_cb_std__json__JsonNode_ce_(litaC_alloc);

#line 197 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->alloc = litaC_alloc;

#line 198 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->type = litaC_std__json__JsonType_INT_NUMBER;

#line 199 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->value = (litaC_std__json__JsonValue) {
#line 200 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.intValue = litaC_value};

#line 203 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node;

}


#line 207 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonFloatNumber(litaC_f64 litaC_value,const litaC_std__mem__Allocator* litaC_alloc) {
#line 208 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__CreateJsonNumber(litaC_value, litaC_alloc);

}


#line 215 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonString(const litaC_char* litaC_str,litaC_i32 litaC_len,const litaC_std__mem__Allocator* litaC_alloc) {
#line 216 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

#line 217 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_str == NULL) {{
#line 218 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JSON_NULL;


}
} 


#line 221 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_len < 0) {{
#line 222 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_len = litaC_std__string__char_length(litaC_str);

}
} 


#line 225 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder litaC_sb = litaC_std__string__builder__StringBuilderInit(litaC_len + 1, litaC_alloc);

#line 227 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEscapeString(&((litaC_sb)), litaC_str, litaC_len);

#line 229 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__CreateJsonStringNoDup(litaC_std__string__builder__StringBuilder_cStr(&((litaC_sb))), litaC_alloc);

}


#line 256 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonEscapeString(litaC_std__string__builder__StringBuilder* litaC_buf,const litaC_char* litaC_string,litaC_i32 litaC_length) {
#line 257 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_length;litaC_i += 1) {{
#line 258 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char litaC_c = litaC_string[litaC_i];

#line 259 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_escaped = litaC_std__json__escapeStrings[(litaC_u32)litaC_c];

#line 260 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_escaped) {{
#line 261 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStr(litaC_buf, litaC_escaped);

#line 262 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
continue;

}
} else {
#line 264 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 265 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendChar(litaC_buf, litaC_c);

}} 


}}
}


#line 295 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonStringNoDup(const litaC_char* litaC_str,const litaC_std__mem__Allocator* litaC_alloc) {
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__mem__std__mem__new_cb_std__json__JsonNode_ce_(litaC_alloc);

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->alloc = litaC_alloc;

#line 299 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->type = litaC_std__json__JsonType_STRING;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->value = (litaC_std__json__JsonValue) {
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.strValue = litaC_str};

#line 304 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node;

}


#line 307 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonArray(const litaC_std__mem__Allocator* litaC_alloc) {
#line 308 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__mem__std__mem__new_cb_std__json__JsonNode_ce_(litaC_alloc);

#line 309 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->alloc = litaC_alloc;

#line 310 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->type = litaC_std__json__JsonType_ARRAY;

#line 311 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->value = (litaC_std__json__JsonValue) {
#line 312 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.arrayValue = litaC_std__mem__std__mem__new_cb_std__array__Array_ce_(litaC_alloc)};

#line 315 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_init_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue, 16, litaC_alloc);

#line 317 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node;

}


#line 320 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__CreateJsonObject(const litaC_std__mem__Allocator* litaC_alloc) {
#line 321 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__mem__std__mem__new_cb_std__json__JsonNode_ce_(litaC_alloc);

#line 322 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->alloc = litaC_alloc;

#line 323 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->type = litaC_std__json__JsonType_OBJECT;

#line 324 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_node->value = (litaC_std__json__JsonValue) {
#line 325 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.objValue = litaC_std__mem__std__mem__new_cb_std__json__JsonObject_ce_(litaC_alloc)};

#line 328 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__map__std__map__Map_init_cb__ptr_const_char_c_i32_ce_(&((litaC_node->value.objValue->indexes)), -(1), 16, litaC_alloc, 0);

#line 329 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_init_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)), 16, litaC_alloc);

#line 331 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node;

}


#line 334 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_put(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_std__json__JsonNode* litaC_n) {
#line 335 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 336 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 339 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n == NULL) {{
#line 340 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_n = litaC_std__json__JSON_NULL;

}
} 


#line 343 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char* litaC_copy = litaC_std__string__StringClone(litaC_key, litaC_std__string__char_length(litaC_key), litaC_node->alloc);

#line 344 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_entry =  {
#line 345 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.key = litaC_copy,

#line 346 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.value = litaC_n};

#line 348 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_add_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)), litaC_entry);

#line 349 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__map__std__map__Map_put_cb__ptr_const_char_c_i32_ce_(&((litaC_node->value.objValue->indexes)), litaC_copy, litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values))) - 1);
}


#line 352 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putNoDup(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_std__json__JsonNode* litaC_n) {
#line 353 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 354 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 357 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n == NULL) {{
#line 358 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_n = litaC_std__json__JSON_NULL;

}
} 


#line 361 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_entry =  {
#line 362 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.key = litaC_key,

#line 363 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.value = litaC_n};

#line 365 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_add_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)), litaC_entry);

#line 366 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__map__std__map__Map_put_cb__ptr_const_char_c_i32_ce_(&((litaC_node->value.objValue->indexes)), litaC_key, litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values))) - 1);
}


#line 369 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putStr(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,const litaC_char* litaC_str,litaC_i32 litaC_len) {
#line 370 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 371 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 374 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_str == NULL) {{
#line 375 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_put(litaC_node, litaC_key, litaC_std__json__JSON_NULL);

#line 376 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 379 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_value = litaC_std__json__CreateJsonString(litaC_str, litaC_len, litaC_node->alloc);

#line 380 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_put(litaC_node, litaC_key, litaC_value);
}


#line 384 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putNumber(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_f64 litaC_number) {
#line 385 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 386 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 389 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_value = litaC_std__json__CreateJsonFloatNumber(litaC_number, litaC_node->alloc);

#line 390 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_put(litaC_node, litaC_key, litaC_value);
}


#line 393 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putIntNumber(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_i64 litaC_number) {
#line 394 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 395 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 398 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_value = litaC_std__json__CreateJsonIntNumber(litaC_number, litaC_node->alloc);

#line 399 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_put(litaC_node, litaC_key, litaC_value);
}


#line 402 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putFloatNumber(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_f64 litaC_number) {
#line 403 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 404 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 407 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_value = litaC_std__json__CreateJsonFloatNumber(litaC_number, litaC_node->alloc);

#line 408 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_put(litaC_node, litaC_key, litaC_value);
}


#line 411 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_putBool(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_bool litaC_b) {
#line 412 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 413 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 416 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_put(litaC_node, litaC_key, (litaC_b) ? litaC_std__json__JSON_TRUE : litaC_std__json__JSON_FALSE);
}


#line 420 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_contains(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key) {
#line 421 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 422 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_false;


}
} 


#line 425 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__map__std__map__Map_contains_cb__ptr_const_char_c_i32_ce_(&((litaC_node->value.objValue->indexes)), litaC_key);

}


#line 428 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonNode_get(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key) {
#line 429 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_OBJECT) {{
#line 430 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;


}
} 


#line 433 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_index = litaC_std__map__std__map__Map_get_cb__ptr_const_char_c_i32_ce_(&((litaC_node->value.objValue->indexes)), litaC_key);

#line 434 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_index < 0) {{
#line 435 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;


}
} 


#line 438 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)), litaC_index).value;

}


#line 441 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_getBool(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_bool litaC_defaultValue) {
#line 442 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__json__JsonNode_get(litaC_node, litaC_key);

#line 443 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_n) || !(litaC_std__json__JsonNode_isBool(litaC_n))) {{
#line 444 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_defaultValue;


}
} 


#line 447 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_n->value.boolValue;

}


#line 450 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_std__json__JsonNode_getInt(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_i32 litaC_defaultValue) {
#line 451 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__json__JsonNode_get(litaC_node, litaC_key);

#line 452 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_n)) {{
#line 453 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_defaultValue;


}
} 


#line 456 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n->type == litaC_std__json__JsonType_FLOAT_NUMBER) {{
#line 457 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_i32)litaC_n->value.doubleValue;


}
} else {
#line 459 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n->type == litaC_std__json__JsonType_INT_NUMBER) {{
#line 460 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_i32)litaC_n->value.intValue;


}
} 
} 


#line 463 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_defaultValue;

}


#line 466 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i64 litaC_std__json__JsonNode_getLong(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_i64 litaC_defaultValue) {
#line 467 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__json__JsonNode_get(litaC_node, litaC_key);

#line 468 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_n) || !(litaC_std__json__JsonNode_isNumber(litaC_n))) {{
#line 469 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_defaultValue;


}
} 


#line 472 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n->type == litaC_std__json__JsonType_FLOAT_NUMBER) {{
#line 473 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_i64)litaC_n->value.doubleValue;


}
} else {
#line 475 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n->type == litaC_std__json__JsonType_INT_NUMBER) {{
#line 476 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_n->value.intValue;


}
} 
} 


#line 479 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_defaultValue;

}


#line 482 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_f64 litaC_std__json__JsonNode_getFloat(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_f64 litaC_defaultValue) {
#line 483 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__json__JsonNode_get(litaC_node, litaC_key);

#line 484 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_n)) {{
#line 485 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_defaultValue;


}
} 


#line 488 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n->type == litaC_std__json__JsonType_FLOAT_NUMBER) {{
#line 489 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_n->value.doubleValue;


}
} else {
#line 491 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n->type == litaC_std__json__JsonType_INT_NUMBER) {{
#line 492 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_f64)litaC_n->value.intValue;


}
} 
} 


#line 495 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_defaultValue;

}


#line 498 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonNode_getStr(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,const litaC_char* litaC_defaultValue) {
#line 499 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__json__JsonNode_get(litaC_node, litaC_key);

#line 500 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_n) || !(litaC_std__json__JsonNode_isString(litaC_n))) {{
#line 501 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_defaultValue;


}
} 


#line 504 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_n->value.strValue;

}


#line 507 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char* litaC_std__json__JsonNode_getStrCopy(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key,litaC_char* litaC_str,litaC_i32 litaC_len) {
#line 508 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__json__JsonNode_get(litaC_node, litaC_key);

#line 509 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_n) || !(litaC_std__json__JsonNode_isString(litaC_n))) {{
#line 510 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_str;


}
} 


#line 513 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_srcLen = litaC_std__string__char_length(litaC_n->value.strValue);

#line 514 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__StringCopy(litaC_n->value.strValue, litaC_str, MIN(litaC_srcLen, litaC_len) + 1);

#line 516 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_str;

}


#line 519 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonNode_getArray(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key) {
#line 520 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__json__JsonNode_get(litaC_node, litaC_key);

#line 521 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_n) || !(litaC_std__json__JsonNode_isArray(litaC_n))) {{
#line 522 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;


}
} 


#line 525 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_n;

}


#line 528 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonNode_getObject(litaC_std__json__JsonNode* litaC_node,const litaC_char* litaC_key) {
#line 529 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__json__JsonNode_get(litaC_node, litaC_key);

#line 530 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_n) || !(litaC_std__json__JsonNode_isObject(litaC_n))) {{
#line 531 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;


}
} 


#line 534 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_n;

}


#line 537 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_add(litaC_std__json__JsonNode* litaC_node,litaC_std__json__JsonNode* litaC_n) {
#line 538 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type == litaC_std__json__JsonType_ARRAY) {{
#line 539 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_add_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue, litaC_n);

}
} 

}


#line 543 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonNode_at(litaC_std__json__JsonNode* litaC_node,litaC_i32 litaC_index) {
#line 544 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_std__json__JsonType_ARRAY) {{
#line 545 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;


}
} 


#line 548 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__array__std__array__Array_get_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue, litaC_index);

}


#line 551 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_std__json__JsonNode_size(litaC_std__json__JsonNode* litaC_node) {
#line 552 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type == litaC_std__json__JsonType_ARRAY) {{
#line 553 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue);


}
} else {
#line 555 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type == litaC_std__json__JsonType_OBJECT) {{
#line 556 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__map__std__map__Map_size_cb__ptr_const_char_c_i32_ce_(&((litaC_node->value.objValue->indexes)));


}
} 
} 


#line 559 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return 0;

}


#line 562 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_empty(litaC_std__json__JsonNode* litaC_node) {
#line 563 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JsonNode_size(litaC_node) == 0;

}


#line 571 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonIterator litaC_std__json__JsonNode_iter(litaC_std__json__JsonNode* litaC_node) {
#line 572 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_std__json__JsonIterator) {
#line 573 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.index = 0,

#line 574 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.json = litaC_node};

}


#line 577 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonIterator_hasNext(litaC_std__json__JsonIterator* litaC_this) {
#line 578 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_this->index < litaC_std__json__JsonNode_size(litaC_this->json);

}


#line 581 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_std__json__JsonIterator_next(litaC_std__json__JsonIterator* litaC_this) {
#line 582 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_this->index >= litaC_std__json__JsonNode_size(litaC_this->json)) {{
#line 583 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_std__json__JsonEntry) {.key = NULL,
.value = NULL};


}
} 


#line 586 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_this->index += 1;

#line 587 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonNode_isArray(litaC_this->json)) {{
#line 588 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_value = litaC_std__json__JsonNode_at(litaC_this->json, litaC_this->index - 1);

#line 589 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_std__json__JsonEntry) {
#line 590 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.key = NULL,

#line 591 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.value = litaC_value};


}
} 


#line 595 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonNode_isObject(litaC_this->json)) {{
#line 596 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(&((litaC_this->json->value.objValue->values)), litaC_this->index - 1);


}
} 


#line 599 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return (litaC_std__json__JsonEntry) {
#line 600 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.key = NULL,

#line 601 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
.value = litaC_this->json};

}


#line 605 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonNode_equals(litaC_std__json__JsonNode* litaC_node,litaC_std__json__JsonNode* litaC_other) {
#line 606 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node == litaC_other) {{
#line 607 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_true;


}
} 


#line 610 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_node) && litaC_other) {return litaC_false;

} 


#line 611 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node && !(litaC_other)) {return litaC_false;

} 


#line 613 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node->type != litaC_other->type) {{
#line 614 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_false;


}
} 


#line 617 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
switch(litaC_node->type) {
#line 618 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_ARRAY: {{
#line 619 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue) != litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_other->value.arrayValue)) {{
#line 620 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_false;


}
} 


#line 623 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue);litaC_i += 1) {{
#line 624 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_thisElement = litaC_std__array__std__array__Array_get_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue, litaC_i);

#line 625 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_otherElement = litaC_std__array__std__array__Array_get_cb__ptr_std__json__JsonNode_ce_(litaC_other->value.arrayValue, litaC_i);

#line 626 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_std__json__JsonNode_equals(litaC_thisElement, litaC_otherElement))) {{
#line 627 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_false;


}
} 


}}

#line 631 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_true;


}

}

#line 633 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_OBJECT: {{
#line 634 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_thisCount = 0;

#line 636 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)));litaC_i += 1) {{
#line 637 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_entry = litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)), litaC_i);

#line 638 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_key = litaC_entry.key;

#line 639 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_thisValue = litaC_entry.value;

#line 641 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_thisValue != NULL && litaC_thisValue->type != litaC_std__json__JsonType_NULL) {{
#line 642 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_thisCount += 1;

}
} 


#line 645 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_otherValue = litaC_std__json__JsonNode_get(litaC_other, litaC_key);

#line 646 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_std__json__JsonNode_equals(litaC_thisValue, litaC_otherValue))) {{
#line 647 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_false;


}
} 


}}

#line 651 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_otherCount = 0;

#line 653 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(&((litaC_other->value.objValue->values)));litaC_i += 1) {{
#line 654 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_entry = litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(&((litaC_other->value.objValue->values)), litaC_i);

#line 655 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_otherValue = litaC_entry.value;

#line 657 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_otherValue != NULL && litaC_otherValue->type != litaC_std__json__JsonType_NULL) {{
#line 658 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_otherCount += 1;

}
} 


}}

#line 662 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_otherCount == litaC_thisCount;


}

}

#line 664 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_STRING: {{
#line 665 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__string__char_equals(litaC_node->value.strValue, litaC_other->value.strValue);


}

}

#line 668 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_NULL: {{
#line 669 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_true;


}

}

#line 671 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_BOOLEAN: {{
#line 672 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.boolValue == litaC_other->value.boolValue;


}

}

#line 674 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_INT_NUMBER: {{
#line 675 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.intValue == litaC_other->value.intValue;


}

}

#line 677 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_FLOAT_NUMBER: {{
#line 678 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node->value.doubleValue == litaC_other->value.doubleValue;


}

}
default: 
#line 680 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{{
#line 681 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__assert__assert(litaC_false, __FILE__, __LINE__);

}

}}
}


#line 687 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonNode_print(litaC_std__json__JsonNode* litaC_node,litaC_std__string__builder__StringBuilder* litaC_buf) {
#line 688 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__PrintJson(litaC_node, litaC_buf);

#line 689 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__string__builder__StringBuilder_cStr(litaC_buf);

}


#line 692 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonNode_prettyPrint(litaC_std__json__JsonNode* litaC_node,litaC_std__string__builder__StringBuilder* litaC_buf,litaC_i32 litaC_tabSize) {
#line 693 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__PrettyPrintJson(litaC_node, litaC_buf, 0, litaC_tabSize);

#line 694 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__string__builder__StringBuilder_cStr(litaC_buf);

}


#line 697 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonNode_free(litaC_std__json__JsonNode* litaC_node) {
#line 698 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_node)) {{
#line 699 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 702 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_std__mem__Allocator* litaC_alloc = litaC_node->alloc;

#line 706 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_alloc)) {{
#line 707 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 710 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
switch(litaC_node->type) {
#line 711 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_ARRAY: {{
#line 712 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue);litaC_i += 1) {{
#line 713 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_n = litaC_std__array__std__array__Array_get_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue, litaC_i);

#line 714 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_n) {{
#line 715 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_free(litaC_n);

}
} 


}}

#line 719 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_free_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue);

#line 720 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__mem__Allocator_free(litaC_alloc, (litaC_void*)litaC_node->value.arrayValue);

#line 721 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 723 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_OBJECT: {{
#line 724 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)));litaC_i += 1) {{
#line 725 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_entry = litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)), litaC_i);

#line 726 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_key = litaC_entry.key;

#line 727 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_entry.value;

#line 728 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__mem__Allocator_free(litaC_alloc, (litaC_void*)litaC_key);

#line 730 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node) {{
#line 731 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_free(litaC_node);

}
} 


}}

#line 734 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__map__std__map__Map_free_cb__ptr_const_char_c_i32_ce_(&((litaC_node->value.objValue->indexes)));

#line 735 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_free_cb_std__json__JsonEntry_ce_(&((litaC_node->value.objValue->values)));

#line 737 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__mem__Allocator_free(litaC_alloc, (litaC_void*)litaC_node->value.objValue);

#line 738 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 740 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_STRING: {{
#line 741 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__mem__Allocator_free(litaC_alloc, (litaC_void*)litaC_node->value.strValue);

#line 742 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}
default: 
#line 744 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
}}

#line 747 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__mem__Allocator_free(litaC_alloc, (litaC_void*)litaC_node);
}


#line 878 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser litaC_std__json__JsonParserInit(const litaC_std__mem__Allocator* litaC_alloc) {
#line 879 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser litaC_parser =  {0};

#line 880 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_init(&((litaC_parser)), litaC_alloc);

#line 881 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_parser;

}


#line 884 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_init(litaC_std__json__JsonParser* litaC_p,const litaC_std__mem__Allocator* litaC_alloc) {
#line 885 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->alloc = litaC_alloc;

#line 886 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->status = litaC_std__json__JsonParserStatus_OK;

#line 887 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
memset(litaC_p->errorMsg, 0, litaC_std__json__MAX_MESSAGE_SIZE);

#line 889 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream = NULL;

#line 890 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->lineStart = NULL;

#line 891 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.pos.name = "<string>";

#line 892 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.pos.line = 1;

#line 893 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_init(&((litaC_p->buffer)), 16, litaC_alloc);
}


#line 896 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_free(litaC_std__json__JsonParser* litaC_p) {
#line 897 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_free(&((litaC_p->buffer)));

#line 898 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream = NULL;

#line 899 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->lineStart = NULL;
}


#line 902 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJson(litaC_std__json__JsonParser* litaC_p,const litaC_char* litaC_buffer) {
#line 903 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream = litaC_buffer;

#line 904 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->lineStart = litaC_p->stream;

#line 905 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->status = litaC_std__json__JsonParserStatus_OK;

#line 907 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_clear(&((litaC_p->buffer)));

#line 908 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_nextToken(litaC_p);

#line 910 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__json__JsonParser_parseJsonNode(litaC_p);

#line 911 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(litaC_p)) {{
#line 912 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node) {{
#line 913 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_free(litaC_node);

}
} 


#line 915 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;


}
} 


#line 918 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node;

}


#line 921 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonParser_hasError(litaC_std__json__JsonParser* litaC_p) {
#line 922 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_p->status == litaC_std__json__JsonParserStatus_ERROR;

}


#line 925 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__PrintJson(litaC_std__json__JsonNode* litaC_node,litaC_std__string__builder__StringBuilder* litaC_buf) {
#line 926 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_node)) {{
#line 927 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 929 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
switch(litaC_node->type) {
#line 930 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_NULL: {{
#line 931 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "null", 4);

#line 932 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 934 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_BOOLEAN: {{
#line 935 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
((litaC_node->value.boolValue)) ? 
#line 936 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "true", 4) : litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "false", 5);

#line 937 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 939 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_INT_NUMBER: {{
#line 940 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "%lld", litaC_node->value.intValue);

#line 941 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 943 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_FLOAT_NUMBER: {{
#line 944 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "%f", litaC_node->value.doubleValue);

#line 945 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 947 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_STRING: {{
#line 948 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "\"%s\"", litaC_node->value.strValue);

#line 949 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 951 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_OBJECT: {{
#line 952 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "{", 1);

#line 953 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonObject* litaC_obj = litaC_node->value.objValue;

#line 955 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_isFirst = litaC_true;

#line 956 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(&((litaC_obj->values)));litaC_i += 1) {{
#line 957 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_entry = litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(&((litaC_obj->values)), litaC_i);

#line 959 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_isFirst)) {litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, ",", 1);
} 


#line 960 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "\"%s\":", litaC_entry.key);

#line 961 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__PrintJson(litaC_entry.value, litaC_buf);

#line 962 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_isFirst = litaC_false;

}}

#line 964 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "}", 1);

#line 965 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 967 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_ARRAY: {{
#line 968 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "[", 1);

#line 969 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_array = litaC_node->value.arrayValue;

#line 970 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_isFirst = litaC_true;

#line 971 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_array);litaC_i += 1) {{
#line 972 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_isFirst)) {litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, ",", 1);
} 


#line 973 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__PrintJson(litaC_std__array__std__array__Array_get_cb__ptr_std__json__JsonNode_ce_(litaC_array, litaC_i), litaC_buf);

#line 974 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_isFirst = litaC_false;

}}

#line 976 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "]", 1);

#line 977 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}}
}


#line 983 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__PrettyPrintJson(litaC_std__json__JsonNode* litaC_node,litaC_std__string__builder__StringBuilder* litaC_buf,litaC_i32 litaC_offset,litaC_i32 litaC_tabSize) {
#line 984 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_node)) {{
#line 985 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 987 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
switch(litaC_node->type) {
#line 988 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_NULL: {{
#line 989 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "null", 4);

#line 990 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 992 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_BOOLEAN: {{
#line 993 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
((litaC_node->value.boolValue)) ? 
#line 994 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "true", 4) : litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "false", 5);

#line 995 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 997 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_INT_NUMBER: {{
#line 998 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "%lld", litaC_node->value.intValue);

#line 999 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1001 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_FLOAT_NUMBER: {{
#line 1002 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "%f", litaC_node->value.doubleValue);

#line 1003 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1005 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_STRING: {{
#line 1006 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "\"%s\"", litaC_node->value.strValue);

#line 1007 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1009 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_OBJECT: {{
#line 1010 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "{\n", 2);

#line 1011 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonObject* litaC_obj = litaC_node->value.objValue;

#line 1013 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_isFirst = litaC_true;

#line 1014 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(&((litaC_obj->values)));litaC_i += 1) {{
#line 1015 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonEntry litaC_entry = litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(&((litaC_obj->values)), litaC_i);

#line 1017 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_isFirst)) {litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, ",\n", 2);
} 


#line 1018 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "%*s", litaC_offset + litaC_tabSize, "");

#line 1019 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "\"%s\": ", litaC_entry.key);

#line 1020 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__PrettyPrintJson(litaC_entry.value, litaC_buf, litaC_offset + litaC_tabSize, 4);

#line 1021 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_isFirst = litaC_false;

}}

#line 1023 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "\n", 1);

#line 1024 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "%*s}", litaC_offset, "");

#line 1025 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1027 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_ARRAY: {{
#line 1028 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "[\n", 2);

#line 1029 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_array = litaC_node->value.arrayValue;

#line 1030 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_isFirst = litaC_true;

#line 1031 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_array);litaC_i += 1) {{
#line 1032 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_isFirst)) {litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, ",\n", 2);
} 


#line 1033 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "%*s", litaC_offset + litaC_tabSize, "");

#line 1034 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__PrettyPrintJson(litaC_std__array__std__array__Array_get_cb__ptr_std__json__JsonNode_ce_(litaC_array, litaC_i), litaC_buf, litaC_offset + litaC_tabSize, 4);

#line 1035 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_isFirst = litaC_false;

}}

#line 1037 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_buf, "\n", 1);

#line 1038 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_buf, "%*s]", litaC_offset, "");

#line 1039 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}}
}


#line 1045 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonNode(litaC_std__json__JsonParser* litaC_p) {
#line 1046 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(litaC_p)) {{
#line 1047 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;


}
} 


#line 1050 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
switch(litaC_p->token.kind) {
#line 1051 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_EOF: 
#line 1052 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case litaC_std__json__TokenKind_ERROR: 
#line 1053 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{return NULL;


}

#line 1054 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_TRUE: 
#line 1055 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1056 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JSON_TRUE;


}

#line 1057 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_FALSE: 
#line 1058 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1059 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JSON_FALSE;


}

#line 1060 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_NULL: 
#line 1061 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1062 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JSON_NULL;


}

#line 1063 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_INT_NUMBER: 
#line 1064 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1065 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JsonParser_parseJsonIntNumber(litaC_p);


}

#line 1066 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_REAL_NUMBER: 
#line 1067 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1068 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JsonParser_parseJsonRealNumber(litaC_p);


}

#line 1069 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_STRING: 
#line 1070 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1071 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JsonParser_parseJsonStr(litaC_p);


}

#line 1072 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_LEFT_BRACE: 
#line 1073 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1074 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JsonParser_parseJsonObject(litaC_p);


}

#line 1075 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__TokenKind_LEFT_BRACKET: 
#line 1076 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1077 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__JsonParser_parseJsonArray(litaC_p);


}
default: 
#line 1078 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
}}

#line 1081 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return NULL;

}


#line 1084 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonIntNumber(litaC_std__json__JsonParser* litaC_p) {
#line 1085 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__CreateJsonIntNumber(litaC_p->token.intNumValue, litaC_p->alloc);

}


#line 1088 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonRealNumber(litaC_std__json__JsonParser* litaC_p) {
#line 1089 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__CreateJsonFloatNumber(litaC_p->token.realNumValue, litaC_p->alloc);

}


#line 1092 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonStr(litaC_std__json__JsonParser* litaC_p) {
#line 1093 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__CreateJsonStringNoDup(litaC_p->token.strValue, litaC_p->alloc);

}


#line 1096 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonArray(litaC_std__json__JsonParser* litaC_p) {
#line 1097 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__json__CreateJsonArray(litaC_p->alloc);

#line 1099 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
do {{
#line 1100 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_check(litaC_p, litaC_std__json__TokenKind_RIGHT_BRACKET)) {{
#line 1101 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


#line 1103 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_element = litaC_std__json__JsonParser_parseJsonNode(litaC_p);

#line 1104 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__array__std__array__Array_add_cb__ptr_std__json__JsonNode_ce_(litaC_node->value.arrayValue, litaC_element);

}}
while(
#line 1106 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_match(litaC_p, litaC_std__json__TokenKind_COMMA));

#line 1108 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_expect(litaC_p, litaC_std__json__TokenKind_RIGHT_BRACKET);

#line 1109 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node;

}


#line 1111 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_std__json__JsonParser_parseJsonObject(litaC_std__json__JsonParser* litaC_p) {
#line 1112 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__json__CreateJsonObject(litaC_p->alloc);

#line 1114 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
do {{
#line 1115 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_check(litaC_p, litaC_std__json__TokenKind_RIGHT_BRACE)) {{
#line 1116 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


#line 1119 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_key = litaC_p->token.strValue;

#line 1120 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_std__json__JsonParser_expect(litaC_p, litaC_std__json__TokenKind_STRING))) {{
#line 1121 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
goto err;


}
} 


#line 1124 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_std__json__JsonParser_expect(litaC_p, litaC_std__json__TokenKind_COLON))) {{
#line 1125 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
goto err;


}
} 


#line 1128 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_value = litaC_std__json__JsonParser_parseJsonNode(litaC_p);

#line 1129 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode_putNoDup(litaC_node, litaC_key, litaC_value);

}}
while(
#line 1131 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_match(litaC_p, litaC_std__json__TokenKind_COMMA));

#line 1133 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_expect(litaC_p, litaC_std__json__TokenKind_RIGHT_BRACE);

#line 1134 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
err:;


#line 1135 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_node;

}


#line 1138 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__TokenName(litaC_std__json__TokenKind litaC_t) {
#line 1139 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_std__json__tokenKindNames[litaC_t];

}


#line 1143 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_error(litaC_std__json__JsonParser* litaC_p,const litaC_char* litaC_format,...) {
#line 1144 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
va_list litaC_args = {0};

#line 1145 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
va_start(litaC_args, litaC_format);

#line 1147 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
vsnprintf(litaC_p->errorMsg, litaC_std__json__MAX_MESSAGE_SIZE, litaC_format, litaC_args);

#line 1148 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
va_end(litaC_args);

#line 1150 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->status = litaC_std__json__JsonParserStatus_ERROR;

#line 1151 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_ERROR;
}


#line 1154 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_scanInt(litaC_std__json__JsonParser* litaC_p) {
#line 1155 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_base = 10;

#line 1156 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_start_digits = litaC_p->stream;

#line 1157 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream) == '0') {{
#line 1158 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1159 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(tolower(*(litaC_p->stream)) == 'x') {{
#line 1160 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1161 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_base = 16;

#line 1162 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_start_digits = litaC_p->stream;

}
} else {
#line 1163 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(tolower(*(litaC_p->stream)) == 'b') {{
#line 1164 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1165 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_base = 2;

#line 1166 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_start_digits = litaC_p->stream;

}
} else {
#line 1167 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(isdigit(*(litaC_p->stream))) {{
#line 1168 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_base = 8;

#line 1169 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_start_digits = litaC_p->stream;

}
} 
} 
} 


}
} 


#line 1172 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i64 litaC_val = 0;

#line 1173 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
for(;;) {{
#line 1174 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream) == '_') {{
#line 1175 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1176 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
continue;

}
} 


#line 1178 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_digit = litaC_std__json__charToDigit[(litaC_i32)(*(litaC_p->stream))];

#line 1179 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_digit == 0 && *(litaC_p->stream) != '0') {{
#line 1180 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


#line 1182 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_digit >= litaC_base) {{
#line 1183 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Digit '%c' out of range for base %d", *(litaC_p->stream), litaC_base);

#line 1184 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_digit = 0;

}
} 


#line 1186 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_val > (litaC_std__limits__MAX_I64 - litaC_digit) / litaC_base) {{
#line 1187 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Integer literal overflow");

#line 1188 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
while(isdigit(*(litaC_p->stream))) {{
#line 1189 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}}

#line 1191 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_val = 0;

#line 1192 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


#line 1194 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_val = litaC_val * litaC_base + litaC_digit;

#line 1195 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}}

#line 1197 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_p->stream == litaC_start_digits) {{
#line 1198 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Expected base %d digit, got '%c'", litaC_base, *(litaC_p->stream));

}
} 


#line 1201 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(litaC_p)) {{
#line 1202 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 1205 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_INT_NUMBER;

#line 1206 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.intNumValue = litaC_val;
}


#line 1209 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_scanFloat(litaC_std__json__JsonParser* litaC_p) {
#line 1210 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_start = litaC_p->stream;

#line 1212 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
while(isdigit(*(litaC_p->stream))) {{
#line 1213 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}}

#line 1215 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream) == '.') {{
#line 1216 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}
} 


#line 1218 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
while(isdigit(*(litaC_p->stream))) {{
#line 1219 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}}

#line 1221 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(tolower(*(litaC_p->stream)) == 'e') {{
#line 1222 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1223 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream) == '+' || *(litaC_p->stream) == '-') {{
#line 1224 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}
} 


#line 1226 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(isdigit(*(litaC_p->stream)))) {{
#line 1227 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Expected digit after float literal exponent, found '%c'.", *(litaC_p->stream));

}
} 


#line 1229 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
while(isdigit(*(litaC_p->stream))) {{
#line 1230 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}}

}
} 


#line 1233 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_f64 litaC_val = strtod(litaC_start, NULL);

#line 1234 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_val == HUGE_VAL) {{
#line 1235 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Float literal overflow");

}
} 


#line 1238 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(litaC_p)) {{
#line 1239 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 1242 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_REAL_NUMBER;

#line 1243 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.realNumValue = litaC_val;
}


#line 1246 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_scanStr(litaC_std__json__JsonParser* litaC_p) {
#line 1247 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__assert__assert(*(litaC_p->stream) == '"', __FILE__, __LINE__);

#line 1248 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1249 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_clear(&((litaC_p->buffer)));

#line 1251 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
while(*(litaC_p->stream) && *(litaC_p->stream) != '"') {{
#line 1252 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_u8 litaC_c = (litaC_u8)(*(litaC_p->stream));

#line 1255 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_c >= 0x80) {{
#line 1256 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_result = 0;

#line 1257 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_len = litaC_std__unicode__utf8__Utf8Decode((const litaC_u8*)litaC_p->stream, -(1), &(litaC_result));

#line 1258 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_len < 0) {{
#line 1259 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Invalid codepoint");

}
} else {
#line 1261 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1262 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(&((litaC_p->buffer)), litaC_p->stream, (litaC_i32)litaC_len);

#line 1263 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += litaC_len;

}} 


}
} else {
#line 1266 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1267 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char litaC_val = *(litaC_p->stream);

#line 1268 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_val == '\n') {{
#line 1269 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "String literal cannot contain newline");

#line 1270 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} else {
#line 1271 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_val == '\\') {{
#line 1272 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1273 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream) == 'x') {{
}
} else {
#line 1276 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1277 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_val = litaC_std__json__escapeToChar[(litaC_i32)(*(litaC_p->stream))];

#line 1278 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_val == 0 && *(litaC_p->stream) != '0') {{
#line 1279 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Invalid string literal escape '\\%c'", *(litaC_p->stream));

}
} 


#line 1281 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}} 


}
} else {
#line 1283 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1284 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}} 
} 


#line 1287 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_p->buffer)), "%c", litaC_val);

}} 


}}

#line 1290 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream)) {{
#line 1291 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}
} else {
#line 1292 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1293 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Unexpected end of file within string literal");

}} 


#line 1296 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(litaC_p)) {{
#line 1297 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 1300 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_STRING;

#line 1301 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.strValue = (const litaC_char*)litaC_std__mem__memduplicate((const litaC_void*)litaC_std__string__builder__StringBuilder_cStr(&((litaC_p->buffer))), litaC_std__string__builder__StringBuilder_size(&((litaC_p->buffer))) + 1, litaC_p->alloc);
}


#line 1304 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_scanMultiStr(litaC_std__json__JsonParser* litaC_p) {
#line 1305 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__assert__assert(*(litaC_p->stream) == '`', __FILE__, __LINE__);

#line 1306 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1307 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_clear(&((litaC_p->buffer)));

#line 1309 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
while(*(litaC_p->stream) && *(litaC_p->stream) != '`') {{
#line 1310 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_u8 litaC_c = (litaC_u8)(*(litaC_p->stream));

#line 1313 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_c >= 0x80) {{
#line 1314 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_result = 0;

#line 1315 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_len = litaC_std__unicode__utf8__Utf8Decode((const litaC_u8*)litaC_p->stream, -(1), &(litaC_result));

#line 1316 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_len < 0) {{
#line 1317 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Invalid codepoint");

}
} else {
#line 1319 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1320 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(&((litaC_p->buffer)), litaC_p->stream, (litaC_i32)litaC_len);

#line 1321 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += litaC_len;

}} 


}
} else {
#line 1324 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1326 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char litaC_val = *(litaC_p->stream);

#line 1327 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_val == '\\') {{
#line 1328 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1329 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream) == '`') {{
#line 1330 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_val = '`';

#line 1331 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}
} else {
#line 1332 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream) == '\\') {{
#line 1333 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_val = '\\';

#line 1334 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}
} else {
#line 1335 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1336 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_p->buffer)), "%c", litaC_val);

#line 1337 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_val = *(litaC_p->stream);

#line 1338 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}} 
} 


}
} else {
#line 1340 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1341 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}} 


#line 1348 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_val == '\r') {{
#line 1349 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
continue;

}
} 


#line 1352 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_p->buffer)), "%c", litaC_val);

}} 


}}

#line 1355 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream)) {{
#line 1356 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}
} else {
#line 1357 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1358 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Unexpected end of file within string literal");

}} 


#line 1361 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(litaC_p)) {{
#line 1362 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 1365 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_STRING;

#line 1366 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.strValue = (const litaC_char*)litaC_std__mem__memduplicate((const litaC_void*)litaC_std__string__builder__StringBuilder_cStr(&((litaC_p->buffer))), litaC_std__string__builder__StringBuilder_size(&((litaC_p->buffer))) + 1, litaC_p->alloc);
}


#line 1369 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_skipComments(litaC_std__json__JsonParser* litaC_l) {
#line 1370 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_l->stream) == '/') {{
#line 1371 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_l->stream[1] == '/') {{
#line 1372 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_l->stream += 1;

#line 1373 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
do {{
#line 1374 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_l->stream += 1;

#line 1375 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_l->stream) == '\n') {{
#line 1376 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


}}
while(
#line 1379 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_l->stream);

}
} else {
#line 1381 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_l->stream[1] == '*') {{
#line 1382 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_l->stream += 1;

#line 1383 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
do {{
#line 1384 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_l->stream += 1;

#line 1385 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if((litaC_l->stream[0] == '*' && litaC_l->stream[1] == '/')) {{
#line 1386 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_l->stream += 2;

#line 1387 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


}}
while(
#line 1390 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_l->stream);

}
} 
} 


}
} 

}


#line 1396 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_void litaC_std__json__JsonParser_nextToken(litaC_std__json__JsonParser* litaC_p) {
#line 1398 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
repeat:;


#line 1399 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(litaC_p)) {{
#line 1400 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return;


}
} 


#line 1403 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_skipComments(litaC_p);

#line 1405 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.start = litaC_p->stream;

#line 1407 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
switch(*(litaC_p->stream)) {
#line 1408 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case ' ': 
#line 1409 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '\n': 
#line 1410 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '\r': 
#line 1411 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '\t': {{
#line 1413 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
while(isspace(*(litaC_p->stream))) {{
#line 1414 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(*(litaC_p->stream) == '\n') {{
#line 1415 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->lineStart = litaC_p->stream;

#line 1416 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.pos.line += 1;

}
} 


#line 1418 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}}

#line 1420 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
goto repeat;


}

}

#line 1422 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '"': {{
#line 1423 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_scanStr(litaC_p);

#line 1424 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1426 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '`': {{
#line 1427 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_scanMultiStr(litaC_p);

#line 1428 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1430 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '.': 
#line 1431 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{if(isdigit(litaC_p->stream[1])) {{
#line 1432 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_scanFloat(litaC_p);

}
} 


#line 1434 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

#line 1435 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '-': 
#line 1436 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{if(isdigit(litaC_p->stream[1])) {{
#line 1437 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1438 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_scanInt(litaC_p);

#line 1439 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.intNumValue *= -(1);

}
} 


#line 1441 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

#line 1442 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '0': 
#line 1443 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '1': 
#line 1444 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '2': 
#line 1445 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '3': 
#line 1446 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '4': 
#line 1447 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '5': 
#line 1448 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '6': 
#line 1449 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '7': 
#line 1450 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '8': 
#line 1451 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

case '9': {{
#line 1452 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
while(isdigit(*(litaC_p->stream))) {{
#line 1453 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

}}

#line 1455 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char litaC_c = *(litaC_p->stream);

#line 1456 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream = litaC_p->token.start;

#line 1457 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_c == '.' || tolower(litaC_c) == 'e') {{
#line 1458 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_scanFloat(litaC_p);

}
} else {
#line 1459 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1460 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_scanInt(litaC_p);

}} 


#line 1462 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1464 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case 'n': {{
#line 1465 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_p->stream[1] == 'u' && litaC_p->stream[2] == 'l' && litaC_p->stream[3] == 'l') {{
#line 1466 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 4;

#line 1467 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_NULL;

#line 1468 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


#line 1470 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "invalid identifier, did you mean 'null'?");

#line 1471 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1473 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case 't': {{
#line 1474 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_p->stream[1] == 'r' && litaC_p->stream[2] == 'u' && litaC_p->stream[3] == 'e') {{
#line 1475 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 4;

#line 1476 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_TRUE;

#line 1477 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


#line 1479 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "invalid identifier, did you mean 'true'?");

#line 1480 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1482 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case 'f': {{
#line 1483 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_p->stream[1] == 'a' && litaC_p->stream[2] == 'l' && litaC_p->stream[3] == 's' && litaC_p->stream[4] == 'e') {{
#line 1484 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 5;

#line 1485 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_FALSE;

#line 1486 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
} 


#line 1488 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "invalid identifier, did you mean 'false'?");

#line 1489 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}

#line 1491 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '\0': 
#line 1492 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_p->token.kind = litaC_std__json__TokenKind_EOF;

#line 1493 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1494 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

#line 1495 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '{': 
#line 1496 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_p->token.kind = litaC_std__json__TokenKind_LEFT_BRACE;

#line 1497 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1498 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

#line 1499 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '}': 
#line 1500 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_p->token.kind = litaC_std__json__TokenKind_RIGHT_BRACE;

#line 1501 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1502 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

#line 1503 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case '[': 
#line 1504 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_p->token.kind = litaC_std__json__TokenKind_LEFT_BRACKET;

#line 1505 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1506 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

#line 1507 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case ']': 
#line 1508 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_p->token.kind = litaC_std__json__TokenKind_RIGHT_BRACKET;

#line 1509 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1510 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

#line 1511 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case ',': 
#line 1512 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_p->token.kind = litaC_std__json__TokenKind_COMMA;

#line 1513 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1514 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

#line 1515 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case ':': 
#line 1516 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{litaC_p->token.kind = litaC_std__json__TokenKind_COLON;

#line 1517 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1518 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}
default: 
#line 1519 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{{
#line 1520 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Invalid '%c' ('%u') token", *(litaC_p->stream), *(litaC_p->stream));

#line 1521 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->stream += 1;

#line 1522 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.kind = litaC_std__json__TokenKind_ERROR;

#line 1523 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
break;

}

}}

#line 1526 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_p->token.end = litaC_p->stream;
}


#line 1529 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonParser_check(litaC_std__json__JsonParser* litaC_p,litaC_std__json__TokenKind litaC_kind) {
#line 1530 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_p->token.kind == litaC_kind;

}


#line 1533 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonParser_match(litaC_std__json__JsonParser* litaC_p,litaC_std__json__TokenKind litaC_kind) {
#line 1534 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_std__json__JsonParser_check(litaC_p, litaC_kind))) {{
#line 1535 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_false;


}
} 


#line 1538 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1539 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_true;

}


#line 1542 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_bool litaC_std__json__JsonParser_expect(litaC_std__json__JsonParser* litaC_p,litaC_std__json__TokenKind litaC_kind) {
#line 1543 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_std__json__JsonParser_check(litaC_p, litaC_kind))) {{
#line 1544 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(litaC_p)) {{
#line 1545 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_false;


}
} 


#line 1548 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_error(litaC_p, "Expected token %s, got %s", litaC_std__json__TokenName(litaC_kind), litaC_std__json__TokenName(litaC_p->token.kind));

#line 1549 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_false;


}
} 


#line 1552 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_nextToken(litaC_p);

#line 1553 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
return litaC_true;

}


#line 1558 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

litaC_void litaC_std__json__testParser(void) {
#line 1559 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_char* litaC_data = NULL;

#line 1560 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_usize litaC_length = {0};

#line 1561 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__io__ReadFile("/home/tony/projects/litac-lang/test/tests/example.json", &(litaC_data), &(litaC_length), litaC_std__mem__defaultAllocator) != litaC_std__io__FileStatus_Ok) {{
#line 1562 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
printf("Failed to read file\n");

#line 1563 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
goto err;


}
} 


#line 1566 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser litaC_parser =  {0};

#line 1567 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_init(&((litaC_parser)), litaC_std__mem__defaultAllocator);

#line 1568 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"


#line 1570 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__json__JsonParser_parseJson(&((litaC_parser)), litaC_data);

#line 1571 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"


#line 1573 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(!(litaC_node)) {{
#line 1574 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(&((litaC_parser)))) {{
#line 1575 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
printf("Test Json Syntax error: \"%s\"\n", litaC_parser.errorMsg);

}
} 


}
} else {
#line 1578 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{
#line 1579 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_def = litaC_std__json__JsonNode_getStr(litaC_node, "definitions", NULL);

#line 1580 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
printf("%s\n", litaC_def);

#line 1581 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_i32 litaC_x = litaC_std__json__JsonNode_getInt(litaC_node, "x", 0);

#line 1582 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__assert__assert(litaC_x == -(1), __FILE__, __LINE__);

}} 


#line 1585 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

#line 1571 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node) {litaC_std__json__JsonNode_free(litaC_node);
} 
;

#line 1568 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_free(&((litaC_parser)));
return;


#line 1588 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
err:;


#line 1589 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__assert__assert(litaC_false, __FILE__, __LINE__);

#line 1571 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_node) {litaC_std__json__JsonNode_free(litaC_node);
} 
;

#line 1568 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser_free(&((litaC_parser)));
}


#line 1593 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"

litaC_void litaC_std__json__testPrettyPrinter(void) {
#line 1595 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const char* litaC_json = "\n    { \"x\": 7, \"y\":[1,234,{\"x\":[null, true, false, 34.5, [false]] }],\"z\":\"hi\"}\n    ";

#line 1598 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonParser litaC_parser = litaC_std__json__JsonParserInit(litaC_std__mem__defaultAllocator);

#line 1599 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__JsonNode* litaC_node = litaC_std__json__JsonParser_parseJson(&((litaC_parser)), litaC_json);

#line 1600 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
if(litaC_std__json__JsonParser_hasError(&((litaC_parser)))) {{
#line 1601 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
printf("Parsing error: %s\n", litaC_parser.errorMsg);

}
} 


#line 1603 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__string__builder__StringBuilder litaC_sb = litaC_std__string__builder__StringBuilderInit(1024, NULL);

#line 1604 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
litaC_std__json__PrettyPrintJson(litaC_node, &((litaC_sb)), 0, 4);

#line 1605 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
printf("%.*s\n", litaC_sb.asBuffer.length, litaC_sb.asBuffer.buffer);
}


#line 351 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_std__map__nextPowerOf2(litaC_u32 litaC_v) {
#line 352 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_count = 0;

#line 356 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_v && !((litaC_v & (litaC_v - 1)))) {
#line 357 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_v;

} 


#line 359 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
while(litaC_v != 0) {{
#line 360 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_v >>= 1;

#line 361 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_count += 1;

}}

#line 364 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 1 << litaC_count;

}


#line 367 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_std__map__i32_hash(litaC_i32 litaC_this) {
#line 368 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 3;

}


#line 371 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__i32_equals(litaC_i32 litaC_this,litaC_i32 litaC_b) {
#line 372 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_this == litaC_b;

}


#line 375 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__Print(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m) {
#line 376 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
printf("\n");

#line 377 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_m->capacity;litaC_i += 1) {{
#line 378 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 380 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_key = litaC_k->key;

#line 381 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_value = litaC_k->value;

#line 382 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_k->hash;

#line 384 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
printf("Key: %d/%d Value: %d @ %d\n", litaC_key, litaC_hash, litaC_value, litaC_i);

}}
}


#line 389 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__testRemove(void) {
#line 390 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb_i32_c_i32_ce_ litaC_map =  {0};

#line 391 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_init_cb_i32_c_i32_ce_(&((litaC_map)), 
#line 392 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
0, 
#line 393 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
4, 
#line 394 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__mem__defaultAllocator, 0);

#line 397 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"


#line 399 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(&((litaC_map)), 1, 2);

#line 400 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(&((litaC_map)), 2, 4);

#line 401 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(&((litaC_map)), 3, 8);

#line 403 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(&((litaC_map)), 1, 4);

#line 404 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(&((litaC_map)), 2, 8);

#line 405 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(&((litaC_map)), 3, 16);

#line 406 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__Print(&(litaC_map));

#line 407 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
printf("X: %d\n", litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(&((litaC_map)), 2));

#line 408 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__assert__assert(litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(&((litaC_map)), 1) == 4, __FILE__, __LINE__);

#line 409 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__assert__assert(litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(&((litaC_map)), 2) == 8, __FILE__, __LINE__);

#line 410 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__assert__assert(litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(&((litaC_map)), 3) == 16, __FILE__, __LINE__);

#line 413 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_remove_cb_i32_c_i32_ce_(&((litaC_map)), 2);

#line 414 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__Print(&(litaC_map));

#line 415 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__assert__assert(litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(&((litaC_map)), 1) == 4, __FILE__, __LINE__);

#line 416 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__assert__assert(litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(&((litaC_map)), 2) == 0, __FILE__, __LINE__);

#line 417 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__assert__assert(litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(&((litaC_map)), 3) == 16, __FILE__, __LINE__);

#line 397 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_free_cb_i32_c_i32_ce_(&((litaC_map)));
}


#line 429 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"

litaC_void litaC_std__map__performanceTest(void) {
#line 430 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
{
#line 431 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_f64 litaC_start = litaC_std__system__SystemTimeMSec();

#line 432 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb_i64_c_i32_ce_ litaC_map =  {0};

#line 433 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_init_cb_i64_c_i32_ce_(&((litaC_map)), 
#line 434 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
0, 
#line 435 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
4, 
#line 436 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__mem__defaultAllocator, 0);

#line 439 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"


#line 441 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"

#define litaC_COUNT (10000000)

#line 443 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_COUNT;litaC_i += 1) {{
#line 444 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i64_c_i32_ce_(&((litaC_map)), (litaC_i64)litaC_i, litaC_i);

}}

#line 457 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_f64 litaC_end = litaC_std__system__SystemTimeMSec();

#line 459 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
printf("Time: %.4f\n", litaC_end - litaC_start);

#line 439 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_free_cb_i64_c_i32_ce_(&((litaC_map)));
#undef litaC_COUNT

}
}


#line 12 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__i8_hash(litaC_i8 litaC_this) {
#line 13 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 14 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 17 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__i8_equals(litaC_i8 litaC_this,litaC_i8 litaC_other) {
#line 18 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 21 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__u8_hash(litaC_u8 litaC_this) {
#line 22 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 23 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 26 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__u8_equals(litaC_u8 litaC_this,litaC_u8 litaC_other) {
#line 27 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 30 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__i16_hash(litaC_i16 litaC_this) {
#line 31 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 32 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 35 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__i16_equals(litaC_i16 litaC_this,litaC_i16 litaC_other) {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 39 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__u16_hash(litaC_u16 litaC_this) {
#line 40 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 44 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__u16_equals(litaC_u16 litaC_this,litaC_u16 litaC_other) {
#line 45 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 48 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__i32_hash(litaC_i32 litaC_this) {
#line 49 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 50 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 53 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__i32_equals(litaC_i32 litaC_this,litaC_i32 litaC_other) {
#line 54 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__u32_hash(litaC_u32 litaC_this) {
#line 58 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 62 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__u32_equals(litaC_u32 litaC_this,litaC_u32 litaC_other) {
#line 63 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 66 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__i64_hash(litaC_i64 litaC_this) {
#line 67 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 71 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__i64_equals(litaC_i64 litaC_this,litaC_i64 litaC_other) {
#line 72 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__u64_hash(litaC_u64 litaC_this) {
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 80 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__u64_equals(litaC_u64 litaC_this,litaC_u64 litaC_other) {
#line 81 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 84 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__usize_hash(litaC_usize litaC_this) {
#line 85 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 86 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 89 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__usize_equals(litaC_usize litaC_this,litaC_usize litaC_other) {
#line 90 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 93 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__f32_hash(litaC_f32 litaC_this) {
#line 95 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 96 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 99 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__f32_equals(litaC_f32 litaC_this,litaC_f32 litaC_other) {
#line 100 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 103 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__f64_hash(litaC_f64 litaC_this) {
#line 105 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 109 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__f64_equals(litaC_f64 litaC_this,litaC_f64 litaC_other) {
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 122 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_std__hash__bool_hash(litaC_bool litaC_this) {
#line 123 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_u32 litaC_hash = (litaC_u32)(((litaC_usize)litaC_this) % 4294967291U);

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_hash;

}


#line 127 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
litaC_bool litaC_std__hash__bool_equals(litaC_bool litaC_this,litaC_bool litaC_other) {
#line 128 "/Users/tony/projects/litac-lang/stdlib/std/hash/hash.lita"
return litaC_this == litaC_other;

}


#line 29 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"

litaC_i32 litaC_std__unicode__utf8__Utf8Decode(const litaC_u8* litaC_str,litaC_i32 litaC_len,litaC_i32* litaC_codepoint) {
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
const litaC_u8* litaC_dest = (const litaC_u8*)utf8codepoint((const litaC_void*)litaC_str, litaC_codepoint);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return (litaC_i32)(litaC_dest - litaC_str);

}


#line 35 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_std__unicode__utf8__Utf8HexDecode(const litaC_char* litaC_str,litaC_i32 litaC_len) {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_char litaC_buffer[9] =  {0};

#line 37 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_len = (litaC_len == 4) ? 4 : 8;

#line 38 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_len;litaC_i += 1) {{
#line 39 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_buffer[litaC_i] = litaC_str[litaC_i];

}}

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_buffer[litaC_len] = '\0';

#line 43 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return (litaC_i32)strtol(litaC_buffer, NULL, 16);

}


#line 54 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"

litaC_i32 litaC_std__unicode__utf8__Utf8Encode(litaC_i32 litaC_codepoint,litaC_u8* litaC_dst) {
#line 56 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint < 0x00) {{
#line 57 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 0;


}
} else {
#line 59 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint < 0x80) {{
#line 60 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[0] = (litaC_u8)litaC_codepoint;

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 1;


}
} else {
#line 62 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint < 0x800) {{
#line 63 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[0] = (litaC_u8)(0xC0 + (litaC_codepoint >> 6));

#line 64 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[1] = (litaC_u8)(0x80 + (litaC_codepoint & 0x3F));

#line 65 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 2;


}
} else {
#line 68 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint < 0x10000) {{
#line 69 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[0] = (litaC_u8)(0xE0 + (litaC_codepoint >> 12));

#line 70 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[1] = (litaC_u8)(0x80 + ((litaC_codepoint >> 6) & 0x3F));

#line 71 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[2] = (litaC_u8)(0x80 + (litaC_codepoint & 0x3F));

#line 72 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 3;


}
} else {
#line 73 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint < 0x110000) {{
#line 74 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[0] = (litaC_u8)(0xF0 + (litaC_codepoint >> 18));

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[1] = (litaC_u8)(0x80 + ((litaC_codepoint >> 12) & 0x3F));

#line 76 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[2] = (litaC_u8)(0x80 + ((litaC_codepoint >> 6) & 0x3F));

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_dst[3] = (litaC_u8)(0x80 + (litaC_codepoint & 0x3F));

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 4;


}
} 
} 
} 
} 
} 


#line 80 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 0;

}


#line 87 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"

litaC_i32 litaC_std__unicode__utf8__Utf8CharWidth(litaC_i32 litaC_codepoint) {
#line 90 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint >= 32 && litaC_codepoint < 127) {return 1;

} 


#line 93 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint == 0) {return 0;

} 


#line 96 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint > 0 && litaC_codepoint < 32) {return -(1);

} 


#line 97 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint > 159 && litaC_codepoint < 256) {return -(1);

} 


#line 98 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint == 127) {return -(1);

} 


#line 101 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint == 0xD288 || litaC_codepoint == 0xD289 || litaC_codepoint == 0xE1AABE || 
#line 102 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
(litaC_codepoint >= 0xE2839D && litaC_codepoint <= 0xE283A4) || 
#line 103 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
(litaC_codepoint >= 0xEA99B0 && litaC_codepoint <= 0xEA99B2)) {{
#line 104 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 0;


}
} 


#line 107 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if((litaC_codepoint >= 0xCC80 && litaC_codepoint <= 0xCDAF) || 
#line 108 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
(litaC_codepoint >= 0xD283 && litaC_codepoint <= 0xD287) || 
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
(litaC_codepoint >= 0xD691 && litaC_codepoint <= 0xD787) || 
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
(litaC_codepoint >= 0xD890 && litaC_codepoint <= 0xDBAD) || 
#line 111 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
(litaC_codepoint >= 0xDC91) || 
#line 112 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
(litaC_codepoint >= 0xDCB0 && litaC_codepoint <= 0xDFBD)) {{
#line 113 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 0;


}
} 


#line 117 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint == 0xC2AD) {return 1;

} 


#line 121 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint == 0xE2808B) {{
#line 122 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 0;


}
} 


#line 126 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
if(litaC_codepoint >= 0xE185A0 && litaC_codepoint <= 0xE187BF) {{
#line 127 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 0;


}
} 


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return 1;

}


#line 137 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_bool litaC_std__unicode__utf8__Utf8CodepointValid(litaC_i32 litaC_codepoint) {
#line 138 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
return (((litaC_u32)litaC_codepoint) - 0xd800 > 0x07ff) && 
#line 139 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
(((litaC_u32)litaC_codepoint < 0x110000));

}


#line 169 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_void litaC_std__unicode__utf8__decode(const litaC_char* litaC_str) {
#line 170 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_r = 0;

#line 172 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_codepoint = (litaC_i32)strtol(litaC_str, NULL, 16);

#line 174 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
printf("%s = %d\n", litaC_str, litaC_codepoint);
}


#line 178 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"

litaC_void litaC_std__unicode__utf8__Test_Uf8Decode(void) {
#line 182 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_char litaC_xx = -30;

#line 186 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_u8 litaC_x[4] =  {0xe2,
0xb5,
0x9a,
0U};

#line 188 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_r = 0;

#line 189 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_len = litaC_std__unicode__utf8__Utf8Decode(litaC_x, litaC_std__string__char_length(((const litaC_char*)litaC_x)), &(litaC_r));

#line 190 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_width = litaC_std__unicode__utf8__Utf8CharWidth(litaC_r);

#line 191 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
printf("Hello '%s' Rune: %d Len: %d Width: %d ⵓ ⵙ\n", litaC_x, litaC_r, litaC_len, litaC_width);

#line 193 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_i32 litaC_codepoint = (litaC_i32)strtol("2D5A'", NULL, 16);

#line 194 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
printf("Codepoint: %d InString: '\u2d5a'Z\U0002B8B9z\n", litaC_codepoint);

#line 196 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_std__unicode__utf8__decode("0000");

#line 197 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_std__unicode__utf8__decode("009f");

#line 198 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_std__unicode__utf8__decode("0024");

#line 199 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_std__unicode__utf8__decode("0040");

#line 200 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
litaC_std__unicode__utf8__decode("0060");

#line 202 "/Users/tony/projects/litac-lang/stdlib/std/unicode/utf8/utf8.lita"
printf("\u2D59\n");
}


#line 68 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__u8_fromJson(litaC_u8* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 69 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 72 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_u8)litaC_std__json__JsonNode_asInt(litaC_json);
}


#line 74 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__i8_fromJson(litaC_i8* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 75 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 78 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_i8)litaC_std__json__JsonNode_asInt(litaC_json);
}


#line 80 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__u16_fromJson(litaC_u16* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 81 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 82 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 84 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_u16)litaC_std__json__JsonNode_asInt(litaC_json);
}


#line 86 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__i16_fromJson(litaC_i16* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 87 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 88 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 90 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_i16)litaC_std__json__JsonNode_asInt(litaC_json);
}


#line 92 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__u32_fromJson(litaC_u32* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 93 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 94 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 96 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_u32)litaC_std__json__JsonNode_asInt(litaC_json);
}


#line 98 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__i32_fromJson(litaC_i32* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 99 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 100 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 102 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_i32)litaC_std__json__JsonNode_asInt(litaC_json);
}


#line 104 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__u64_fromJson(litaC_u64* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 105 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 106 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 108 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_u64)litaC_std__json__JsonNode_asLong(litaC_json);
}


#line 110 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__i64_fromJson(litaC_i64* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 111 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 112 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 114 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_i64)litaC_std__json__JsonNode_asLong(litaC_json);
}


#line 116 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__usize_fromJson(litaC_usize* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 117 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 118 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 120 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_usize)litaC_std__json__JsonNode_asLong(litaC_json);
}


#line 123 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__f64_fromJson(litaC_f64* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 124 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 125 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 127 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_f64)litaC_std__json__JsonNode_asFloat(litaC_json);
}


#line 129 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__f32_fromJson(litaC_f32* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 130 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 131 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 133 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = (litaC_f32)litaC_std__json__JsonNode_asFloat(litaC_json);
}


#line 136 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__bool_fromJson(litaC_bool* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 137 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 138 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 140 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = litaC_std__json__JsonNode_asBool(litaC_json);
}


#line 143 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__char_fromJson(const litaC_char** litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 144 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 145 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 147 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = litaC_std__json__JsonNode_asString(litaC_json);
}


#line 150 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__String_fromJson(litaC_std__builtins__String* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 151 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 152 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 154 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = litaC_std__string__StringInit(litaC_std__json__JsonNode_asString(litaC_json), -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));
}


#line 157 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__StringBuffer_fromJson(litaC_std__string__buffer__StringBuffer* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 158 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 159 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 161 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_std__string__buffer__StringBuffer_format(litaC_this, "%s", litaC_std__json__JsonNode_asString(litaC_json));
}


#line 164 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__StringBuilder_fromJson(litaC_std__string__builder__StringBuilder* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 165 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 166 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 168 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_this, "%s", litaC_std__json__JsonNode_asString(litaC_json));
}


#line 171 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__DateTime_fromJson(litaC_std__time__DateTime* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 172 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json)) {{
#line 173 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 175 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
*(litaC_this) = litaC_std__time__DateTimeFromIso(litaC_std__string__char_toString(litaC_std__json__JsonNode_asString(litaC_json)));
}


#line 91 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__i64_toDateTime(litaC_i64 litaC_this) {
#line 92 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix__ToDateTime(litaC_this);

}


#line 95 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__OffsetDateTime litaC_std__time__DateTime_toOffsetDateTime(litaC_std__time__DateTime* litaC_this,litaC_std__time__Offset* litaC_offset) {
#line 96 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return (litaC_std__time__OffsetDateTime) {
#line 97 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
.dateTime = (*(litaC_this)),

#line 98 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
.offset = (litaC_offset != NULL) ? (*(litaC_offset)) : (litaC_std__time__Offset) {0}};

}


#line 102 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_i64 litaC_std__time__DateTime_toEpochTime(litaC_std__time__DateTime* litaC_this) {
#line 103 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix__ToEpochTime(litaC_this);

}


#line 106 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTimeStatus litaC_std__time__DateTime_format(litaC_std__time__DateTime* litaC_this,litaC_std__builtins__String litaC_format,litaC_std__string__buffer__StringBuffer* litaC_output) {
#line 107 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix__DateTimeFormat(
#line 108 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_this, 
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_format, 
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_output);

}


#line 114 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTime_add(litaC_std__time__DateTime* litaC_this,litaC_i32 litaC_amount,litaC_std__time__TimeUnit litaC_unit) {
#line 115 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix__DateTimeAdd(litaC_this, litaC_amount, litaC_unit);

}


#line 118 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTime_minus(litaC_std__time__DateTime* litaC_this,litaC_i32 litaC_amount,litaC_std__time__TimeUnit litaC_unit) {
#line 119 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix__DateTimeAdd(litaC_this, -(litaC_amount), litaC_unit);

}


#line 122 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_i32 litaC_std__time__DateTime_compare(litaC_std__time__DateTime* litaC_this,litaC_std__time__DateTime* litaC_other) {
#line 123 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return (litaC_i32)(litaC_std__time__DateTime_toEpochTime(litaC_this) - litaC_std__time__DateTime_toEpochTime(litaC_other));

}


#line 126 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTimeStatus litaC_std__time__DateTime_isoFormat(litaC_std__time__DateTime* litaC_this,litaC_std__string__buffer__StringBuffer* litaC_output) {
#line 127 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix__DateTimeFormat(
#line 128 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_this, 
#line 129 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__string__char_toString(litaC_std__time__ISO_8601_DATE_FORMAT), 
#line 130 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_output);

}


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_i64 litaC_std__time__Now(void) {
#line 135 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix___Now();

}


#line 138 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTimeNow(void) {
#line 139 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix___DateTimeNow();

}


#line 142 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTimeFrom(litaC_std__builtins__String litaC_format,litaC_std__builtins__String litaC_value) {
#line 143 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix___DateTimeFrom(
#line 144 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_format, 
#line 145 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_value);

}


#line 149 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_std__time__DateTimeFromIso(litaC_std__builtins__String litaC_value) {
#line 150 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
return litaC_std__time__time_posix___DateTimeFrom(
#line 151 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__string__char_toString(litaC_std__time__ISO_8601_DATE_FORMAT), 
#line 152 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_value);

}


#line 159 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"

litaC_void litaC_std__time__testDateTime(void) {
#line 160 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_i64 litaC_now = litaC_std__time__Now();

#line 161 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_dateTime = litaC_std__time__i64_toDateTime(litaC_now);

#line 163 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__string__builder__StringBuilder litaC_sb = litaC_std__string__builder__StringBuilderInit(1024, NULL);

#line 164 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime_isoFormat(&((litaC_dateTime)), &((litaC_sb.asBuffer)));

#line 169 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_std__time__DateTime_toEpochTime(&((litaC_dateTime))) == litaC_now, __FILE__, __LINE__);

#line 171 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_result = litaC_std__time__DateTimeFromIso(
#line 172 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__string__buffer__StringBuffer_toString(litaC_sb.asBuffer));

#line 174 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_std__time__DateTime_toEpochTime(&((litaC_result))) == litaC_std__time__DateTime_toEpochTime(&((litaC_dateTime))), __FILE__, __LINE__);

#line 175 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_std__time__DateTime_compare(&((litaC_result)), &((litaC_dateTime))) == 0, __FILE__, __LINE__);

#line 176 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_result.date.day += 2U;

#line 177 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_std__time__DateTime_compare(&((litaC_result)), &((litaC_dateTime))) > 0, __FILE__, __LINE__);

#line 179 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__time__DateTime litaC_birthday = litaC_std__time__DateTimeFromIso(
#line 180 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__string__char_toString("1967-02-20T13:23:22"));

#line 182 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_birthday.date.year == 1967, __FILE__, __LINE__);

#line 183 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_birthday.date.month == 2, __FILE__, __LINE__);

#line 184 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_birthday.date.day == 20, __FILE__, __LINE__);

#line 185 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_birthday.time.hour == 13, __FILE__, __LINE__);

#line 186 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_birthday.time.min == 23, __FILE__, __LINE__);

#line 187 "/Users/tony/projects/litac-lang/stdlib/std/time/time.lita"
litaC_std__assert__assert(litaC_birthday.time.sec == 22, __FILE__, __LINE__);
}


#line 46 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix__ToDateTime(litaC_i64 litaC_epoch) {
#line 47 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
tm_time* litaC_tm = gmtime((time_t*)(&(litaC_epoch)));

#line 49 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__FromTM(litaC_tm);

}


#line 53 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
LITAC_INLINE 
litaC_std__time__DateTime litaC_std__time__time_posix__FromTM(tm_time* litaC_tm) {
#line 54 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return (litaC_std__time__DateTime) {
#line 55 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
.time =  {
#line 56 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
.sec = (litaC_u8)litaC_tm->tm_sec,

#line 57 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
.min = (litaC_u8)litaC_tm->tm_min,

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
.hour = (litaC_u8)litaC_tm->tm_hour},

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
.date =  {
#line 61 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
.day = (litaC_u8)litaC_tm->tm_mday,

#line 62 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
.month = (litaC_u8)(litaC_tm->tm_mon + 1),

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
.year = litaC_tm->tm_year + 1900}};

}


#line 69 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
LITAC_INLINE 
tm_time* litaC_std__time__time_posix__ToTM(litaC_std__time__DateTime* litaC_dateTime,tm_time* litaC_tm) {
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm->tm_sec = litaC_dateTime->time.sec;

#line 71 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm->tm_min = litaC_dateTime->time.min;

#line 72 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm->tm_hour = litaC_dateTime->time.hour;

#line 73 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm->tm_mday = litaC_dateTime->date.day;

#line 74 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm->tm_mon = litaC_dateTime->date.month - 1;

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm->tm_year = litaC_dateTime->date.year - 1900;

#line 76 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_tm;

}


#line 79 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix__DateTimeAdd(litaC_std__time__DateTime* litaC_this,litaC_i64 litaC_amount,litaC_std__time__TimeUnit litaC_unit) {
#line 80 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
tm_time litaC_tm = {0};

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__time_posix__ToTM(litaC_this, &(litaC_tm));

#line 83 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
switch(litaC_unit) {
#line 84 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
case litaC_std__time__TimeUnit_NANOSECONDS: {{
#line 85 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
time_t litaC_epoch = timegm(&(litaC_tm));

#line 86 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_epoch += litaC_amount / 1000000L;

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__ToDateTime(litaC_epoch);


}

}

#line 89 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
case litaC_std__time__TimeUnit_MILLISECONDS: {{
#line 90 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
time_t litaC_epoch = timegm(&(litaC_tm));

#line 91 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_epoch += litaC_amount / 1000L;

#line 92 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__ToDateTime(litaC_epoch);


}

}

#line 94 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
case litaC_std__time__TimeUnit_SECONDS: {{
#line 95 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
time_t litaC_epoch = timegm(&(litaC_tm));

#line 96 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_epoch += litaC_amount;

#line 97 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__ToDateTime(litaC_epoch);


}

}

#line 99 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
case litaC_std__time__TimeUnit_MINUTES: {{
#line 100 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
time_t litaC_epoch = timegm(&(litaC_tm));

#line 101 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_epoch += litaC_amount * 60L;

#line 102 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__ToDateTime(litaC_epoch);


}

}

#line 104 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
case litaC_std__time__TimeUnit_HOURS: {{
#line 105 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
time_t litaC_epoch = timegm(&(litaC_tm));

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_epoch += litaC_amount * 3600L;

#line 107 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__ToDateTime(litaC_epoch);


}

}

#line 109 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
case litaC_std__time__TimeUnit_DAYS: {{
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm.tm_isdst = -(1);

#line 111 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm.tm_mday += (litaC_i32)litaC_amount;

#line 112 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__FromTM(&(litaC_tm));


}

}

#line 114 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
case litaC_std__time__TimeUnit_MONTHS: {{
#line 115 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm.tm_isdst = -(1);

#line 116 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm.tm_mon += (litaC_i32)litaC_amount;

#line 117 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__FromTM(&(litaC_tm));


}

}

#line 119 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
case litaC_std__time__TimeUnit_YEARS: {{
#line 120 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm.tm_isdst = -(1);

#line 121 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_tm.tm_year += (litaC_i32)litaC_amount;

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__FromTM(&(litaC_tm));


}

}
default: 
#line 124 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
{{
#line 125 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return *(litaC_this);


}

}}
}


#line 130 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_i64 litaC_std__time__time_posix__ToEpochTime(litaC_std__time__DateTime* litaC_dateTime) {
#line 131 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
tm_time litaC_tm =  {0};

#line 133 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
time_t litaC_epoch = timegm(litaC_std__time__time_posix__ToTM(litaC_dateTime, &(litaC_tm)));

#line 134 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return (litaC_i64)litaC_epoch;

}


#line 137 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_i64 litaC_std__time__time_posix___Now(void) {
#line 138 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
time_t litaC_now = time(NULL);

#line 139 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return (litaC_i64)litaC_now;

}


#line 142 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix___DateTimeNow(void) {
#line 143 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_i64 litaC_epoch = litaC_std__time__time_posix___Now();

#line 144 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__ToDateTime(litaC_epoch);

}


#line 147 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTimeStatus litaC_std__time__time_posix__DateTimeFormat(litaC_std__time__DateTime* litaC_dateTime,litaC_std__builtins__String litaC_format,litaC_std__string__buffer__StringBuffer* litaC_buffer) {
#line 150 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"

#line 151 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
if(!(litaC_dateTime)) {{
#line 152 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__DateTimeStatus_OK;


}
} 


#line 155 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_char litaC_resultStr[64] =  {0};

#line 157 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_char litaC_formatStr[32] =  {0};

#line 158 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__string__String_copyTo(litaC_format, litaC_formatStr, 31, litaC_true);

#line 160 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
tm_time litaC_tm =  {0};

#line 161 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_usize litaC_len = strftime(
#line 162 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_resultStr, sizeof(litaC_resultStr), 
#line 163 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_formatStr, 
#line 164 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__time_posix__ToTM(litaC_dateTime, &(litaC_tm)));

#line 167 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
if(litaC_len == 0) {{
#line 168 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__DateTimeStatus_INVALID_INPUT_FORMAT;


}
} 


#line 171 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__string__buffer__StringBuffer_appendStrn(litaC_buffer, litaC_resultStr, (litaC_i32)litaC_len);

#line 172 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__DateTimeStatus_OK;

}


#line 175 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__time__DateTime litaC_std__time__time_posix___DateTimeFrom(litaC_std__builtins__String litaC_format,litaC_std__builtins__String litaC_value) {
#line 177 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_char litaC_formatStr[32] =  {0};

#line 178 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__string__String_copyTo(litaC_format, litaC_formatStr, 31, litaC_true);

#line 180 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_char litaC_valueStr[64] =  {0};

#line 181 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
litaC_std__string__String_copyTo(litaC_value, litaC_valueStr, 63, litaC_true);

#line 183 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
tm_time litaC_tm =  {0};

#line 184 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
strptime(litaC_valueStr, litaC_formatStr, &(litaC_tm));

#line 186 "/Users/tony/projects/litac-lang/stdlib/std/time/time_posix.lita"
return litaC_std__time__time_posix__FromTM(&(litaC_tm));

}


#line 8 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__u8_toJson(litaC_u8 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%d", litaC_this);
}


#line 11 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__i8_toJson(litaC_i8 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%d", litaC_this);
}


#line 14 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__u16_toJson(litaC_u16 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 15 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%d", litaC_this);
}


#line 17 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__i16_toJson(litaC_i16 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 18 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%d", litaC_this);
}


#line 20 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__u32_toJson(litaC_u32 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 21 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%d", litaC_this);
}


#line 23 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__i32_toJson(litaC_i32 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 24 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%d", litaC_this);
}


#line 26 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__u64_toJson(litaC_u64 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 27 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%llu", litaC_this);
}


#line 29 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__i64_toJson(litaC_i64 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%lld", litaC_this);
}


#line 32 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__usize_toJson(litaC_usize litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 33 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%zu", litaC_this);
}


#line 36 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__f64_toJson(litaC_f64 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%f", litaC_this);
}


#line 39 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__f32_toJson(litaC_f32 litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 40 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%f", litaC_this);
}


#line 43 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__bool_toJson(litaC_bool litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 44 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "%s", (litaC_this) ? "true" : "false");
}


#line 47 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__char_toJson(const litaC_char* litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 48 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
if(!(litaC_this)) {{
#line 49 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "null");

}
} else {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
{
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "\"%s\"", litaC_this);

}} 

}


#line 56 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__String_toJson(litaC_std__builtins__String litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 57 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "\"%.*s\"", litaC_this.length, litaC_this.buffer);
}


#line 60 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__StringBuffer_toJson(litaC_std__string__buffer__StringBuffer litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 61 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "\"%.*s\"", litaC_this.length, litaC_this.buffer);
}


#line 64 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__StringBuilder_toJson(litaC_std__string__builder__StringBuilder litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 65 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "\"%.*s\"", litaC_this.asBuffer.length, litaC_this.asBuffer.buffer);
}


#line 68 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__DateTime_toJson(litaC_std__time__DateTime litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 69 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
if(!(litaC_std__string__builder__StringBuilder_reserve(litaC_sb, 64))) {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
return;


}
} 


#line 72 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__time__DateTime_isoFormat(&((litaC_this)), &(litaC_sb->asBuffer));
}


#line 23 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_void litaC_template__Template_init(litaC_template__Template* litaC_this,const litaC_std__mem__Allocator* litaC_allocator) {
#line 24 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_this->allocator = litaC_allocator;

#line 25 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_this->fileBuffer = litaC_std__string__builder__StringBuilderInit(1024, litaC_allocator);

#line 26 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_this->generatedCode = litaC_std__string__builder__StringBuilderInit(1024, litaC_allocator);

#line 28 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_this->templates = litaC_std__map__std__map__StringMap_cb_std__builtins__String_ce_((litaC_std__builtins__String) { .buffer = "", .length = 0 }, 16, litaC_allocator);
}


#line 31 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__Template_build(litaC_template__Template* litaC_this,litaC_std__builtins__String litaC_assetPath) {
#line 32 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_template__ScanForTemplates(litaC_this, litaC_assetPath);

}


#line 35 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__ScanForTemplates(litaC_template__Template* litaC_template,litaC_std__builtins__String litaC_assetPath) {
#line 36 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_char litaC_temp[
#line 36 "/Users/tony/projects/ringhttp/src/template.lita"
PATH_MAX] = {0};

#line 37 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__buffer__StringBuffer litaC_path = litaC_std__string__buffer__StringBufferInit(litaC_temp, PATH_MAX, 0);

#line 38 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__buffer__StringBuffer_append(&((litaC_path)), "%s", litaC_assetPath);

#line 40 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_template__ScanDirectory(litaC_template, &((litaC_path)));

}


#line 43 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__ScanDirectory(litaC_template__Template* litaC_template,litaC_std__string__buffer__StringBuffer* litaC_path) {
#line 44 "/Users/tony/projects/ringhttp/src/template.lita"
if(!(litaC_std__system__FileExists(litaC_std__string__buffer__StringBuffer_cStr(*((litaC_path)))))) {{
#line 45 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_ERROR_FILE_NOT_FOUND;


}
} 


#line 48 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__fs__FileHandle litaC_templateDir =  {0};

#line 50 "/Users/tony/projects/ringhttp/src/template.lita"
if((
#line 49 "/Users/tony/projects/ringhttp/src/template.lita"
!(litaC_std__fs__FileHandle_open(&((litaC_templateDir)), litaC_std__string__buffer__StringBuffer_toString(*((litaC_path))))))) {
#line 50 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_ERROR_FILE_NOT_FOUND;
}


#line 51 "/Users/tony/projects/ringhttp/src/template.lita"


#line 53 "/Users/tony/projects/ringhttp/src/template.lita"
while(litaC_std__fs__FileHandle_next(&((litaC_templateDir)))) {{
#line 54 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_i32 litaC_len = litaC_path->length;

#line 55 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__buffer__StringBuffer_append(litaC_path, "/%s", litaC_std__fs__FileHandle_name(&((litaC_templateDir))));

#line 56 "/Users/tony/projects/ringhttp/src/template.lita"


#line 58 "/Users/tony/projects/ringhttp/src/template.lita"
if(litaC_std__fs__FileHandle_isDirectory(&((litaC_templateDir)))) {{
#line 60 "/Users/tony/projects/ringhttp/src/template.lita"

#line 59 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_status = litaC_template__ScanDirectory(litaC_template, litaC_path);
if(litaC_status) {
#line 60 "/Users/tony/projects/ringhttp/src/template.lita"
{litaC_http_common__Status ___result = litaC_status;

#line 56 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_path->length = litaC_len;

#line 51 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__fs__FileHandle_close(&((litaC_templateDir)));
return ___result;
}
}


}
} 


#line 63 "/Users/tony/projects/ringhttp/src/template.lita"
if(litaC_std__fs__FileHandle_isFile(&((litaC_templateDir)))) {{
#line 64 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_fileName = litaC_std__string__char_toString(litaC_std__fs__FileHandle_name(&((litaC_templateDir))));

#line 65 "/Users/tony/projects/ringhttp/src/template.lita"
if(!(litaC_std__string__String_endsWith(litaC_fileName, (litaC_std__builtins__String) { .buffer = ".lt", .length = 3 }))) {{
#line 66 "/Users/tony/projects/ringhttp/src/template.lita"

#line 56 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_path->length = litaC_len;
continue;

}
} 


#line 69 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder_clear(&((litaC_template->fileBuffer)));

#line 72 "/Users/tony/projects/ringhttp/src/template.lita"

#line 71 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__io__FileStatus litaC_status = litaC_std__io__ReadFileFully(litaC_std__string__buffer__StringBuffer_cStr(*((litaC_path))), &((litaC_template->fileBuffer)));
if(litaC_status) {
#line 72 "/Users/tony/projects/ringhttp/src/template.lita"
{litaC_http_common__Status ___result = litaC_http_common__Status_ERROR_FILE_NOT_FOUND;

#line 56 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_path->length = litaC_len;

#line 51 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__fs__FileHandle_close(&((litaC_templateDir)));
return ___result;
}
}


#line 79 "/Users/tony/projects/ringhttp/src/template.lita"

#line 74 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_templateStatus = litaC_template__GenerateFromTemplate(
#line 75 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_template->allocator, 
#line 76 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_fileName, 
#line 77 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__buffer__StringBuffer_toString(litaC_template->fileBuffer.asBuffer), 
#line 78 "/Users/tony/projects/ringhttp/src/template.lita"
&(litaC_template->generatedCode));
if(litaC_templateStatus) {
#line 79 "/Users/tony/projects/ringhttp/src/template.lita"
{litaC_http_common__Status ___result = litaC_templateStatus;

#line 56 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_path->length = litaC_len;

#line 51 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__fs__FileHandle_close(&((litaC_templateDir)));
return ___result;
}
}


}
} 


#line 56 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_path->length = litaC_len;

}}

#line 82 "/Users/tony/projects/ringhttp/src/template.lita"
{litaC_http_common__Status ___result = litaC_http_common__Status_OK;

#line 51 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__fs__FileHandle_close(&((litaC_templateDir)));
return ___result;
}

litaC_std__fs__FileHandle_close(&((litaC_templateDir)));
}


#line 85 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__LoadTemplate(const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String litaC_path,litaC_std__string__builder__StringBuilder* litaC_fileBuffer,litaC_std__string__builder__StringBuilder* litaC_output) {
#line 90 "/Users/tony/projects/ringhttp/src/template.lita"

#line 93 "/Users/tony/projects/ringhttp/src/template.lita"

#line 92 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__io__FileStatus litaC_status = litaC_std__io__ReadFileFullyStr(litaC_path, litaC_fileBuffer);
if(litaC_status) {
#line 93 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_ERROR_FILE_NOT_FOUND;
}


#line 99 "/Users/tony/projects/ringhttp/src/template.lita"

#line 95 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_templateStatus = litaC_template__GenerateBody(
#line 96 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_allocator, 
#line 97 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__buffer__StringBuffer_toString(litaC_fileBuffer->asBuffer), 
#line 98 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_output);
if(litaC_templateStatus) {
#line 99 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_templateStatus;
}


#line 101 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_OK;

}


#line 104 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__GenerateFromTemplate(const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String litaC_name,litaC_std__builtins__String litaC_template,litaC_std__string__builder__StringBuilder* litaC_output) {
#line 109 "/Users/tony/projects/ringhttp/src/template.lita"

#line 111 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_sname = litaC_template__SanatizeName(litaC_name);

#line 113 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder_append(litaC_output, "\n    public func %.*s_WriteTemplate<T>(\n        resp: *HttpResponse,\n        input: T\n    ) : Status {\n        var out = resp.body\n    ", 
#line 119 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_sname.length, litaC_sname.buffer);

#line 122 "/Users/tony/projects/ringhttp/src/template.lita"

#line 121 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_status = litaC_template__GenerateBody(litaC_allocator, litaC_template, litaC_output);
if(litaC_status) {
#line 122 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_status;
}


#line 124 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder_append(litaC_output, "\n        return Status.OK\n    }\n    ");

#line 129 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_OK;

}


#line 132 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__GenerateBody(const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String litaC_template,litaC_std__string__builder__StringBuilder* litaC_output) {
#line 136 "/Users/tony/projects/ringhttp/src/template.lita"

#line 137 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__SplitIter litaC_iter = litaC_std__string__String_split(litaC_template, (litaC_std__builtins__String) { .buffer = "<%", .length = 2 });

#line 138 "/Users/tony/projects/ringhttp/src/template.lita"
while(litaC_std__string__SplitIter_hasNext(&((litaC_iter)))) {{
#line 139 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_s = litaC_std__string__String_trim(litaC_std__string__SplitIter_next(&((litaC_iter))));

#line 141 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder_append(litaC_output, 
#line 142 "/Users/tony/projects/ringhttp/src/template.lita"
"\n        output.append(\"%%s\", \"\"\"%.*s\"\"\")\n", 
#line 143 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_s.length, litaC_s.buffer);

#line 146 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_extra = litaC_std__string__SplitIter_remaining(&((litaC_iter)));

#line 147 "/Users/tony/projects/ringhttp/src/template.lita"
if(!(litaC_std__string__String_empty(litaC_extra))) {{
#line 148 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_i32 litaC_endIndex = litaC_std__string__String_indexOf(litaC_extra, (litaC_std__builtins__String) { .buffer = "%>", .length = 2 });

#line 149 "/Users/tony/projects/ringhttp/src/template.lita"
if(litaC_endIndex < 0) {{
#line 150 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_ERROR_TEMPLATE_NO_END_TAG;


}
} 


#line 154 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_i32 litaC_startIndex = litaC_std__string__String_indexOf(litaC_extra, (litaC_std__builtins__String) { .buffer = "<%", .length = 2 });

#line 155 "/Users/tony/projects/ringhttp/src/template.lita"
if(litaC_startIndex > -(1) && litaC_startIndex < litaC_endIndex) {{
#line 156 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_ERROR_TEMPLATE_START_TAG_BEFORE_END_TAG;


}
} 


#line 160 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_code = litaC_std__string__String_substring(litaC_extra, 0, litaC_endIndex);

#line 162 "/Users/tony/projects/ringhttp/src/template.lita"

#line 161 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_status = litaC_template__HandleDirective(litaC_allocator, &(litaC_code), litaC_output);
if(litaC_status) {
#line 162 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_status;
}


#line 164 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder_append(litaC_output, "%.*s\n", litaC_code.length, litaC_code.buffer);

#line 167 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_iter = litaC_std__string__String_split(litaC_std__string__String_substring(litaC_extra, litaC_endIndex + 2, -(
#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)), 
#line 167 "/Users/tony/projects/ringhttp/src/template.lita"
(litaC_std__builtins__String) { .buffer = "<%", .length = 2 });

}
} 


}}

#line 170 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_OK;

}


#line 174 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_template__HandleDirective(const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String* litaC_code,litaC_std__string__builder__StringBuilder* litaC_output) {
#line 178 "/Users/tony/projects/ringhttp/src/template.lita"

#line 179 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_block = *(litaC_code);

#line 180 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_block = litaC_std__string__String_trim(litaC_block);

#line 181 "/Users/tony/projects/ringhttp/src/template.lita"
printf("Processing: '%.*s'\n", litaC_block.length, litaC_block.buffer);

#line 183 "/Users/tony/projects/ringhttp/src/template.lita"
if(!(litaC_std__string__String_startsWith(litaC_block, (litaC_std__builtins__String) { .buffer = "$", .length = 1 }, 0))) {{
#line 184 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_OK;


}
} 


#line 186 "/Users/tony/projects/ringhttp/src/template.lita"
printf("**********************\n");

#line 188 "/Users/tony/projects/ringhttp/src/template.lita"
if(litaC_std__string__String_startsWith(litaC_block, (litaC_std__builtins__String) { .buffer = "$load ", .length = 6 }, 0)) {{
#line 189 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_i32 litaC_index = litaC_std__string__String_endIndexOf(litaC_block, (litaC_std__builtins__String) { .buffer = "$load ", .length = 6 });

#line 190 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__assert__assert(litaC_index > -(1), __FILE__, __LINE__);

#line 192 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_filename = litaC_template__ReadString(litaC_std__string__String_substring(litaC_block, litaC_index, -(
#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1)));

#line 193 "/Users/tony/projects/ringhttp/src/template.lita"
if(litaC_std__string__String_empty(litaC_filename)) {{
#line 194 "/Users/tony/projects/ringhttp/src/template.lita"
printf(
#line 195 "/Users/tony/projects/ringhttp/src/template.lita"
"The template command '$load' must be followed by a string representing the file path to the template to load");

#line 197 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_ERROR_TEMPLATE_INVALID_COMMAND;


}
} 


#line 200 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder litaC_fileBuffer = litaC_std__string__builder__StringBuilderInit(1024, litaC_allocator);

#line 206 "/Users/tony/projects/ringhttp/src/template.lita"

#line 201 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_status = litaC_template__LoadTemplate(
#line 202 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_allocator, 
#line 203 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_filename, 
#line 204 "/Users/tony/projects/ringhttp/src/template.lita"
&((litaC_fileBuffer)), 
#line 205 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_output);
if(litaC_status) {
#line 206 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_status;
}


#line 208 "/Users/tony/projects/ringhttp/src/template.lita"
*(litaC_code) = litaC_std__string__String_substring(litaC_block, litaC_index + litaC_filename.length + 2, -(
#line 34 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

}
} 


#line 210 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_http_common__Status_OK;

}


#line 213 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_template__ReadString(litaC_std__builtins__String litaC_str) {
#line 214 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_str = litaC_std__string__String_trim(litaC_str);

#line 215 "/Users/tony/projects/ringhttp/src/template.lita"
if(litaC_str.buffer[0] != '"') {{
#line 216 "/Users/tony/projects/ringhttp/src/template.lita"
return (litaC_std__builtins__String) {0};


}
} 


#line 219 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_i32 litaC_length = 0;

#line 220 "/Users/tony/projects/ringhttp/src/template.lita"
for(litaC_i32 litaC_i = 1;litaC_i < litaC_str.length;litaC_i += 1) {{
#line 221 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_char litaC_c = litaC_str.buffer[litaC_i];

#line 222 "/Users/tony/projects/ringhttp/src/template.lita"
if(litaC_c == '"') {{
#line 223 "/Users/tony/projects/ringhttp/src/template.lita"
break;

}
} 


#line 225 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_length += 1;

}}

#line 227 "/Users/tony/projects/ringhttp/src/template.lita"
return (litaC_std__builtins__String) {
#line 228 "/Users/tony/projects/ringhttp/src/template.lita"
.buffer = litaC_str.buffer + 1,

#line 229 "/Users/tony/projects/ringhttp/src/template.lita"
.length = litaC_length};

}


#line 234 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__builtins__String litaC_template__SanatizeName(litaC_std__builtins__String litaC_name) {
#line 236 "/Users/tony/projects/ringhttp/src/template.lita"

#line 237 "/Users/tony/projects/ringhttp/src/template.lita"
static 
litaC_char litaC_buffer[
#line 238 "/Users/tony/projects/ringhttp/src/template.lita"
PATH_MAX] = {0};

#line 240 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__buffer__StringBuffer litaC_str = litaC_std__string__buffer__StringBufferInit(litaC_buffer, PATH_MAX, 0);

#line 241 "/Users/tony/projects/ringhttp/src/template.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_name.length;litaC_i += 1) {{
#line 242 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_char litaC_c = litaC_name.buffer[litaC_i];

#line 243 "/Users/tony/projects/ringhttp/src/template.lita"
if(!(litaC_std__ascii__char_isAlphanumeric(litaC_c))) {{
#line 244 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_c = '_';

}
} 


#line 246 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__buffer__StringBuffer_appendChar(&((litaC_str)), litaC_c);

}}

#line 248 "/Users/tony/projects/ringhttp/src/template.lita"
return litaC_std__string__buffer__StringBuffer_toString(litaC_str);

}


#line 252 "/Users/tony/projects/ringhttp/src/template.lita"

litaC_void litaC_template__testTemplate(void) {
#line 254 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__builder__StringBuilder litaC_output = litaC_std__string__builder__StringBuilderInit(1024, NULL);

#line 255 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_http_common__Status litaC_status = litaC_template__GenerateFromTemplate(
#line 256 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__mem__defaultAllocator, 
#line 257 "/Users/tony/projects/ringhttp/src/template.lita"
(litaC_std__builtins__String) { .buffer = "Tony", .length = 4 }, 
#line 258 "/Users/tony/projects/ringhttp/src/template.lita"
litaC_std__string__char_toString("\n        <html>\n            <%@import \"/title.lt\" %>\n            <body>\n                <%\n                    for(var i = 0; i < input.length; i+=1) {\n                        var element = input.getPtr(i)\n                %>\n                        <li>\n                            <% out.append(\"%.*s\", element.name.length, element.name.buffer) %>\n                        </li>\n                <%\n                    }\n                %>\n            </body>\n        </html>\n        "), 
#line 275 "/Users/tony/projects/ringhttp/src/template.lita"
&((litaC_output)));

#line 277 "/Users/tony/projects/ringhttp/src/template.lita"
printf("Status: %s\n", litaC_http_common__StatusAsStr(litaC_status));

#line 278 "/Users/tony/projects/ringhttp/src/template.lita"
printf("%.*s\n", litaC_output.asBuffer.length, litaC_output.asBuffer.buffer);
}


#line 21 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__io__FileStatus litaC_std__fs__ListFiles(litaC_std__builtins__String litaC_path,litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_result,litaC_i32 litaC_flags,const litaC_std__mem__Allocator* litaC_allocator) {
#line 26 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(litaC_result->capacity == 0) {{
#line 29 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
*(litaC_result) = litaC_std__array__std__array__ArrayInit_cb_std__builtins__String_ce_(32, litaC_allocator);

}
} 


#line 32 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_std__fs__WalkDir(litaC_path, litaC_result, litaC_flags, litaC_allocator);

}


#line 35 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__io__FileStatus litaC_std__fs__WalkDir(litaC_std__builtins__String litaC_path,litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_result,litaC_i32 litaC_flags,const litaC_std__mem__Allocator* litaC_allocator) {
#line 40 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"

#line 41 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__fs__FileHandle litaC_handle =  {0};

#line 42 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"


#line 44 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(!(litaC_std__fs__FileHandle_open(&((litaC_handle)), litaC_path))) {{
#line 45 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_FileNotFoundError;

#line 42 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__fs__FileHandle_close(&((litaC_handle)));
return ___result;
}


}
} 


#line 48 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
while(litaC_std__fs__FileHandle_next(&((litaC_handle)))) {{
#line 49 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__builtins__String litaC_name = litaC_std__string__char_toString(litaC_std__fs__FileHandle_name(&((litaC_handle))));

#line 51 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__string__builder__StringBuilder litaC_sb = litaC_std__string__builder__StringBuilderInit(litaC_path.length + litaC_name.length + 1, litaC_allocator);

#line 52 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__string__builder__StringBuilder_append(&((litaC_sb)), "%.*s/%.*s", litaC_path.length, litaC_path.buffer, litaC_name.length, litaC_name.buffer);

#line 54 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(litaC_std__fs__FileHandle_isDirectory(&((litaC_handle))) && litaC_flags & litaC_std__fs__ListFileFlags_RECURSE_DIRECTORIES) {{
#line 55 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__io__FileStatus litaC_status = litaC_std__fs__WalkDir(litaC_std__string__buffer__StringBuffer_toString(litaC_sb.asBuffer), litaC_result, litaC_flags, litaC_allocator);

#line 56 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(litaC_status != litaC_std__io__FileStatus_Ok) {{
#line 57 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
{litaC_std__io__FileStatus ___result = litaC_status;

#line 42 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__fs__FileHandle_close(&((litaC_handle)));
return ___result;
}


}
} 


}
} else {
#line 60 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
{
#line 61 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__array__std__array__Array_add_cb_std__builtins__String_ce_(litaC_result, litaC_std__string__buffer__StringBuffer_toString(litaC_sb.asBuffer));

}} 


}}

#line 64 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
{litaC_std__io__FileStatus ___result = litaC_std__io__FileStatus_Ok;

#line 42 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__fs__FileHandle_close(&((litaC_handle)));
return ___result;
}

litaC_std__fs__FileHandle_close(&((litaC_handle)));
}


#line 72 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_open(litaC_std__fs__FileHandle* litaC_this,litaC_std__builtins__String litaC_path) {
#line 73 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(litaC_path.length > PATH_MAX) {{
#line 74 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_false;


}
} 


#line 77 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_char litaC_temp[
#line 77 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
PATH_MAX] = {0};

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__string__buffer__StringBuffer litaC_str = litaC_std__string__buffer__StringBufferInit(litaC_temp, PATH_MAX, 0);

#line 79 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__string__buffer__StringBuffer_format(&((litaC_str)), "%.*s", litaC_path.length, litaC_path.buffer);

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(tinydir_open(&(litaC_this->dir), litaC_std__string__buffer__StringBuffer_cStr(litaC_str)) == -(1)) {{
#line 82 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__fs__FileHandle_close(litaC_this);

#line 83 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_false;


}
} 


#line 86 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_true;

}


#line 89 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_isFile(litaC_std__fs__FileHandle* litaC_this) {
#line 90 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_this->file.is_reg;

}


#line 93 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_isDirectory(litaC_std__fs__FileHandle* litaC_this) {
#line 94 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_this->file.is_dir;

}


#line 97 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
const litaC_char* litaC_std__fs__FileHandle_name(litaC_std__fs__FileHandle* litaC_this) {
#line 98 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_this->file.name;

}


#line 101 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_hasNext(litaC_std__fs__FileHandle* litaC_this) {
#line 102 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_this->dir.has_next;

}


#line 105 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_next(litaC_std__fs__FileHandle* litaC_this) {
#line 106 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_nextFileFound = litaC_false;

#line 107 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
while(litaC_this->dir.has_next && !(litaC_nextFileFound)) {{
#line 108 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(tinydir_readfile(&(litaC_this->dir), &(litaC_this->file)) == -(1)) {{
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_false;


}
} 


#line 112 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_nextFileFound = litaC_true;

#line 113 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(litaC_std__string__StringEqualLen(litaC_this->file.name, "..", PATH_MAX)) {{
#line 114 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_nextFileFound = litaC_false;

}
} 


#line 117 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(litaC_std__string__StringEqualLen(litaC_this->file.name, ".", PATH_MAX)) {{
#line 118 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_nextFileFound = litaC_false;

}
} 


#line 121 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(tinydir_next(&(litaC_this->dir)) == -(1)) {{
#line 122 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_false;


}
} 


}}

#line 126 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_nextFileFound;

}


#line 129 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_bool litaC_std__fs__FileHandle_close(litaC_std__fs__FileHandle* litaC_this) {
#line 130 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
tinydir_close(&(litaC_this->dir));

#line 131 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
return litaC_true;

}


#line 137 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"

litaC_void litaC_std__fs__testFileHandle(void) {
#line 139 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
tinydir_dir litaC_dir = {0};

#line 140 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
tinydir_file litaC_file = {0};

#line 141 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_i32 litaC_result = tinydir_open(&(litaC_dir), "/home/tony/projects/ring-http/.pkgs/liburing");

#line 142 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("Result: %d\n", litaC_result);

#line 144 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
while(litaC_dir.has_next) {{
#line 145 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_result = tinydir_readfile(&(litaC_dir), &(litaC_file));

#line 146 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("Read File Result: %d\n", litaC_result);

#line 147 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("Name: '%s'\n", litaC_file.name);

#line 149 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
tinydir_next(&(litaC_dir));

}}

#line 152 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("~~~~~~~~\n");

#line 154 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
litaC_std__fs__FileHandle litaC_handle = {0};
{
}

#line 155 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(!(litaC_std__fs__FileHandle_open(&((litaC_handle)), (litaC_std__builtins__String) { .buffer = "/home/tony/projects/ring-http/.pkgs/liburing", .length = 44 }))) {{
#line 156 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("Failed to open\n");

}
} 


#line 159 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("Name: '%s'\n", litaC_std__fs__FileHandle_name(&((litaC_handle))));

#line 161 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
while(litaC_std__fs__FileHandle_next(&((litaC_handle)))) {{
#line 163 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
{
#line 164 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("visiting '%s'", litaC_std__fs__FileHandle_name(&((litaC_handle))));

#line 166 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
if(litaC_std__fs__FileHandle_isDirectory(&((litaC_handle)))) {{
#line 167 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("/");

}
} 


#line 169 "/Users/tony/projects/litac-lang/stdlib/std/fs/fs.lita"
printf("\n");

}

}}
}


#line 1 "/Users/tony/projects/ringhttp/src/http_common.lita"
const litaC_char* litaC_http_common__StatusAsStr(litaC_http_common__Status litaC_enumType) {
#line 2 "/Users/tony/projects/ringhttp/src/http_common.lita"
switch(litaC_enumType) {
#line 3 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_OK: {return "OK";


}

#line 4 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_OUT_OF_MEMORY: {return "ERROR_OUT_OF_MEMORY";


}

#line 5 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_CREATING_THREAD: {return "ERROR_CREATING_THREAD";


}

#line 6 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_UNABLE_TO_CREATE_SERVER_SOCKET: {return "ERROR_UNABLE_TO_CREATE_SERVER_SOCKET";


}

#line 7 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_CREATING_ADDRESS: {return "ERROR_CREATING_ADDRESS";


}

#line 8 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_SOCKET_BIND: {return "ERROR_SOCKET_BIND";


}

#line 9 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_SOCKET_LISTEN: {return "ERROR_SOCKET_LISTEN";


}

#line 10 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_FILE_NOT_FOUND: {return "ERROR_FILE_NOT_FOUND";


}

#line 11 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_IO_ERROR: {return "ERROR_IO_ERROR";


}

#line 12 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_IOURING_ERROR: {return "ERROR_IOURING_ERROR";


}

#line 13 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_PIPE_ERROR: {return "ERROR_PIPE_ERROR";


}

#line 14 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_PARSING_HTTP_REQUEST: {return "ERROR_PARSING_HTTP_REQUEST";


}

#line 15 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_UNSUPPORTED_METHOD: {return "ERROR_UNSUPPORTED_METHOD";


}

#line 16 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_REQUEST_PATH_NOT_ALLOWED: {return "ERROR_REQUEST_PATH_NOT_ALLOWED";


}

#line 17 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_UNKNOWN_BODY_LENGTH: {return "ERROR_UNKNOWN_BODY_LENGTH";


}

#line 18 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_INVALID_REQUEST_PATH: {return "ERROR_INVALID_REQUEST_PATH";


}

#line 19 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_INVALID_REQUEST_PATH_EXCEEDED_LIMIT: {return "ERROR_INVALID_REQUEST_PATH_EXCEEDED_LIMIT";


}

#line 20 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_INVALID_HEADER_EXCEEDED_LIMIT: {return "ERROR_INVALID_HEADER_EXCEEDED_LIMIT";


}

#line 21 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_INVALID_BODY_EXCEEDED_LIMIT: {return "ERROR_INVALID_BODY_EXCEEDED_LIMIT";


}

#line 22 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_NO_ROUTE_FOUND: {return "ERROR_NO_ROUTE_FOUND";


}

#line 23 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_NO_STREAM_HANDLER_FOUND: {return "ERROR_NO_STREAM_HANDLER_FOUND";


}

#line 24 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_UNABLE_TO_REGISTER_HANDLER: {return "ERROR_UNABLE_TO_REGISTER_HANDLER";


}

#line 25 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_CONTROLLER_CALLBACK_ERROR: {return "ERROR_CONTROLLER_CALLBACK_ERROR";


}

#line 26 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_PARTIAL_REQUEST_DISPATCHING_READ: {return "PARTIAL_REQUEST_DISPATCHING_READ";


}

#line 27 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_UNSUPPORTED_UPGRADE_PROTOCOL: {return "ERROR_UNSUPPORTED_UPGRADE_PROTOCOL";


}

#line 28 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_WEB_SOCKET_SECURITY_KEY: {return "ERROR_WEB_SOCKET_SECURITY_KEY";


}

#line 29 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_WEB_SOCKET_FRAME: {return "ERROR_WEB_SOCKET_FRAME";


}

#line 30 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_WEB_SOCKET_FRAME_LENGTH: {return "ERROR_WEB_SOCKET_FRAME_LENGTH";


}

#line 31 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_WEB_SOCKET_HANDLE_FRAME_ERROR: {return "ERROR_WEB_SOCKET_HANDLE_FRAME_ERROR";


}

#line 32 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_PARTIAL_WEB_SOCKET_DISPATCHING_READ: {return "PARTIAL_WEB_SOCKET_DISPATCHING_READ";


}

#line 33 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_WEB_SOCKET_CLOSED: {return "WEB_SOCKET_CLOSED";


}

#line 34 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_TEMPLATE_NO_END_TAG: {return "ERROR_TEMPLATE_NO_END_TAG";


}

#line 35 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_TEMPLATE_START_TAG_BEFORE_END_TAG: {return "ERROR_TEMPLATE_START_TAG_BEFORE_END_TAG";


}

#line 36 "/Users/tony/projects/ringhttp/src/http_common.lita"
case litaC_http_common__Status_ERROR_TEMPLATE_INVALID_COMMAND: {return "ERROR_TEMPLATE_INVALID_COMMAND";


}
default: 
#line 37 "/Users/tony/projects/ringhttp/src/http_common.lita"
{return NULL;


}}
}


#line 1 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
const litaC_char* litaC_std__json__JsonTypeAsStr(litaC_std__json__JsonType litaC_enumType) {
#line 2 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
switch(litaC_enumType) {
#line 3 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_NULL: {return "NULL";


}

#line 4 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_BOOLEAN: {return "BOOLEAN";


}

#line 5 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_INT_NUMBER: {return "INT_NUMBER";


}

#line 6 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_FLOAT_NUMBER: {return "FLOAT_NUMBER";


}

#line 7 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_STRING: {return "STRING";


}

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_OBJECT: {return "OBJECT";


}

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
case litaC_std__json__JsonType_ARRAY: {return "ARRAY";


}
default: 
#line 10 "/Users/tony/projects/litac-lang/stdlib/std/json/json.lita"
{return NULL;


}}
}


#line 1 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
const litaC_char* litaC_std__terminal__ConsoleColorsAsStr(litaC_std__terminal__ConsoleColors litaC_enumType) {
#line 2 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
switch(litaC_enumType) {
#line 3 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_CLEAR: {return "\x1b[0m";


}

#line 4 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_BLACK: {return "\x1b[38;5;0m";


}

#line 5 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_RED: {return "\x1b[38;5;1m";


}

#line 6 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_GREEN: {return "\x1b[38;5;2m";


}

#line 7 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_YELLOW: {return "\x1b[38;5;3m";


}

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_BLUE: {return "\x1b[38;5;4m";


}

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_MAGENTA: {return "\x1b[38;5;5m";


}

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_CYAN: {return "\x1b[38;5;6m";


}

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
case litaC_std__terminal__ConsoleColors_WHITE: {return "\x1b[38;5;7m";


}
default: 
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/terminal.lita"
{return NULL;


}}
}


#line 1 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
const litaC_char* litaC_std__io__FileStatusAsStr(litaC_std__io__FileStatus litaC_enumType) {
#line 2 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
switch(litaC_enumType) {
#line 3 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileStatus_Ok: {return "Ok";


}

#line 4 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileStatus_FileNotFoundError: {return "FileNotFoundError";


}

#line 5 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileStatus_IOError: {return "IOError";


}

#line 6 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileStatus_OutOfMemory: {return "OutOfMemory";


}

#line 7 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileStatus_BufferOverflow: {return "BufferOverflow";


}

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
case litaC_std__io__FileStatus_EndOfFile: {return "EndOfFile";


}
default: 
#line 9 "/Users/tony/projects/litac-lang/stdlib/std/io/io.lita"
{return NULL;


}}
}


#line 1 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_bool litaC_std__test__TestInfoMessage_fromJson(litaC_std__test__TestInfoMessage* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 2 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(!(litaC_json)) {return litaC_true;

} 

const litaC_char** litaC_typeField = &(litaC_this->type);

#line 3 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__json__from_json__char_fromJson(litaC_typeField, litaC_context, litaC_std__json__JsonNode_get(litaC_json, "type"));

#line 4 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
const litaC_char** litaC_nameField = &(litaC_this->name);

#line 5 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__json__from_json__char_fromJson(litaC_nameField, litaC_context, litaC_std__json__JsonNode_get(litaC_json, "name"));

#line 6 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestStatus* litaC_statusField = &(litaC_this->status);

#line 7 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestStatus_fromJson(litaC_statusField, litaC_context, litaC_std__json__JsonNode_get(litaC_json, "status"));

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_errorsField = &(litaC_this->errors);

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__json__from_json__std__json__from_json__Array_fromJson_cb__ptr_const_char_ce_(litaC_errorsField, litaC_context, litaC_std__json__JsonNode_get(litaC_json, "errors"));

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_f64* litaC_durationMSecField = &(litaC_this->durationMSec);

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__json__from_json__f64_fromJson(litaC_durationMSecField, litaC_context, litaC_std__json__JsonNode_get(litaC_json, "durationMSec"));

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_true;

}


#line 1 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_bool litaC_std__test__TestInfoMessage_toJson(litaC_std__test__TestInfoMessage* litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 2 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "{");

#line 3 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "\"%s\":", "type");

#line 4 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__json__to_json__char_toJson(litaC_this->type, litaC_sb);

#line 5 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, ",\"%s\":", "name");

#line 6 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__json__to_json__char_toJson(litaC_this->name, litaC_sb);

#line 7 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, ",\"%s\":", "status");

#line 8 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__test__TestStatus_toJson(&((litaC_this->status)), litaC_sb);

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, ",\"%s\":", "errors");

#line 10 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__json__to_json__std__json__to_json__Array_toJson_cb__ptr_const_char_ce_(&((litaC_this->errors)), litaC_sb);

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, ",\"%s\":", "durationMSec");

#line 12 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__json__to_json__f64_toJson(litaC_this->durationMSec, litaC_sb);

#line 13 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "}");

#line 14 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_true;

}


#line 1 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_bool litaC_std__test__TestStatus_fromJson(litaC_std__test__TestStatus* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 2 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(!(litaC_json)) {return litaC_true;

} 

litaC_std__builtins__String litaC_value = litaC_std__string__char_toString(litaC_std__json__JsonNode_asString(litaC_json));

#line 3 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(litaC_std__string__String_equals((litaC_std__builtins__String) { .buffer = "SUCCESS", .length = 7 }, litaC_value)) {{
#line 4 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
*(litaC_this) = litaC_std__test__TestStatus_SUCCESS;

#line 5 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_true;


}
} else {
#line 7 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(litaC_std__string__String_equals((litaC_std__builtins__String) { .buffer = "FAILED", .length = 6 }, litaC_value)) {{
#line 8 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
*(litaC_this) = litaC_std__test__TestStatus_FAILED;

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_true;


}
} else {
#line 11 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
if(litaC_std__string__String_equals((litaC_std__builtins__String) { .buffer = "DISABLED", .length = 8 }, litaC_value)) {{
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
*(litaC_this) = litaC_std__test__TestStatus_DISABLED;

#line 13 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_true;


}
} 
} 
} 


#line 15 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_false;

}


#line 1 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_bool litaC_std__test__TestStatus_toJson(litaC_std__test__TestStatus* litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 2 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
switch(*(litaC_this)) {
#line 3 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
case litaC_std__test__TestStatus_SUCCESS: {{
#line 4 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "\"%s\"", "SUCCESS");

#line 5 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
break;

}

}

#line 7 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
case litaC_std__test__TestStatus_FAILED: {{
#line 8 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "\"%s\"", "FAILED");

#line 9 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
break;

}

}

#line 11 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
case litaC_std__test__TestStatus_DISABLED: {{
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "\"%s\"", "DISABLED");

#line 13 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
break;

}

}}

#line 16 "/Users/tony/projects/litac-lang/stdlib/std/test/test.lita"
return litaC_true;

}


#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_ litaC_std__array__std__array__ArrayInit_cb_std__test__TestCase_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 16 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_ litaC_array =  {0};

#line 18 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_init_cb_std__test__TestCase_ce_(&((litaC_array)), litaC_initialSize, litaC_alloc);

#line 19 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_array;

}


#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 23 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->alloc = litaC_alloc;

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_initialSize;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_length = (sizeof(litaC_std__test__TestCase) * (litaC_u64)litaC_initialSize);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_initialSize > 0) {{
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = (litaC_std__test__TestCase*)litaC_std__mem__Allocator_alloc(litaC_alloc, litaC_length);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_a->elements)) {{
#line 32 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 


}
} else {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

}} 

}


#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
LITAC_INLINE 
litaC_i32 litaC_std__array__std__array__Array_size_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a) {
#line 273 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->length;

}


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__TestCase litaC_std__array__std__array__Array_get_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_i32 litaC_index) {
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_index >= 0 && litaC_index < litaC_a->length, __FILE__, __LINE__);

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->elements[litaC_index];

}


#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a) {
#line 42 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a && litaC_a->elements) {{
#line 43 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__mem__Allocator_free(litaC_a->alloc, (litaC_void*)litaC_a->elements);

#line 44 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 

}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_std__test__TestCase litaC_element) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + 1 > litaC_a->capacity) {{
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb_std__test__TestCase_ce_(litaC_a, 1))) {{
#line 53 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->length < litaC_a->capacity, __FILE__, __LINE__);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->capacity > 0, __FILE__, __LINE__);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->elements != NULL, __FILE__, __LINE__);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 64 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements[litaC_a->length] = litaC_element;

}

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += 1;

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 1;

}


#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_i32 litaC_increment) {
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_doubleCurrent = litaC_a->capacity * 2;

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_minReq = litaC_a->length + litaC_increment;

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_n = litaC_minReq;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_doubleCurrent > litaC_minReq) {{
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_n = litaC_doubleCurrent;

}
} 


#line 304 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_newlength = (sizeof(litaC_std__test__TestCase) * (litaC_usize)litaC_n);

#line 305 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_oldlength = (sizeof(litaC_std__test__TestCase) * (litaC_usize)litaC_a->capacity);

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__TestCase* litaC_newArray = (litaC_std__test__TestCase*)litaC_std__mem__Allocator_realloc(litaC_a->alloc, (litaC_void*)litaC_a->elements, litaC_oldlength, litaC_newlength);

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_newArray)) {{
#line 308 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_false;


}
} 


#line 311 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = litaC_newArray;

#line 312 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_n;

#line 313 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_true;

}


#line 139 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__TestCase* litaC_std__array__std__array__Array_lastPtr_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a) {
#line 140 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->length != 0, __FILE__, __LINE__);

#line 142 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return &(litaC_a->elements[litaC_a->length - 1]);

}


#line 81 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__TestCase* litaC_std__array__std__array__Array_getPtr_cb_std__test__TestCase_ce_(litaC_std__array__std__array__Array_cb_std__test__TestCase_ce_* litaC_a,litaC_i32 litaC_index) {
#line 82 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_index >= 0 && litaC_index < litaC_a->length, __FILE__, __LINE__);

#line 84 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return &(litaC_a->elements[litaC_index]);

}


#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_ litaC_std__array__std__array__ArrayInit_cb_std__test__AssertEntry_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 16 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_ litaC_array =  {0};

#line 18 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_init_cb_std__test__AssertEntry_ce_(&((litaC_array)), litaC_initialSize, litaC_alloc);

#line 19 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_array;

}


#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 23 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->alloc = litaC_alloc;

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_initialSize;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_length = (sizeof(litaC_std__test__AssertEntry) * (litaC_u64)litaC_initialSize);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_initialSize > 0) {{
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = (litaC_std__test__AssertEntry*)litaC_std__mem__Allocator_alloc(litaC_alloc, litaC_length);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_a->elements)) {{
#line 32 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 


}
} else {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

}} 

}


#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a) {
#line 42 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a && litaC_a->elements) {{
#line 43 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__mem__Allocator_free(litaC_a->alloc, (litaC_void*)litaC_a->elements);

#line 44 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 

}


#line 277 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
LITAC_INLINE 
litaC_void litaC_std__array__std__array__Array_clear_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a) {
#line 278 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;
}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a,litaC_std__test__AssertEntry litaC_element) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + 1 > litaC_a->capacity) {{
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb_std__test__AssertEntry_ce_(litaC_a, 1))) {{
#line 53 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->length < litaC_a->capacity, __FILE__, __LINE__);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->capacity > 0, __FILE__, __LINE__);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->elements != NULL, __FILE__, __LINE__);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 64 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements[litaC_a->length] = litaC_element;

}

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += 1;

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 1;

}


#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a,litaC_i32 litaC_increment) {
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_doubleCurrent = litaC_a->capacity * 2;

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_minReq = litaC_a->length + litaC_increment;

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_n = litaC_minReq;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_doubleCurrent > litaC_minReq) {{
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_n = litaC_doubleCurrent;

}
} 


#line 304 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_newlength = (sizeof(litaC_std__test__AssertEntry) * (litaC_usize)litaC_n);

#line 305 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_oldlength = (sizeof(litaC_std__test__AssertEntry) * (litaC_usize)litaC_a->capacity);

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__AssertEntry* litaC_newArray = (litaC_std__test__AssertEntry*)litaC_std__mem__Allocator_realloc(litaC_a->alloc, (litaC_void*)litaC_a->elements, litaC_oldlength, litaC_newlength);

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_newArray)) {{
#line 308 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_false;


}
} 


#line 311 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = litaC_newArray;

#line 312 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_n;

#line 313 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_true;

}


#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb__ptr_const_char_ce_ litaC_std__array__std__array__ArrayInit_cb__ptr_const_char_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 16 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb__ptr_const_char_ce_ litaC_array =  {0};

#line 18 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_init_cb__ptr_const_char_ce_(&((litaC_array)), litaC_initialSize, litaC_alloc);

#line 19 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_array;

}


#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 23 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->alloc = litaC_alloc;

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_initialSize;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_length = (sizeof(const litaC_char*) * (litaC_u64)litaC_initialSize);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_initialSize > 0) {{
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = (const litaC_char**)litaC_std__mem__Allocator_alloc(litaC_alloc, litaC_length);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_a->elements)) {{
#line 32 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 


}
} else {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

}} 

}


#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
LITAC_INLINE 
litaC_i32 litaC_std__array__std__array__Array_size_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a) {
#line 273 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->length;

}


#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a) {
#line 42 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a && litaC_a->elements) {{
#line 43 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__mem__Allocator_free(litaC_a->alloc, (litaC_void*)litaC_a->elements);

#line 44 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 

}


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__test__AssertEntry litaC_std__array__std__array__Array_get_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a,litaC_i32 litaC_index) {
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_index >= 0 && litaC_index < litaC_a->length, __FILE__, __LINE__);

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->elements[litaC_index];

}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a,const litaC_char* litaC_element) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + 1 > litaC_a->capacity) {{
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb__ptr_const_char_ce_(litaC_a, 1))) {{
#line 53 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->length < litaC_a->capacity, __FILE__, __LINE__);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->capacity > 0, __FILE__, __LINE__);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->elements != NULL, __FILE__, __LINE__);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 64 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements[litaC_a->length] = litaC_element;

}

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += 1;

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 1;

}


#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a,litaC_i32 litaC_increment) {
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_doubleCurrent = litaC_a->capacity * 2;

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_minReq = litaC_a->length + litaC_increment;

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_n = litaC_minReq;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_doubleCurrent > litaC_minReq) {{
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_n = litaC_doubleCurrent;

}
} 


#line 304 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_newlength = (sizeof(const litaC_char*) * (litaC_usize)litaC_n);

#line 305 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_oldlength = (sizeof(const litaC_char*) * (litaC_usize)litaC_a->capacity);

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_char** litaC_newArray = (const litaC_char**)litaC_std__mem__Allocator_realloc(litaC_a->alloc, (litaC_void*)litaC_a->elements, litaC_oldlength, litaC_newlength);

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_newArray)) {{
#line 308 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_false;


}
} 


#line 311 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = litaC_newArray;

#line 312 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_n;

#line 313 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_true;

}


#line 267 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
LITAC_INLINE 
litaC_bool litaC_std__array__std__array__Array_empty_cb_std__test__AssertEntry_ce_(litaC_std__array__std__array__Array_cb_std__test__AssertEntry_ce_* litaC_a) {
#line 268 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->length == 0;

}


#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_i32_ce_ litaC_std__array__std__array__ArrayInit_cb_i32_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 16 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_i32_ce_ litaC_array =  {0};

#line 18 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_init_cb_i32_ce_(&((litaC_array)), litaC_initialSize, litaC_alloc);

#line 19 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_array;

}


#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 23 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->alloc = litaC_alloc;

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_initialSize;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_length = (sizeof(litaC_i32) * (litaC_u64)litaC_initialSize);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_initialSize > 0) {{
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = (litaC_i32*)litaC_std__mem__Allocator_alloc(litaC_alloc, litaC_length);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_a->elements)) {{
#line 32 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 


}
} else {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

}} 

}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_element) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + 1 > litaC_a->capacity) {{
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb_i32_ce_(litaC_a, 1))) {{
#line 53 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->length < litaC_a->capacity, __FILE__, __LINE__);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->capacity > 0, __FILE__, __LINE__);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->elements != NULL, __FILE__, __LINE__);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 64 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements[litaC_a->length] = litaC_element;

}

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += 1;

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 1;

}


#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_increment) {
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_doubleCurrent = litaC_a->capacity * 2;

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_minReq = litaC_a->length + litaC_increment;

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_n = litaC_minReq;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_doubleCurrent > litaC_minReq) {{
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_n = litaC_doubleCurrent;

}
} 


#line 304 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_newlength = (sizeof(litaC_i32) * (litaC_usize)litaC_n);

#line 305 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_oldlength = (sizeof(litaC_i32) * (litaC_usize)litaC_a->capacity);

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32* litaC_newArray = (litaC_i32*)litaC_std__mem__Allocator_realloc(litaC_a->alloc, (litaC_void*)litaC_a->elements, litaC_oldlength, litaC_newlength);

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_newArray)) {{
#line 308 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_false;


}
} 


#line 311 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = litaC_newArray;

#line 312 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_n;

#line 313 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_true;

}


#line 218 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_insertAllAt_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_index,litaC_std__array__std__array__Array_cb_i32_ce_* litaC_elements) {
#line 219 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_index >= 0 && litaC_index <= litaC_a->length, __FILE__, __LINE__);

#line 221 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_index == litaC_a->length) {{
#line 222 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_std__array__std__array__Array_addAll_cb_i32_ce_(litaC_a, litaC_elements);


}
} 


#line 225 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + litaC_elements->length >= litaC_a->capacity) {{
#line 226 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb_i32_ce_(litaC_a, litaC_elements->length))) {{
#line 227 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 231 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
memmove((litaC_void*)(&(litaC_a->elements[litaC_index + litaC_elements->length])), 
#line 232 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
(const litaC_void*)(&(litaC_a->elements[litaC_index])), 
#line 233 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
(litaC_a->length - litaC_index) * sizeof(litaC_i32));

#line 235 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += litaC_elements->length;

#line 236 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_setAll_cb_i32_ce_(litaC_a, litaC_index, litaC_elements);

#line 237 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 1;

}


#line 240 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_addAll_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_std__array__std__array__Array_cb_i32_ce_* litaC_other) {
#line 241 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_other) || litaC_other->length == 0) {{
#line 242 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 0;


}
} 


#line 245 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + litaC_other->length > litaC_a->capacity) {{
#line 246 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb_i32_ce_(litaC_a, litaC_other->length))) {{
#line 247 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 251 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
memcpy((litaC_void*)(&(litaC_a->elements[litaC_a->length])), 
#line 252 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
(const litaC_void*)(&(litaC_other->elements[0])), 
#line 253 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_other->length * sizeof(litaC_i32));

#line 254 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += litaC_other->length;

#line 255 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_other->length;

}


#line 98 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_setAll_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_index,litaC_std__array__std__array__Array_cb_i32_ce_* litaC_other) {
#line 99 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_other) || litaC_other->length == 0) {{
#line 100 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 0;


}
} 


#line 103 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_index < 0) {{
#line 104 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


#line 107 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_result = litaC_other->length;

#line 108 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_index + litaC_other->length >= litaC_a->capacity) {{
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_result -= ((litaC_index + litaC_other->length) - litaC_a->capacity);

}
} 


#line 112 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
memcpy(
#line 113 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
(litaC_void*)(&(litaC_a->elements[litaC_index])), 
#line 114 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
(const litaC_void*)(&(litaC_other->elements[0])), 
#line 115 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_result * sizeof(litaC_i32));

#line 118 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_result;

}


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_get_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a,litaC_i32 litaC_index) {
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_index >= 0 && litaC_index < litaC_a->length, __FILE__, __LINE__);

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->elements[litaC_index];

}


#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
LITAC_INLINE 
litaC_i32 litaC_std__array__std__array__Array_size_cb_i32_ce_(litaC_std__array__std__array__Array_cb_i32_ce_* litaC_a) {
#line 273 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->length;

}


#line 36 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__json__JsonNode* litaC_std__mem__std__mem__new_cb_std__json__JsonNode_ce_(const litaC_std__mem__Allocator* litaC_a) {
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__json__JsonNode* litaC_result = (litaC_std__json__JsonNode*)litaC_std__mem__Allocator_calloc(litaC_a, 1, sizeof(litaC_std__json__JsonNode));

#line 38 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return litaC_result;

}


#line 36 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_std__mem__std__mem__new_cb_std__array__Array_ce_(const litaC_std__mem__Allocator* litaC_a) {
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_result = (litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_*)litaC_std__mem__Allocator_calloc(litaC_a, 1, sizeof(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_));

#line 38 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return litaC_result;

}


#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 23 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->alloc = litaC_alloc;

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_initialSize;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_length = (sizeof(litaC_std__json__JsonNode*) * (litaC_u64)litaC_initialSize);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_initialSize > 0) {{
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = (litaC_std__json__JsonNode**)litaC_std__mem__Allocator_alloc(litaC_alloc, litaC_length);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_a->elements)) {{
#line 32 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 


}
} else {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

}} 

}


#line 36 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__json__JsonObject* litaC_std__mem__std__mem__new_cb_std__json__JsonObject_ce_(const litaC_std__mem__Allocator* litaC_a) {
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
litaC_std__json__JsonObject* litaC_result = (litaC_std__json__JsonObject*)litaC_std__mem__Allocator_calloc(litaC_a, 1, sizeof(litaC_std__json__JsonObject));

#line 38 "/Users/tony/projects/litac-lang/stdlib/std/mem/mem.lita"
return litaC_result;

}


#line 65 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_init_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,litaC_i32 litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator,const litaC_char* litaC_emptyKey) {
#line 68 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"

#line 69 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_allocator)) {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_allocator = litaC_std__mem__defaultAllocator;

}
} 


#line 73 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length = 0;

#line 74 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->capacity = 0;

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->entries = 0;

#line 76 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->allocator = litaC_allocator;

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->emptyValue = litaC_emptyValue;

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->emptyKey = litaC_emptyKey;

#line 80 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_initialSize = (litaC_i32)litaC_std__map__nextPowerOf2(litaC_initialSize);

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__MapGrow_cb__ptr_const_char_c_i32_ce_(litaC_m, litaC_initialSize);
}


#line 259 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__MapGrow_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,litaC_i32 litaC_newlength) {
#line 260 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_newlength < 16) {{
#line 261 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_newlength = 16;

}
} 


#line 264 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_* litaC_newEntries = (litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_*)litaC_std__mem__Allocator_calloc(litaC_m->allocator, litaC_newlength, sizeof(litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_));

#line 265 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_newEntries)) {{
#line 266 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_false;


}
} 


#line 269 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_ litaC_newMap =  {
#line 270 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.length = 0,

#line 271 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.capacity = litaC_newlength,

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.entries = litaC_newEntries,

#line 273 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.emptyValue = litaC_m->emptyValue,

#line 274 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.emptyKey = litaC_m->emptyKey,

#line 275 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.allocator = litaC_m->allocator};

#line 278 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_m->capacity;litaC_i += 1) {{
#line 279 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 280 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 2) {{
#line 281 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
continue;

}
} 


#line 284 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb__ptr_const_char_c_i32_ce_(&((litaC_newMap)), litaC_k->key, litaC_k->value);

}}

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_free_cb__ptr_const_char_c_i32_ce_(litaC_m);

#line 289 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
*(litaC_m) = litaC_newMap;

#line 290 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_true;

}


#line 106 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_put_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,const litaC_char* litaC_key,litaC_i32 litaC_value) {
#line 108 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(2 * litaC_m->length >= litaC_m->capacity) {{
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_std__map__std__map__MapGrow_cb__ptr_const_char_c_i32_ce_(litaC_m, 2 * litaC_m->capacity))) {{
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return -(1);


}
} 


}
} 


#line 114 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_std__string__char_hash(litaC_key) + 2;

#line 115 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_i = litaC_hash;

#line 116 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(;;) {{
#line 117 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i &= litaC_m->capacity - 1;

#line 118 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 120 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 2) {{
#line 121 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length += 1;

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_key;

#line 123 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_value;

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = litaC_hash;

#line 125 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 1;


}
} 


#line 127 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash == litaC_hash && litaC_std__string__char_equals(litaC_k->key, litaC_key)) {{
#line 128 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_key;

#line 129 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_value;

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = litaC_hash;

#line 131 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 0;


}
} 


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i += 1;

}}

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 0;

}


#line 84 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_free_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m) {
#line 85 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m) {{
#line 86 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->capacity = 0;

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length = 0;

#line 88 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m->entries) {{
#line 89 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__mem__Allocator_free(litaC_m->allocator, (litaC_void*)litaC_m->entries);

}
} 


#line 92 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->entries = NULL;

}
} 

}


#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 23 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->alloc = litaC_alloc;

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_initialSize;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_length = (sizeof(litaC_std__json__JsonEntry) * (litaC_u64)litaC_initialSize);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_initialSize > 0) {{
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = (litaC_std__json__JsonEntry*)litaC_std__mem__Allocator_alloc(litaC_alloc, litaC_length);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_a->elements)) {{
#line 32 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 


}
} else {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

}} 

}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a,litaC_std__json__JsonEntry litaC_element) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + 1 > litaC_a->capacity) {{
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb_std__json__JsonEntry_ce_(litaC_a, 1))) {{
#line 53 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->length < litaC_a->capacity, __FILE__, __LINE__);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->capacity > 0, __FILE__, __LINE__);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->elements != NULL, __FILE__, __LINE__);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 64 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements[litaC_a->length] = litaC_element;

}

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += 1;

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 1;

}


#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a,litaC_i32 litaC_increment) {
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_doubleCurrent = litaC_a->capacity * 2;

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_minReq = litaC_a->length + litaC_increment;

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_n = litaC_minReq;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_doubleCurrent > litaC_minReq) {{
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_n = litaC_doubleCurrent;

}
} 


#line 304 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_newlength = (sizeof(litaC_std__json__JsonEntry) * (litaC_usize)litaC_n);

#line 305 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_oldlength = (sizeof(litaC_std__json__JsonEntry) * (litaC_usize)litaC_a->capacity);

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__json__JsonEntry* litaC_newArray = (litaC_std__json__JsonEntry*)litaC_std__mem__Allocator_realloc(litaC_a->alloc, (litaC_void*)litaC_a->elements, litaC_oldlength, litaC_newlength);

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_newArray)) {{
#line 308 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_false;


}
} 


#line 311 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = litaC_newArray;

#line 312 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_n;

#line 313 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_true;

}


#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
LITAC_INLINE 
litaC_i32 litaC_std__array__std__array__Array_size_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a) {
#line 273 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->length;

}


#line 234 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__Map_contains_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,const litaC_char* litaC_key) {
#line 235 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m->length == 0) {{
#line 236 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_false;


}
} 


#line 239 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_std__string__char_hash(litaC_key) + 2;

#line 240 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_i = litaC_hash;

#line 241 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(;;) {{
#line 242 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i &= litaC_m->capacity - 1;

#line 243 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 245 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 1) {{
#line 246 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_false;


}
} 


#line 249 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash == litaC_hash && litaC_std__string__char_equals(litaC_k->key, litaC_key)) {{
#line 250 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_true;


}
} 


#line 253 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i += 1;

}}

#line 256 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_false;

}


#line 141 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_get_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m,const litaC_char* litaC_key) {
#line 142 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m->length == 0) {{
#line 143 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;


}
} 


#line 146 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_std__string__char_hash(litaC_key) + 2;

#line 147 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_i = litaC_hash;

#line 148 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(;;) {{
#line 149 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i &= litaC_m->capacity - 1;

#line 150 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb__ptr_const_char_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 152 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 1) {{
#line 153 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;


}
} 


#line 156 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash == litaC_hash && litaC_std__string__char_equals(litaC_k->key, litaC_key)) {{
#line 157 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_k->value;


}
} 


#line 160 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i += 1;

}}

#line 163 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;

}


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__json__JsonEntry litaC_std__array__std__array__Array_get_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a,litaC_i32 litaC_index) {
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_index >= 0 && litaC_index < litaC_a->length, __FILE__, __LINE__);

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->elements[litaC_index];

}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a,litaC_std__json__JsonNode* litaC_element) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + 1 > litaC_a->capacity) {{
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb__ptr_std__json__JsonNode_ce_(litaC_a, 1))) {{
#line 53 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->length < litaC_a->capacity, __FILE__, __LINE__);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->capacity > 0, __FILE__, __LINE__);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->elements != NULL, __FILE__, __LINE__);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 64 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements[litaC_a->length] = litaC_element;

}

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += 1;

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 1;

}


#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a,litaC_i32 litaC_increment) {
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_doubleCurrent = litaC_a->capacity * 2;

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_minReq = litaC_a->length + litaC_increment;

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_n = litaC_minReq;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_doubleCurrent > litaC_minReq) {{
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_n = litaC_doubleCurrent;

}
} 


#line 304 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_newlength = (sizeof(litaC_std__json__JsonNode*) * (litaC_usize)litaC_n);

#line 305 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_oldlength = (sizeof(litaC_std__json__JsonNode*) * (litaC_usize)litaC_a->capacity);

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__json__JsonNode** litaC_newArray = (litaC_std__json__JsonNode**)litaC_std__mem__Allocator_realloc(litaC_a->alloc, (litaC_void*)litaC_a->elements, litaC_oldlength, litaC_newlength);

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_newArray)) {{
#line 308 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_false;


}
} 


#line 311 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = litaC_newArray;

#line 312 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_n;

#line 313 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_true;

}


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__json__JsonNode* litaC_std__array__std__array__Array_get_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a,litaC_i32 litaC_index) {
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_index >= 0 && litaC_index < litaC_a->length, __FILE__, __LINE__);

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->elements[litaC_index];

}


#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
LITAC_INLINE 
litaC_i32 litaC_std__array__std__array__Array_size_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a) {
#line 273 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->length;

}


#line 97 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
LITAC_INLINE 
litaC_i32 litaC_std__map__std__map__Map_size_cb__ptr_const_char_c_i32_ce_(litaC_std__map__std__map__Map_cb__ptr_const_char_c_i32_ce_* litaC_m) {
#line 98 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->length;

}


#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb__ptr_std__json__JsonNode_ce_(litaC_std__array__std__array__Array_cb__ptr_std__json__JsonNode_ce_* litaC_a) {
#line 42 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a && litaC_a->elements) {{
#line 43 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__mem__Allocator_free(litaC_a->alloc, (litaC_void*)litaC_a->elements);

#line 44 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 

}


#line 41 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_free_cb_std__json__JsonEntry_ce_(litaC_std__array__std__array__Array_cb_std__json__JsonEntry_ce_* litaC_a) {
#line 42 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a && litaC_a->elements) {{
#line 43 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__mem__Allocator_free(litaC_a->alloc, (litaC_void*)litaC_a->elements);

#line 44 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

#line 45 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 46 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 

}


#line 65 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_init_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator,litaC_i32 litaC_emptyKey) {
#line 68 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"

#line 69 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_allocator)) {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_allocator = litaC_std__mem__defaultAllocator;

}
} 


#line 73 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length = 0;

#line 74 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->capacity = 0;

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->entries = 0;

#line 76 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->allocator = litaC_allocator;

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->emptyValue = litaC_emptyValue;

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->emptyKey = litaC_emptyKey;

#line 80 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_initialSize = (litaC_i32)litaC_std__map__nextPowerOf2(litaC_initialSize);

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__MapGrow_cb_i32_c_i32_ce_(litaC_m, litaC_initialSize);
}


#line 259 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__MapGrow_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_newlength) {
#line 260 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_newlength < 16) {{
#line 261 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_newlength = 16;

}
} 


#line 264 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_* litaC_newEntries = (litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_*)litaC_std__mem__Allocator_calloc(litaC_m->allocator, litaC_newlength, sizeof(litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_));

#line 265 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_newEntries)) {{
#line 266 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_false;


}
} 


#line 269 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb_i32_c_i32_ce_ litaC_newMap =  {
#line 270 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.length = 0,

#line 271 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.capacity = litaC_newlength,

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.entries = litaC_newEntries,

#line 273 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.emptyValue = litaC_m->emptyValue,

#line 274 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.emptyKey = litaC_m->emptyKey,

#line 275 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.allocator = litaC_m->allocator};

#line 278 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_m->capacity;litaC_i += 1) {{
#line 279 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 280 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 2) {{
#line 281 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
continue;

}
} 


#line 284 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(&((litaC_newMap)), litaC_k->key, litaC_k->value);

}}

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_free_cb_i32_c_i32_ce_(litaC_m);

#line 289 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
*(litaC_m) = litaC_newMap;

#line 290 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_true;

}


#line 106 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_put_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_key,litaC_i32 litaC_value) {
#line 108 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(2 * litaC_m->length >= litaC_m->capacity) {{
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_std__map__std__map__MapGrow_cb_i32_c_i32_ce_(litaC_m, 2 * litaC_m->capacity))) {{
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return -(1);


}
} 


}
} 


#line 114 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_std__map__i32_hash(litaC_key) + 2;

#line 115 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_i = litaC_hash;

#line 116 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(;;) {{
#line 117 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i &= litaC_m->capacity - 1;

#line 118 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 120 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 2) {{
#line 121 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length += 1;

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_key;

#line 123 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_value;

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = litaC_hash;

#line 125 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 1;


}
} 


#line 127 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash == litaC_hash && litaC_std__map__i32_equals(litaC_k->key, litaC_key)) {{
#line 128 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_key;

#line 129 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_value;

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = litaC_hash;

#line 131 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 0;


}
} 


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i += 1;

}}

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 0;

}


#line 84 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_free_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m) {
#line 85 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m) {{
#line 86 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->capacity = 0;

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length = 0;

#line 88 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m->entries) {{
#line 89 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__mem__Allocator_free(litaC_m->allocator, (litaC_void*)litaC_m->entries);

}
} 


#line 92 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->entries = NULL;

}
} 

}


#line 141 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_get_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_key) {
#line 142 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m->length == 0) {{
#line 143 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;


}
} 


#line 146 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_std__map__i32_hash(litaC_key) + 2;

#line 147 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_i = litaC_hash;

#line 148 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(;;) {{
#line 149 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i &= litaC_m->capacity - 1;

#line 150 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 152 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 1) {{
#line 153 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;


}
} 


#line 156 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash == litaC_hash && litaC_std__map__i32_equals(litaC_k->key, litaC_key)) {{
#line 157 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_k->value;


}
} 


#line 160 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i += 1;

}}

#line 163 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;

}


#line 202 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_remove_cb_i32_c_i32_ce_(litaC_std__map__std__map__Map_cb_i32_c_i32_ce_* litaC_m,litaC_i32 litaC_key) {
#line 203 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m->length == 0) {{
#line 204 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;


}
} 


#line 207 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_std__map__i32_hash(litaC_key) + 2;

#line 208 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_i = litaC_hash;

#line 209 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(;;) {{
#line 210 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i &= litaC_m->capacity - 1;

#line 211 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i32_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 213 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 1) {{
#line 214 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;


}
} 


#line 217 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash == litaC_hash && litaC_std__map__i32_equals(litaC_k->key, litaC_key)) {{
#line 218 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_v = litaC_k->value;

#line 220 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = 1;

#line 221 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_m->emptyKey;

#line 222 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_m->emptyValue;

#line 224 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length -= 1;

#line 225 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_v;


}
} 


#line 228 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i += 1;

}}

#line 231 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m->emptyValue;

}


#line 65 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_init_cb_i64_c_i32_ce_(litaC_std__map__std__map__Map_cb_i64_c_i32_ce_* litaC_m,litaC_i32 litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator,litaC_i64 litaC_emptyKey) {
#line 68 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"

#line 69 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_allocator)) {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_allocator = litaC_std__mem__defaultAllocator;

}
} 


#line 73 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length = 0;

#line 74 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->capacity = 0;

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->entries = 0;

#line 76 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->allocator = litaC_allocator;

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->emptyValue = litaC_emptyValue;

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->emptyKey = litaC_emptyKey;

#line 80 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_initialSize = (litaC_i32)litaC_std__map__nextPowerOf2(litaC_initialSize);

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__MapGrow_cb_i64_c_i32_ce_(litaC_m, litaC_initialSize);
}


#line 259 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__MapGrow_cb_i64_c_i32_ce_(litaC_std__map__std__map__Map_cb_i64_c_i32_ce_* litaC_m,litaC_i32 litaC_newlength) {
#line 260 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_newlength < 16) {{
#line 261 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_newlength = 16;

}
} 


#line 264 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_* litaC_newEntries = (litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_*)litaC_std__mem__Allocator_calloc(litaC_m->allocator, litaC_newlength, sizeof(litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_));

#line 265 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_newEntries)) {{
#line 266 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_false;


}
} 


#line 269 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb_i64_c_i32_ce_ litaC_newMap =  {
#line 270 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.length = 0,

#line 271 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.capacity = litaC_newlength,

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.entries = litaC_newEntries,

#line 273 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.emptyValue = litaC_m->emptyValue,

#line 274 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.emptyKey = litaC_m->emptyKey,

#line 275 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.allocator = litaC_m->allocator};

#line 278 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_m->capacity;litaC_i += 1) {{
#line 279 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 280 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 2) {{
#line 281 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
continue;

}
} 


#line 284 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_i64_c_i32_ce_(&((litaC_newMap)), litaC_k->key, litaC_k->value);

}}

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_free_cb_i64_c_i32_ce_(litaC_m);

#line 289 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
*(litaC_m) = litaC_newMap;

#line 290 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_true;

}


#line 106 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_put_cb_i64_c_i32_ce_(litaC_std__map__std__map__Map_cb_i64_c_i32_ce_* litaC_m,litaC_i64 litaC_key,litaC_i32 litaC_value) {
#line 108 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(2 * litaC_m->length >= litaC_m->capacity) {{
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_std__map__std__map__MapGrow_cb_i64_c_i32_ce_(litaC_m, 2 * litaC_m->capacity))) {{
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return -(1);


}
} 


}
} 


#line 114 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_std__hash__i64_hash(litaC_key) + 2;

#line 115 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_i = litaC_hash;

#line 116 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(;;) {{
#line 117 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i &= litaC_m->capacity - 1;

#line 118 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_i64_c_i32_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 120 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 2) {{
#line 121 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length += 1;

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_key;

#line 123 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_value;

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = litaC_hash;

#line 125 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 1;


}
} 


#line 127 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash == litaC_hash && litaC_std__hash__i64_equals(litaC_k->key, litaC_key)) {{
#line 128 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_key;

#line 129 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_value;

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = litaC_hash;

#line 131 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 0;


}
} 


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i += 1;

}}

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 0;

}


#line 84 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_free_cb_i64_c_i32_ce_(litaC_std__map__std__map__Map_cb_i64_c_i32_ce_* litaC_m) {
#line 85 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m) {{
#line 86 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->capacity = 0;

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length = 0;

#line 88 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m->entries) {{
#line 89 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__mem__Allocator_free(litaC_m->allocator, (litaC_void*)litaC_m->entries);

}
} 


#line 92 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->entries = NULL;

}
} 

}


#line 54 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_ litaC_std__map__std__map__StringMap_cb_std__builtins__String_ce_(litaC_std__builtins__String litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator) {
#line 56 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_ litaC_m =  {0};

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_init_cb_std__builtins__String_c_std__builtins__String_ce_(&((litaC_m)), litaC_emptyValue, litaC_initialSize, litaC_allocator, (litaC_std__builtins__String) {.buffer = 0,
.length = 0});

#line 60 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_m;

}


#line 65 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_init_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_m,litaC_std__builtins__String litaC_emptyValue,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_allocator,litaC_std__builtins__String litaC_emptyKey) {
#line 68 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"

#line 69 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_allocator)) {{
#line 70 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_allocator = litaC_std__mem__defaultAllocator;

}
} 


#line 73 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length = 0;

#line 74 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->capacity = 0;

#line 75 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->entries = 0;

#line 76 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->allocator = litaC_allocator;

#line 77 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->emptyValue = litaC_emptyValue;

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->emptyKey = litaC_emptyKey;

#line 80 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_initialSize = (litaC_i32)litaC_std__map__nextPowerOf2(litaC_initialSize);

#line 81 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__MapGrow_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_m, litaC_initialSize);
}


#line 259 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_bool litaC_std__map__std__map__MapGrow_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_m,litaC_i32 litaC_newlength) {
#line 260 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_newlength < 16) {{
#line 261 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_newlength = 16;

}
} 


#line 264 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_newEntries = (litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_*)litaC_std__mem__Allocator_calloc(litaC_m->allocator, litaC_newlength, sizeof(litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_));

#line 265 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_newEntries)) {{
#line 266 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_false;


}
} 


#line 269 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_ litaC_newMap =  {
#line 270 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.length = 0,

#line 271 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.capacity = litaC_newlength,

#line 272 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.entries = litaC_newEntries,

#line 273 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.emptyValue = litaC_m->emptyValue,

#line 274 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.emptyKey = litaC_m->emptyKey,

#line 275 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
.allocator = litaC_m->allocator};

#line 278 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_m->capacity;litaC_i += 1) {{
#line 279 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 280 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 2) {{
#line 281 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
continue;

}
} 


#line 284 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_put_cb_std__builtins__String_c_std__builtins__String_ce_(&((litaC_newMap)), litaC_k->key, litaC_k->value);

}}

#line 287 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Map_free_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_m);

#line 289 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
*(litaC_m) = litaC_newMap;

#line 290 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return litaC_true;

}


#line 106 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i32 litaC_std__map__std__map__Map_put_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_m,litaC_std__builtins__String litaC_key,litaC_std__builtins__String litaC_value) {
#line 108 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(2 * litaC_m->length >= litaC_m->capacity) {{
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(!(litaC_std__map__std__map__MapGrow_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_m, 2 * litaC_m->capacity))) {{
#line 110 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return -(1);


}
} 


}
} 


#line 114 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_hash = litaC_std__string__String_hash(litaC_key) + 2;

#line 115 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_u32 litaC_i = litaC_hash;

#line 116 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
for(;;) {{
#line 117 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i &= litaC_m->capacity - 1;

#line 118 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__map__std__map__Entry_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_k = &(litaC_m->entries[litaC_i]);

#line 120 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash < 2) {{
#line 121 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length += 1;

#line 122 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_key;

#line 123 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_value;

#line 124 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = litaC_hash;

#line 125 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 1;


}
} 


#line 127 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_k->hash == litaC_hash && litaC_std__string__String_equals(litaC_k->key, litaC_key)) {{
#line 128 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->key = litaC_key;

#line 129 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->value = litaC_value;

#line 130 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_k->hash = litaC_hash;

#line 131 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 0;


}
} 


#line 134 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_i += 1;

}}

#line 137 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
return 0;

}


#line 84 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_void litaC_std__map__std__map__Map_free_cb_std__builtins__String_c_std__builtins__String_ce_(litaC_std__map__std__map__Map_cb_std__builtins__String_c_std__builtins__String_ce_* litaC_m) {
#line 85 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m) {{
#line 86 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->capacity = 0;

#line 87 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->length = 0;

#line 88 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
if(litaC_m->entries) {{
#line 89 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_std__mem__Allocator_free(litaC_m->allocator, (litaC_void*)litaC_m->entries);

}
} 


#line 92 "/Users/tony/projects/litac-lang/stdlib/std/map.lita"
litaC_m->entries = NULL;

}
} 

}


#line 15 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__builtins__String_ce_ litaC_std__array__std__array__ArrayInit_cb_std__builtins__String_ce_(litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 16 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 17 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_cb_std__builtins__String_ce_ litaC_array =  {0};

#line 18 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__array__std__array__Array_init_cb_std__builtins__String_ce_(&((litaC_array)), litaC_initialSize, litaC_alloc);

#line 19 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_array;

}


#line 22 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_void litaC_std__array__std__array__Array_init_cb_std__builtins__String_ce_(litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_a,litaC_i32 litaC_initialSize,const litaC_std__mem__Allocator* litaC_alloc) {
#line 23 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 24 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->alloc = litaC_alloc;

#line 25 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 26 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_initialSize;

#line 28 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_length = (sizeof(litaC_std__builtins__String) * (litaC_u64)litaC_initialSize);

#line 29 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_initialSize > 0) {{
#line 30 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = (litaC_std__builtins__String*)litaC_std__mem__Allocator_alloc(litaC_alloc, litaC_length);

#line 31 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_a->elements)) {{
#line 32 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length = 0;

#line 33 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = 0;

}
} 


}
} else {
#line 36 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 37 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = NULL;

}} 

}


#line 50 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_std__array__std__array__Array_add_cb_std__builtins__String_ce_(litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_a,litaC_std__builtins__String litaC_element) {
#line 51 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_a->length + 1 > litaC_a->capacity) {{
#line 52 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_std__array__std__array__ArrayGrow_cb_std__builtins__String_ce_(litaC_a, 1))) {{
#line 53 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return -(1);


}
} 


}
} 


#line 57 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->length < litaC_a->capacity, __FILE__, __LINE__);

#line 58 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->capacity > 0, __FILE__, __LINE__);

#line 59 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_a->elements != NULL, __FILE__, __LINE__);

#line 61 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"

#line 63 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
{
#line 64 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements[litaC_a->length] = litaC_element;

}

#line 67 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->length += 1;

#line 68 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return 1;

}


#line 295 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_bool litaC_std__array__std__array__ArrayGrow_cb_std__builtins__String_ce_(litaC_std__array__std__array__Array_cb_std__builtins__String_ce_* litaC_a,litaC_i32 litaC_increment) {
#line 296 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_doubleCurrent = litaC_a->capacity * 2;

#line 297 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_minReq = litaC_a->length + litaC_increment;

#line 298 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_i32 litaC_n = litaC_minReq;

#line 300 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(litaC_doubleCurrent > litaC_minReq) {{
#line 301 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_n = litaC_doubleCurrent;

}
} 


#line 304 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_newlength = (sizeof(litaC_std__builtins__String) * (litaC_usize)litaC_n);

#line 305 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_usize litaC_oldlength = (sizeof(litaC_std__builtins__String) * (litaC_usize)litaC_a->capacity);

#line 306 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__builtins__String* litaC_newArray = (litaC_std__builtins__String*)litaC_std__mem__Allocator_realloc(litaC_a->alloc, (litaC_void*)litaC_a->elements, litaC_oldlength, litaC_newlength);

#line 307 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
if(!(litaC_newArray)) {{
#line 308 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_false;


}
} 


#line 311 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->elements = litaC_newArray;

#line 312 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_a->capacity = litaC_n;

#line 313 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_true;

}


#line 246 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void litaC_std__json__from_json__std__json__from_json__Array_fromJson_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_this,litaC_std__json__JsonContext* litaC_context,litaC_std__json__JsonNode* litaC_json) {
#line 247 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(!(litaC_json) || !(litaC_std__json__JsonNode_isArray(litaC_json))) {{
#line 248 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
return;


}
} 


#line 251 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
if(litaC_this->capacity == 0) {{
#line 252 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_std__array__std__array__Array_init_cb__ptr_const_char_ce_(litaC_this, litaC_std__json__JsonNode_size(litaC_json), litaC_context->allocator);

}
} 


#line 255 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_void (*litaC_makeFn)(litaC_u64,litaC_std__json__JsonContext*,litaC_std__json__JsonNode*,litaC_void*) = litaC_context->maker;

#line 256 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__json__JsonNode_size(litaC_json);litaC_i += 1) {{
#line 257 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_std__json__JsonNode* litaC_element = litaC_std__json__JsonNode_at(litaC_json, litaC_i);

#line 258 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"

#line 265 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
{
#line 266 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_std__builtins__String litaC_str = litaC_std__string__StringInit(litaC_std__json__JsonNode_asString(litaC_element), -(
#line 12 "/Users/tony/projects/litac-lang/stdlib/std/string/string.lita"
1));

#line 268 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_char* litaC_value = litaC_std__string__StringClone(litaC_str.buffer, litaC_str.length, litaC_context->allocator);

#line 269 "/Users/tony/projects/litac-lang/stdlib/std/json/from_json.lita"
litaC_std__array__std__array__Array_add_cb__ptr_const_char_ce_(litaC_this, litaC_value);

}

}}
}


#line 98 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_void litaC_std__json__to_json__std__json__to_json__Array_toJson_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_this,litaC_std__string__builder__StringBuilder* litaC_sb) {
#line 99 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
if(!(litaC_this)) {{
#line 100 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_appendStrn(litaC_sb, "null", 4);

#line 101 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
return;


}
} 


#line 104 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "[");

#line 105 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_bool litaC_isFirst = litaC_true;

#line 106 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
for(litaC_i32 litaC_i = 0;litaC_i < litaC_std__array__std__array__Array_size_cb__ptr_const_char_ce_(litaC_this);litaC_i += 1) {{
#line 107 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
const litaC_char* litaC_entry = litaC_std__array__std__array__Array_get_cb__ptr_const_char_ce_(litaC_this, litaC_i);

#line 108 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
if(!(litaC_isFirst)) {{
#line 109 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, ",");

}
} 


#line 111 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_isFirst = litaC_false;

#line 113 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__json__to_json__char_toJson(litaC_entry, litaC_sb);

}}

#line 115 "/Users/tony/projects/litac-lang/stdlib/std/json/to_json.lita"
litaC_std__string__builder__StringBuilder_append(litaC_sb, "]");
}


#line 272 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
LITAC_INLINE 
litaC_i32 litaC_std__array__std__array__Array_size_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a) {
#line 273 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->length;

}


#line 75 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
const litaC_char* litaC_std__array__std__array__Array_get_cb__ptr_const_char_ce_(litaC_std__array__std__array__Array_cb__ptr_const_char_ce_* litaC_a,litaC_i32 litaC_index) {
#line 76 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
litaC_std__assert__assert(litaC_index >= 0 && litaC_index < litaC_a->length, __FILE__, __LINE__);

#line 78 "/Users/tony/projects/litac-lang/stdlib/std/array.lita"
return litaC_a->elements[litaC_index];

}



#line 2 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_i32 main(litaC_i32 litaC_len,litaC_char** litaC_args) {
#line 3 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_std__test__TestSuite_init(&((litaC_std__test__testSuite)), litaC_std__mem__defaultAllocator);


#line 4 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_i32 litaC_isJsonFormated = 0;

#line 5 "/Users/tony/projects/ringhttp/src/pre_main.lita"
for(;;) {{
#line 6 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_std__test__TestCase* litaC_test = litaC_std__test__TestSuite_enterDynamicTest(&((litaC_std__test__testSuite)));

#line 7 "/Users/tony/projects/ringhttp/src/pre_main.lita"
if(!(litaC_test)) {break;
} 


#line 8 "/Users/tony/projects/ringhttp/src/pre_main.lita"
if(!(litaC_test->testFn)) {continue;
} 


#line 9 "/Users/tony/projects/ringhttp/src/pre_main.lita"
if(setjmp(litaC_std__test__testSuite.env) == 0) {{
#line 10 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_std__test__TestSuite_executeDynamicTest(&((litaC_std__test__testSuite)));

}
} 


#line 12 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_std__test__TestSuite_printDynamicTest(&((litaC_std__test__testSuite)), litaC_isJsonFormated);

}}

#line 14 "/Users/tony/projects/ringhttp/src/pre_main.lita"
{litaC_i32 ___result = 0;

#line 3 "/Users/tony/projects/ringhttp/src/pre_main.lita"
litaC_std__test__TestSuite_free(&((litaC_std__test__testSuite)));
return ___result;
}

litaC_std__test__TestSuite_free(&((litaC_std__test__testSuite)));
}
