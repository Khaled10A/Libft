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
| [CS50 (Harvard)](https://cs50.harvard.edu/x/) — C section | General refresher on pointers, memory allocation, and string handling in C |
| [Portfolio Courses](https://www.youtube.com/@PortfolioCourses) (YouTube) | C programming tutorials used while working through pointer arithmetic and string functions |
| Stack Overflow | Understanding `memcpy` vs `memmove` and why overlapping memory regions require copying in reverse |

### AI usage disclosure

AI was used as a learning and debugging assistant during the project.

| Task | How AI was used |
|---|---|
| Debugging & memory analysis | Learning and understanding tools such as **Valgrind** to detect memory leaks, invalid reads/writes, and memory-related errors. |
| Memory visualization | Using **flowcharts and memory diagrams** to visualize pointers, heap allocations, linked lists, and how memory is connected. |
| C concepts | Explaining concepts such as pointers, dynamic memory allocation, and memory overlap in functions like `memcpy` and `memmove`. |
| Code understanding | Reviewing already-written code and explaining its behavior, edge cases, and possible memory issues. |


## Implementation notes

| Point | Detail |
|---|---|
| Global variables | Not used anywhere in this library |
| Helper functions | Declared `static` to restrict scope (e.g. in `ft_split`, `ft_itoa`) |
| `ft_calloc` | Guards against integer overflow before `nmemb * size` |
| `ft_itoa` / `ft_putnbr_fd` | Convert to `long` internally to safely handle `INT_MIN` |

## Function Categories

### Part 1 — Libc Functions

Reimplementations of commonly used C standard library functions. This part focuses on character validation, string manipulation, memory operations, and dynamic memory allocation.

| Category | Functions | Description |
|---|---|---|
| **Character Checks** | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Check whether a character belongs to a specific character set or range. |
| **String Length & Case** | `ft_strlen`, `ft_toupper`, `ft_tolower` | Measure string length and convert characters between uppercase and lowercase. |
| **Memory Operations** | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Work directly with raw memory, including initialization, copying, searching, and comparison. |
| **String Operations** | `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Copy, concatenate, search, and compare null-terminated strings with length limits. |
| **Number Conversion** | `ft_atoi` | Convert a numeric string into an integer while handling whitespace and signs. |
| **Dynamic Memory** | `ft_calloc`, `ft_strdup` | Allocate memory dynamically and create duplicated strings. |

### Part 2 — Additional Functions

Utility functions built on top of the concepts learned in Part 1. This part focuses on dynamic string construction, string transformation, callbacks, and file-descriptor output.

| Category | Functions | Description |
|---|---|---|
| **String Construction** | `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split` | Create, combine, clean, and divide strings while managing dynamically allocated memory. |
| **Number to String** | `ft_itoa` | Convert an integer into a dynamically allocated string representation. |
| **String Iteration & Mapping** | `ft_strmapi`, `ft_striteri` | Apply a custom function to each character of a string using callbacks. |
| **File Descriptor Output** | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write characters, strings, and numbers directly to a specified file descriptor. |

### Part 3 — Linked Lists

Implementation of a singly linked-list data structure using dynamically allocated nodes. This part introduces structures, pointers, function pointers, and memory ownership.

| Category | Functions | Description |
|---|---|---|
| **Node Creation** | `ft_lstnew` | Create and initialize a new linked-list node. |
| **List Insertion** | `ft_lstadd_front`, `ft_lstadd_back` | Add nodes to the beginning or end of a list. |
| **List Traversal & Size** | `ft_lstsize`, `ft_lstlast` | Count nodes and retrieve the last node in a list. |
| **Memory Management** | `ft_lstdelone`, `ft_lstclear` | Delete individual nodes or clear an entire list while freeing allocated memory. |
| **List Iteration** | `ft_lstiter` | Apply a function to the content of every node. |
| **List Mapping** | `ft_lstmap` | Create a new list by applying a function to every node's content, while handling allocation failures and cleanup. |

