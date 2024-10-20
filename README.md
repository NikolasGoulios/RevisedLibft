# Revised Libft

RevisedLibft is an enhanced version of my own implementation of libft project of @Hive Helsinki, providing additional utilities for string manipulation, memory management, linked lists, and more. This project reorganizes and expands the original `libft`, making it modular, easier to maintain and add complicated ft_printf and get_next_line implementations.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functions List](#functions-list)
- [Project Structure](#project-structure)
- [License](#license)

## Features

- **Character Functions**: `ft_isalpha`, `ft_isdigit`, `ft_tolower`, etc.
- **String Manipulation**: `ft_strlen`, `ft_strjoin`, `ft_strtrim`, etc.
- **Memory Functions**: `ft_memcpy`, `ft_memset`, `ft_calloc`, etc.
- **Linked List Functions**: Bonus implementation for handling linked lists.
- **Printf and Output**: Custom implementation of `ft_printf` and various output functions.
- **Modular Design**: Functions are split into different categories like `ctype`, `memory`, `string`, and more for clarity.

## Installation

To integrate **RevisedLibft** into your project, follow these steps:

1. Clone the repository:

    ```bash
    git clone https://github.com/NikolasGoulios/RevisedLibft.git
    ```

2. Navigate to the project directory:

    ```bash
    cd RevisedLibft
    ```

3. Compile the library:

    ```bash
    make
    ```

4. You can also clean up the object files and recompile using:

    ```bash
    make clean
    make re
    ```

## Usage

Once compiled, the library file `libft.a` can be included in your own C projects by linking it during compilation:

```bash
gcc -L. -lft your_file.c -o your_program
```

## Functions List

### Character Functions (ctype/)
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isalpha` - Checks if a character is alphabetic.
- `ft_isascii` - Checks if a character is in ASCII set.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isprint` - Checks if a character is printable.
- `ft_tolower` - Converts a character to lowercase.
- `ft_toupper` - Converts a character to uppercase.

### String Functions (string/)
- `ft_strlen` - Returns the length of a string.
- `ft_strjoin` - Concatenates two strings.
- `ft_strtrim` - Trims whitespace from a string.
- `ft_split` - Splits a string by a delimiter.
- `ft_strncmp` - Compares two strings up to `n` characters.
- `ft_strnstr` - Locates a substring in a string.
- `ft_strdup` - Duplicates a string.
- `ft_strmapi` - Applies a function to each character of a string.
- `ft_strupper` - Converts a string to uppercase, respectively.
- `ft_strlower` - Converts a string to lowercase, respectively.
- `ft_strndup` - Duplicates a string up to n characters.
- `ft_strdel` - Safely frees memory for strings.
- `ft_strdel` - Safely frees memory blocks. 

### Memory Functions (memory/)
- `ft_memset` - Fills a block of memory with a specific value.
- `ft_memcpy` - Copies memory from one area to another.
- `ft_memmove` - Moves memory from one area to another.
- `ft_calloc` - Allocates memory and sets it to zero.
- `ft_memchr` - Searches for a character in a block of memory.
- `ft_bzero` - Zeroes out a block of memory.

### Math Functions (math/)
- `ft_atoi` - Converts a string to an integer.
- `ft_itoa` - Converts an integer to a string.

### Linked List Functions (list/)
- `ft_lstnew` - Creates a new list node.
- `ft_lstadd_front` - Adds a node at the front of a list.
- `ft_lstadd_back` - Adds a node at the back of a list.
- `ft_lstsize` - Returns the size of a linked list.
- `ft_lstlast` - Returns the last node of a list.
- `ft_lstdelone` - Deletes a single node.
- `ft_lstclear` - Clears a linked list.
- `ft_lstiter` - Iterates through a list and applies a function.
- `ft_lstmap` - Maps a function to each node of a list.

### Output Functions (output/)
- `ft_putchar_fd` - Outputs a character to a file descriptor.
- `ft_putstr_fd` - Outputs a string to a file descriptor.
- `ft_putendl_fd` - Outputs a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Outputs an integer to a file descriptor.
- `ft_putchar` - Outputs a character.
- `ft_putnbr` - Outputs an integer.
- `ft_putstr` - Outputs a string.

### ft_Printf Functions (output/)
- `ft_printf` - Custom printf function for formatted output.
- `ft_putaddress` - Prints a pointer address in hexadecimal format.
- `ft_puthexa` - Prints a hexadecimal number.
- `ft_putunsigned` - Prints an unsigned integer.

### Get Next Line (gnl/)
- `get_next_line` - Reads a line from multiple file descriptors.

## Project Structure

```bash
RevisedLibft/
├── ctype/        # Character manipulation functions
├── list/         # Linked list bonus functions
├── math/         # Mathematical utility functions
├── memory/       # Memory management functions
├── output/       # Output and printf-related functions
├── string/       # String manipulation functions
├── gnl/          # Get Next Line implementation
├── libft.h       # Main header file
├── Makefile      # Build instructions
└── README.md     # Project documentation (this file)
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
