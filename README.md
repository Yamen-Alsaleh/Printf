# ft_printf

**ft_printf** is a custom implementation of the standard C `printf` function, developed as part of the **42 Network curriculum** by **yalsaleh** during the **42 Irbid Common Core program (New Curriculum)**.

This project focuses on understanding variadic functions, formatted output, and low-level data representation.

---

## 📌 Overview

The goal of **ft_printf** is to recreate the behavior of the standard `printf` function, handling formatted output without using the original implementation.

Through this project, I gained deeper insight into:

* Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`)
* Parsing and interpreting format strings
* Integer and hexadecimal representations
* Memory-safe string handling
* Writing modular and extensible C code

The implementation follows the **42 Norm** and respects all project constraints.

---

## 🧩 Supported Conversions

The following format specifiers are supported:

| Specifier | Description                            |
| --------- | -------------------------------------- |
| `%c`      | Print a single character               |
| `%s`      | Print a string                         |
| `%p`      | Print a pointer address in hexadecimal |
| `%d`      | Print a signed decimal integer         |
| `%i`      | Print a signed integer                 |
| `%u`      | Print an unsigned decimal integer      |
| `%x`      | Print a hexadecimal number (lowercase) |
| `%X`      | Print a hexadecimal number (uppercase) |
| `%%`      | Print a literal percent sign           |

---

## ⚙️ Function Prototype

```c
int ft_printf(const char *format, ...);
```

* Returns the total number of characters printed
* Behaves similarly to the standard `printf` for supported specifiers

---

## ⚙️ Compilation & Usage

Compile the library using the provided `Makefile`:

```bash
make        # Compile and create libftprintf.a
make clean  # Remove object files
make fclean # Remove object files and libftprintf.a
make re     # Recompile everything
```

Example usage:

```c
ft_printf("Hello %s, number: %d\n", "world", 42);
```

To link the library:

```bash
cc main.c libftprintf.a
```

---

## 📁 Project Structure

* `ft_printf.c` — Core printf logic
* `ft_printf.h` — Function prototypes and macros
* `*.c` — Helper functions for printing and formatting
* `Makefile` — Build automation
* `libftprintf.a` — Generated static library

---

## 🤖 AI Usage Disclaimer

AI tools were used **only** for documentation structure and wording improvements.
No AI-generated code was used, in accordance with **42 academic rules**.

---

## ✅ Project Status

* ✔️ Completed
* ✔️ Norm-compliant
* ✔️ Fully functional for required specifiers
