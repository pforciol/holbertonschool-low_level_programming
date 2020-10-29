# _printf

This projects aims to clone the famous printf() function from the C standard library, with as much features as possible.

_printf() prints output according to a format as described below, and writes that output to stdout. The return value when successful is the length of the printed string.

The format string is a character string, composed of zero or more directives: ordinary characters (not %) qhich are copied unchanged to the output stream; and conversion specifiers, each of which results in fetching zero or more subsequent arguments. Each conversion specifier is introduced by the character %, and ends with a conversion specifier. In between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision and an optional length modifier.

## Prototype

```c
_printf(const char *format, ...);
```

## Examples

```c
_printf("This is a string"); // prints "This is a string"

char ch = 'a';
_printf("This is a char: %c", ch); // prints "This is a char: a"

char *str = "This is a string";
_printf("%s", str); // prints "This is a string"

int len;
len = _printf("toto"); // len is equal to strlen("toto") : 4
```

## Task list

Below is a list of the required tasks and their corresponding features.

- [x] Task 0 - Write a function that produces output according to a format, and handles the following conversion specifiers: ``c``, ``s`` and ``%``
- [x] Task 1 - Handle the following conversion specifiers: ``d``, ``i``
- [x] Task 2 - Create a man page for your function
- [x] Task 3 - Handle the following custom conversion specifiers: ``b``
- [x] Task 4 - Handle the following conversion specifiers: ``u``, ``o``, ``x``, ``X``
- [x] Task 5 - Use a local buffer of 1024 chars in order to call ``write`` as little as possible.
- [x] Task 6 - Handle the following custom conversion specifiers: ``S``
- [x] Task 7 - Handle the following conversion specifiers: ``p``
- [ ] Task 8 - Handle the following flags for non-custom conversion specifiers: ``+``, ``space``, ``#``
- [ ] Task 9 - Handle the following length modifiers for non-custom conversion specifiers: ``l``, ``h``
- [ ] Task 10 - Handle the field width for non-custon conversion specifiers
- [ ] Task 11 - Handle the precision for non-custom conversion specifiers
- [ ] Task 12 - Handle the ``0`` flag for non-custom conversion specifiers
- [ ] Task 13 - Handle the ``-`` flag for non-custom conversion specifiers
- [x] Task 14 - Handle the following custom conversion specifier: ``r``
- [x] Task 15 - Handle the following custom conversion specifier: ``R``
- [ ] Task 16 - All the above options work well together


## Authors
[Pierre Forcioli](https://www.github.com/pforciol) & [Thibaud Poncin](http://www.github.com/ThibaudP)
