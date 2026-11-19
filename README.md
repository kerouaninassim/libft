*This project has been created as part of the 42 curriculum by nkerouan*

# Libft

## Description

**Libft** is the first library project at 42. The goal of this project is to create a personal C library by reimplementing several standard C library functions, developing additional utility functions, and implementing linked list manipulation functions.

The purpose is to understand how commonly used C functions work internally, improve programming skills, and build a collection of reusable functions that can be used in future 42 projects.

The library is divided into three main parts:

- **Part 1 – Libc functions:** Reimplementation of standard C library functions.
- **Part 2 – Additional functions:** Creation of useful functions for string manipulation, memory management, and output.
- **Part 3 – Linked Lists:** Implementation of functions to create, manipulate, and manage linked lists.

All functions are implemented in C, following the 42 Norm.

## Library Contents

### Part 1 – Libc Functions

This section contains reimplementations of standard C library functions. Each function follows the behavior and prototype of its original counterpart, with the `ft_` prefix.

**Character classification**
- `ft_isalpha` – Checks whether a character is alphabetic.
- `ft_isdigit` – Checks whether a character is a digit.
- `ft_isalnum` – Checks whether a character is alphanumeric.
- `ft_isascii` – Checks whether a character belongs to the ASCII character set.
- `ft_isprint` – Checks whether a character is printable.

**String manipulation**
- `ft_strlen` – Calculates the length of a string.
- `ft_strchr` – Locates the first occurrence of a character in a string.
- `ft_strrchr` – Locates the last occurrence of a character in a string.
- `ft_strncmp` – Compares two strings up to a specified number of characters.
- `ft_strlcpy` – Copies a string with size limitation.
- `ft_strlcat` – Concatenates strings with size limitation.
- `ft_strnstr` – Locates a substring within a string, searching up to a specified length.
- `ft_strdup` – Duplicates a string.

**Memory manipulation**
- `ft_memset` – Fills a memory area with a specified byte.
- `ft_bzero` – Sets a memory area to zero.
- `ft_memcpy` – Copies a memory area.
- `ft_memmove` – Copies a memory area while handling overlapping memory regions.
- `ft_memchr` – Searches for a character in a memory area.
- `ft_memcmp` – Compares two memory areas.

**Character conversion**
- `ft_toupper` – Converts a lowercase character to uppercase.
- `ft_tolower` – Converts an uppercase character to lowercase.

**Other functions**
- `ft_atoi` – Converts a string into an integer.
- `ft_calloc` – Allocates memory and initializes it to zero.

### Part 2 – Additional Functions

This section introduces new utility functions that are not part of the standard C library or provide different functionality.

**String manipulation**
- `ft_substr` – Creates a substring from a given string.
- `ft_strjoin` – Concatenates two strings into a new string.
- `ft_strtrim` – Removes specified characters from the beginning and end of a string.
- `ft_split` – Splits a string into an array of strings using a delimiter.
- `ft_itoa` – Converts an integer into a string.
- `ft_strmapi` – Applies a function to each character of a string and returns a new string.
- `ft_striteri` – Applies a function to each character of a string, allowing modifications in place.

**Output functions**
- `ft_putchar_fd` – Writes a character to a specified file descriptor.
- `ft_putstr_fd` – Writes a string to a specified file descriptor.
- `ft_putendl_fd` – Writes a string followed by a newline to a specified file descriptor.
- `ft_putnbr_fd` – Writes an integer to a specified file descriptor.

### Part 3 – Linked Lists

This section focuses on creating and manipulating singly linked lists using the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains:
- `content`: A pointer to the data stored in the node.
- `next`: A pointer to the next node in the list, or `NULL` if it is the last node.

**Linked list functions**

- `ft_lstnew` – Creates a new list node.
- `ft_lstadd_front` – Adds a node at the beginning of a list.
- `ft_lstsize` – Counts the number of nodes in a list.
- `ft_lstlast` – Returns the last node of a list.
- `ft_lstadd_back` – Adds a node at the end of a list.
- `ft_lstdelone` – Deletes one node and frees its content.
- `ft_lstclear` – Deletes and frees an entire list.
- `ft_lstiter` – Applies a function to the content of each node.
- `ft_lstmap` – Creates a new list by applying a function to each node's content.

## Instructions

### Requirements

To compile and use this library, you need:

- A C compiler (`cc`).
- The `make` utility.
- The `ar` command to create the static library.

### Compilation

Clone the repository:

```bash
git clone git@vogsphere.42lyon.fr:vogsphere/intra-uuid-272eee80-2b0b-41e8-bc37-8935fec1ff78-7796128-nkerouan
cd libft
```

Compile the library:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make all` | Compiles all source files. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Cleans and recompiles the library. |

### Using the Library

Include the header file in your C project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run your program:

```bash
./program
```

## Technical Considerations

The project follows the mandatory requirements of the 42 subject:

- All source files are written in C.
- Code must follow the 42 Norm.
- Compilation uses `-Wall -Wextra -Werror`.
- Global variables are strictly forbidden.
- Helper functions must be declared `static` when appropriate.
- All dynamically allocated memory must be properly freed.
- The static library must be created using `ar`.
- The generated `libft.a` must be located at the root of the repository.
- Unused files must not be submitted.

## Resources

The following resources are useful for understanding and implementing the library:

- **42 Libft Subject:** Official project instructions and function requirements.
- **Linux Man Pages:** Documentation for standard C functions (`man 3 function_name`).
- **C Reference:** https://en.cppreference.com/w/c
- **GNU C Library Documentation:** https://www.gnu.org/software/libc/manual/
- **Make Documentation:** https://www.gnu.org/software/make/manual/

## Author

**nkerouan** – 42 Student

---

*Libft – Building strong foundations in C programming.*