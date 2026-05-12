# Libft - 42 Porto

*This project has been created as part of the 42 curriculum by allferna*

## 📝 Description
**Libft** is the first project of the 42 school curriculum. The core objective is to recreate several standard C library functions (`libc`), as well as additional utility functions for memory management, string manipulation, and linked list handling. This library serves as the foundation for all future C projects in the school.

## 🛠️ Compilation and Usage
The project is managed by a **Makefile** that supports the following rules:

- `make`: Compiles the mandatory functions (Part 1 and Part 2).
- `make bonus`: Compiles the linked list functions (Part 3).
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes the object files and the static library (`libft.a`).
- `make re`: Executes `fclean` followed by `make`.

To use the library in an external project, include the header file:
`#include "libft.h"` and link the `libft.a` file during compilation.

## 📚 Content

### Part 1 - Libc Functions
Re-implementation of essential functions from the standard library (e.g., `ft_strlen`, `ft_memcpy`, `ft_strnstr`, `ft_atoi`).

### Part 2 - Additional Functions
Utility functions not found in the original `libc` or implemented with specific behaviors (e.g., `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`).

### Part 3 - List Functions (Bonus)
Implementation of a linked list structure and functions for its manipulation (creation, insertion, deletion, iteration, and mapping).

## 🤖 Artificial Intelligence Usage
In accordance with 42’s integrity and learning guidelines, I used AI tools (Gemini) as support for:
- **Logical Clarification:** Detailed explanation of double pointers and node manipulation in linked lists.
- **Debugging:** Assistance in interpreting failure reports from automated testers (Francinette, War Machine), specifically regarding character overflow and search boundary edge cases in `strncmp` and `strrchr`.
- **Best Practices:** Discussion on the importance of `unsigned char` casting for memory comparison operations.
- **Documentation:** Help with structuring and translating this README file.

## 🔗 Resources
- C Standard Library Manuals (`man`).
- [Francinette](https://github.com/wa195/francinette) (Compliance Testing).
- [LibftTester](https://github.com/Tripouille/libftTester).