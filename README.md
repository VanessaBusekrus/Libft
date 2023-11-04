# Libft - The very first library

Libft is a project that involves rewriting a set of functions from the standard C library (libc) with the same prototypes and behaviors as the original functions. The only difference is that the functions will have names prefixed with 'ft_' instead of the standard names. This project aims to help you understand the underlying implementation of these functions and provide a library that can be used in other projects.

## Part 1 - Standard C Library Functions

The following functions are implemented in the Libft library:

### String Manipulation
- `ft_strlen`: Calculate the length of a string.
- `ft_strchr`: Locate the first occurrence of a character in a string.
- `ft_strrchr`: Locate the last occurrence of a character in a string.
- `ft_strlcpy`: Copy strings with a size limit.
- `ft_strlcat`: Concatenate strings with a size limit.
- `ft_strnstr`: Locate a substring within a string.
- `ft_strjoin`: Concatenate two strings.
- `ft_strtrim`: Trim characters from the beginning and end of a string.
- `ft_substr`: Create a substring from a string.

### Character Classification
- `ft_isalpha`: Check if a character is alphabetic.
- `ft_isdigit`: Check if a character is a digit.
- `ft_isalnum`: Check if a character is alphanumeric.
- `ft_isascii`: Check if a character is a valid ASCII character.
- `ft_isprint`: Check if a character is printable.
- `ft_toupper`: Convert a character to uppercase.
- `ft_tolower`: Convert a character to lowercase.

### Memory Manipulation
- `ft_memset`: Fill memory with a constant byte.
- `ft_bzero`: Set a block of memory to zero.
- `ft_memcpy`: Copy memory from one location to another.
- `ft_memmove`: Copy memory from one location to another, handling overlaps.
- `ft_memchr`: Locate the first occurrence of a byte in memory.
- `ft_memcmp`: Compare two memory areas.
- `ft_calloc`: Allocate and clear memory for an array.
- `ft_strdup`: Duplicate a string.

### String Conversion
- `ft_atoi`: Convert a string to an integer.

## Part 2 - Additional Functions

In this part, you will find additional functions not found in the standard C library, including:

- `ft_itoa`: Convert an integer to a string.
- `ft_strmapi`: Apply a function to each character in a string and create a new string.
- `ft_striteri`: Apply a function to each character in a string with the character's index.
- `ft_putchar_fd`: Output a character to a file descriptor.
- `ft_putstr_fd`: Output a string to a file descriptor.
- `ft_putendl_fd`: Output a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Output an integer to a file descriptor.

These functions are not only useful for your Libft library but can also be used in various other projects.

Feel free to explore the source code and documentation in this repository to better understand how each function is implemented.

## How to Use

To use the Libft library, you can simply include the `libft.h` header file in your project and link the compiled `libft.a` library. Make sure to follow the standard C library function prototypes, but prefix them with 'ft_'.

If you encounter any issues or have suggestions for improvements, please feel free to [submit an issue](https://github.com/Vanessa-BV/Libft/issues) or create a [pull request](https://github.com/Vanessa-BV/Libft/pulls).

Happy coding with your Libft library!
