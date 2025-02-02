# ft_printf - Custom Implementation of printf

## Overview

This project is a custom implementation of the `printf` function in C, written without using standard library formatting functions. It supports various format specifiers and demonstrates low-level memory handling, variadic functions, and custom output formatting.

## Features

- Supports format specifiers:
  - `%c` (character)
  - `%s` (string)
  - `%p` (pointer address)
  - `%d`, `%i` (decimal integers)
  - `%u` (unsigned integer)
  - `%x`, `%X` (hexadecimal, lowercase and uppercase)
  - `%%` (literal percentage sign)
- Uses variadic arguments (`stdarg.h`) to handle dynamic input
- Includes custom helper functions (located in separate files in the repository)
- No use of standard library formatting functions

## Usage

```c
#include "libftprintf.h"

int main()
{
    ft_printf("Hello, %s! The number is %d\n", "world", 42);
    return 0;
}
```

## Why This Project?

This project was built to deepen my understanding of:
- Variadic functions (`va_list`)
- String and number formatting without standard helper functions
- Writing efficient, modular C code

## Compilation

To compile and run the project:

```sh
make run
```

## Notes

This project was originally developed as part of the 42 school system but has been improved independently. The repository contains additional helper functions for handling string formatting.

## License

This project is open-source and free to use.
