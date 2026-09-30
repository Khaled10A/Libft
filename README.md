*This project has been created as part of the 42 curriculum by kalnajja.*

# Libft

## Description

| | |
|---|---|
| **What** | A personal C library reimplementing standard `libc` functions (prefixed `ft_`), plus extra utility and linked-list helpers. |
| **Why** | To understand how these functions work internally (pointers, memory, edge cases) by writing them from scratch — no reliance on the original `libc`. |
| **Used for** | Foundation library reused across future 42 projects. |

## Library Overview

| Part | Theme | Count | Functions |
|---|---|---|---|
| **Part 1** | Libc functions | 23 | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_strlen` `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_strlcpy` `ft_strlcat` `ft_toupper` `ft_tolower` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr` `ft_atoi` `ft_calloc` `ft_strdup` |
| **Part 2** | Additional functions | 11 | `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa` `ft_strmapi` `ft_striteri` `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` |
| **Part 3** | Linked list | 9 | `ft_lstnew` `ft_lstadd_front` `ft_lstsize` `ft_lstlast` `ft_lstadd_back` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap` |

**Linked list structure:**

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

## Instructions

| Command | Effect |
|---|---|
| `make` | Builds `libft.a` |
| `make bonus` | Builds bonus files, if any |
| `make clean` | Removes object files |
| `make fclean` | Removes object files + `libft.a` |
| `make re` | `fclean` + full rebuild |

**Usage in another project:**

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror your_files.c -L. -lft -o your_program
```

Or copy the `libft` folder into your project and let its own `Makefile`
build it before compiling the rest of your sources.

## Resources

| Resource | Used for |
|---|---|
| `man 3 <function>` | Matching exact behavior/signature of every reimplemented function |
| Libft subject PDF (v19.3) | Exact prototypes, return values, edge cases (e.g. `calloc(0,0)`) |
| 42 Norm documentation | Style constraints — no `for`, static helpers, line limits |

### AI usage disclosure

| Task | How AI was used |
|---|---|
| Understanding function logic | Step-by-step explanations + flowcharts for *why* each check exists (e.g. why `memmove` handles overlap differently from `memcpy`, why `ft_itoa`/`ft_putnbr_fd` widen to `long` for `INT_MIN`) — no ready-made code was requested or copied. |
| Code review | Reviewing already hand-written code, flagging missed edge cases (e.g. the `n == 0` gap in an early `ft_itoa` draft) and explaining *why* they mattered, without supplying the fix directly. |
| Planning | General time-estimation help for organizing work across the three parts. |

All function implementations in this repository were written by hand by
the student; AI was not used to generate the submitted source code.

## Implementation notes

| Point | Detail |
|---|---|
| Global variables | Not used anywhere in this library |
| Helper functions | Declared `static` to restrict scope (e.g. in `ft_split`, `ft_itoa`) |
| `ft_calloc` | Guards against integer overflow before `nmemb * size` |
| `ft_itoa` / `ft_putnbr_fd` | Convert to `long` internally to safely handle `INT_MIN` |
