#Printf project
# C language - printf
## Matias Acosta y Roberto Ribeiro
### _printf
A function that produces output according to a format

**Prototype:** `int _printf(const char *format, ...);`

Handles the following conversion specifiers:
- **c** - character
- **s** - string
- **d** - decimal
- **i** - integer
- **%** - percentage sign

***
**holberton.h** - defines prototypes and structs

**_printf.c** - definition for _printf which produces output according to a format
***
### Usage
**Character:**
`_printf("%c\n", "H")`

**Output:**
`H`

.

**String:**
`_printf("%s\n", "Hello, World!")`

**Output:**
`Hello, World!`

.

**Decimal:**
`_printf("%d\n", "1024")`

**Output:**
`1024`

.

**Integer:**
`_printf("%i\n", "98")`

**Output:**
`98`