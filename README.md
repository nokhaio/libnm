# LIBNM

A personal C library based on 42 School's `libft`, extended with additional functions developed throughout the Common Core and personal projects, following the original restrictions on forbidden functions.

## Description

This library is based on the `libft` project I developed at 42 School as part of the 42 curriculum. However, it is **not a 100% identical copy** of the original project.

Over time, I extended the library with additional functions implemented throughout the 42 Common Core and during my personal projects.

The project follows the restrictions imposed by the original `libft` assignment regarding the use of forbidden functions. Only permitted functions are used in the implementations, mainly `malloc`, `free`, and `write`.

This library is primarily intended for personal use, learning, and experimentation. It may differ from the original 42 project requirements and evaluation criteria.

**Use this library at your own risk.** It is provided as is, without any guarantees. For production-ready applications, consider using the standard [GNU C Library (glibc)](https://www.gnu.org/software/libc/).

## Part 1 - Libc Functions

This library includes custom implementations of the following standard C library functions:

- [ ] `isalpha`
- [ ] `isdigit`
- [ ] `isalnum`
- [ ] `isascii`
- [ ] `isprint`
- [ ] `strlen`
- [ ] `memset`
- [ ] `bzero`
- [ ] `memcpy`
- [ ] `memmove`
- [ ] `memchr`
- [ ] `memcmp`
- [ ] `strlcpy`
- [ ] `strlcat`
- [ ] `toupper`
- [ ] `tolower`
- [ ] `strchr`
- [ ] `strrchr`
- [ ] `strncmp`
- [ ] `strnstr`
- [ ] `atoi`

The project follows the original assignment's restrictions on external functions. The permitted external functions used by the implementations are:

- `malloc`
- `free`
- `write`

## Part 2 - Additional Functions

The following functions are not part of the standard C library. They were implemented as part of the original `libft` project and extended throughout the 42 Common Core and personal projects.

| Function        | Prototype                                                         | Description                                                                 |
| --------------- | ----------------------------------------------------------------- | --------------------------------------------------------------------------- |
| `nm_substr`     | `char *nm_substr(char const *s, unsigned int start, size_t len);` | Returns a substring of a string.                                            |
| `nm_strjoin`    | `char *nm_strjoin(char const *s1, char const *s2);`               | Concatenates two strings into a newly allocated string.                     |
| `nm_strtrim`    | `char *nm_strtrim(char const *s1, char const *set);`              | Trims characters specified in `set` from the beginning and end of a string. |
| `nm_split`      | `char **nm_split(char const *s, char c);`                         | Splits a string into an array of strings using a delimiter.                 |
| `nm_itoa`       | `char *nm_itoa(int n);`                                           | Converts an integer into a string.                                          |
| `nm_strmapi`    | `char *nm_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies a function to each character of a string and returns a new string.  |
| `nm_striteri`   | `void nm_striteri(char *s, void (*f)(unsigned int, char *));`     | Applies a function to each character of a string in place.                  |
| `nm_putchar_fd` | `void nm_putchar_fd(char c, int fd);`                             | Writes a character to a file descriptor.                                    |
| `nm_putstr_fd`  | `void nm_putstr_fd(char *s, int fd);`                             | Writes a string to a file descriptor.                                       |
| `nm_putendl_fd` | `void nm_putendl_fd(char *s, int fd);`                            | Writes a string followed by a newline to a file descriptor.                 |
| `nm_putnbr_fd`  | `void nm_putnbr_fd(int n, int fd);`                               | Writes an integer to a file descriptor.                                     |

## Additional Functions (Non-libft)

The following function was added separately and is not part of the standard 42 `libft` assignment:

- [ ] `strstr`
- [ ] `strspn`

## Instructions

Clone the repository:

```bash
git clone <repository-url>
cd <repository-name>
```

Compile the library using the provided `Makefile`:

```bash
make
```

This generates the static library `libnm.a`, which can be linked to your C projects.

To remove the object files:

```bash
make clean
```

To remove the object files and the compiled library:

```bash
make fclean
```

To rebuild the library from scratch:

```bash
make re
```

Include the appropriate header in your C source files:

```c
#include "libnm.h"
```

Compile your project and link against the library:

```bash
cc main.c -L. -lnm -o program
```

Adjust the include paths and library name if necessary.
