*This project has been created as part of the 42 curriculum by kalnajja.*

# Libft

## Description

Libft is a personal library that reimplements a set of standard C library
functions (`libc`) — such as `strlen`, `memcpy`, `strdup` — from scratch,
prefixed with `ft_`, along with a set of additional utility functions
(string manipulation, integer conversion, higher-order function helpers)
and a small linked-list toolkit built around a custom `t_list` structure.

The goal of this project is not just to produce a working library, but to
truly understand how these fundamental functions behave internally
(pointer arithmetic, memory allocation, edge cases such as `NULL`,
`INT_MIN`, overlapping memory regions, etc.) by writing every function
manually, without relying on the original `libc` implementations.

This library is meant to be reused as a foundation for every future C
project in the 42 curriculum.

## Library Overview

The library is organized into three parts:

### Part 1 — Libc functions
Reimplementations of standard `libc` functions, keeping the exact same
prototype and behavior as documented in the man pages:

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`,
`ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`,
`ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`,
`ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`,
`ft_atoi`, `ft_calloc`, `ft_strdup`.

### Part 2 — Additional functions
Utility functions that either don't exist in the `libc` or exist in a
different form:

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`,
`ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`,
`ft_putendl_fd`, `ft_putnbr_fd`.

### Part 3 — Linked list
A minimal singly-linked list toolkit built on:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Functions: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`,
`ft_lstmap`.

## Instructions

### Compilation

```bash
make            # builds libft.a
make bonus      # builds bonus files, if any
make clean      # removes object files
make fclean     # removes object files and libft.a
make re         # fclean + full rebuild
```

The library is compiled with `-Wall -Wextra -Werror`, and archived into
`libft.a` at the root of the repository using `ar`.

### Usage in another project

```c
#include "libft.h"
```

Compile and link against the archive:

```bash
cc -Wall -Wextra -Werror your_files.c -L. -lft -o your_program
```

Or copy the `libft` folder into your project and build it via its own
`Makefile` before compiling the rest of your sources, as required by
the 42 common instructions.

## Resources

- `man 3 <function>` — the primary reference used to match the exact
  behavior/signature of every reimplemented `libc` function
  (e.g. `man 3 strlcpy`, `man 3 memmove`).
- The Libft subject PDF (v19.3) — for exact prototypes, return values,
  and edge-case requirements (e.g. `calloc` behavior when `nmemb` or
  `size` is `0`).
- 42 Norm documentation — for code style constraints (no `for` loops,
  static helper functions, file/function line limits, etc.).

### AI usage disclosure

An AI assistant (Claude, Anthropic) was used strictly as a **learning
and review aid**, in the following ways:

- Explaining the *logic* behind each function (why a check is needed,
  why `memmove` must handle overlapping memory differently from
  `memcpy`, why `ft_itoa`/`ft_putnbr_fd` need to widen to `long` to
  safely handle `INT_MIN`, etc.) through step-by-step breakdowns and
  flowcharts, without providing ready-made code to copy.
- **Reviewing code that was already written** by the student, pointing
  out edge cases that were missed (e.g. the `n == 0` case initially
  missing in a draft of `ft_itoa`) and explaining *why* they mattered,
  rather than supplying the fix directly.
- General planning/time-estimation help for organizing the work across
  the three parts of the project.

All function implementations in this repository were written by hand by
the student; the AI was not used to generate the submitted source code.

## Additional notes

- Global variables are not used anywhere in this library.
- Helper functions used to break down more complex logic (e.g. in
  `ft_split`, `ft_itoa`) are declared `static` to restrict their scope
  to their own file.
- `ft_calloc` guards against integer overflow before multiplying
  `nmemb * size`.
- `ft_itoa` and `ft_putnbr_fd` convert to `long` internally to safely
  handle `INT_MIN` without signed integer overflow.
