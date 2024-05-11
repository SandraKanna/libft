# LIBFT
First project of School 42. This is about understanding standard C functions and how they work.

## Mandatory part
For this project we have to recreate the behaviour of the following functions.
- **[isalpha](ft_isalpha.c)**: checks if the character passed as argument is a letter.
- **[isdigit](ft_isdigit.c)**: checks if the character passed as argument is a digit.
- **[isalnum](ft_isalnum.c)**: checks if the character passed as argument is alphanumeric.
- **[isascii](ft_isascii.c)**: checks if the character passed as argument is an ascii character.
- **[isprint](ft_isprint.c)**: checks if the character passed as argument is printable.
- **[strlen](ft_strlen.c)**: calculates the length of the string passed as argument.
- **[memset](ft_memset.c)**: sets n bytes of a string to a defined value passed as argument.
- **[bzero](ft_bzero.c)**: erases the data of the n first bytes of a string, setting their value to zero (useful to initialize memory in a cleaned way).
- **[memmove](ft_memmove.c)**: safely copies n bytes from a source string to a destination string, handling overlaps.
- **[memcpy](ft_memcpy.c)**: copies n bytes from a source string to a destination string. Does not handle overlaps, which can lead to errors.
- **[strlcpy](ft_strlcpy.c)**: copies a string.
- **[strlcat](ft_strlcat.c)**: concatenates 2 strings.
- **[toupper](ft_toupper.c)**: converts a lower case character to an upper case character.
- **[tolower](ft_tolower.c)**:  converts an upper case character to a lower case character.
- **[strchr](ft_strchr.c)**: search for the first occurence of a character in a string and returns a pointer to it (starts from the begining of the string).
- **[strrchr](ft_strrchr.c)**: search for the last occurence of a character in a string and returns a pointer to it (starts from the end of the string).
- **[strncmp](ft_strncmp.c)**: compares at most n characters of 2 null-terminated strings and returns the difference (0 if equals, positive if string1 > string2, negative if string1 < string2).
- **[memchr](ft_memchr.c)**: scans the initial n bytes of a string looking for a specific byte passed as argument. It returns a pointer to the byte (or NULL if it doesnt exist).
- **[memcmp](ft_memcmp.c)**: compares the first n bytes of 2 buffers and returns their difference.
- **[strnstr](ft_strnstr.c)**: looks for a null-terminated string within a bigger null-terminated string.
- **[atoi](ft_atoi.c)**: converts a character to an integer.
- **[calloc](ft_calloc.c)**: allocates memory and initializes its bytes to 0.
- **[strdup](ft_strdup.c)**: duplicates a string by creating a copy and allocating memory for it.
- **[substr](ft_substr.c)**: duplicates one part of a string, it creates a copy and allocates the memory for it.
- **[strjoin](ft_strjoin.c)**: joins 2 strings. It creates a 3rd string, allocates the memory for it and copies the content from the first string then the second.
- **[strtrim](ft_strtrim.c)**: trims a string. It creates another string, allocates the memory for it and retrieves the n characters that we need.
- **[split](ft_split.c)**: splits a string based on a defined separator character passed as an argument.
- **[itoa](ft_itoa.c)**: converts an integer to a character.
- **[strmapi](ft_strmapi.c)**: applies a function ’f’ to each character of the string passed as argument and returns a new string with the modifications.
- **[striteri](ft_striteri.c)**: modifies a string by applying a function ’f’ on each character of the string passed as argument, it returns the modified string.
- **[ft_putchar_fd](ft_putchar_fd.c)**: Outputs a character to the given file descriptor.
- **[ft_putstr_fd](ft_putstr_fd.c)**: Outputs the string ’s’ to the given file descriptor.
- **[ft_putendl_fd](ft_putendl_fd.c)**: Outputs a string to the file descriptor given as parameter and  prints a newline.
- **[ft_putnbr_fd](ft_putnbr_fd.c)**: Outputs the integer ’n’ to the given file descriptor.

## Bonus part
The bonus part is an introduction to linked lists in C. They can be a powerfull practical tool for later projects.
- **[ft_lstnew](ft_lstnew.c)**: creates a new node in the list.
- **[ft_lstadd_front](ft_lstadd_front.c)**: adds the new node at the beginning of the list.
- **[ft_lstsize](ft_lstsize.c)**: counts the number of nodes in one list.
- **[ft_lstlast](ft_lstlast.c)**: searches for the last element of the list and returns a pointer to it.
- **[ft_lstadd_back](ft_lstadd_back.c)**: adds the new node at the end of the list.
- **[ft_lstdelone](ft_lstdelone.c)**: frees the memory of the node’s content passed as parameter, without afecting the previous or next nodes.
- **[ft_lstclear](ft_lstclear.c)**: deletes and frees the node passed as parameter and every node after it.
- **[ft_lstiter](ft_lstiter.c)**: iterates the list passed as parameter and applies the function ’f’ (also passed as parameter) on the content of each node.
- **[ft_lstmap](ft_lstmap.c)**: it also iterates the list and applies a function to each node, but it creates a new list with the modified nodes.

For more about linked lists in C, visit [GeeksforGeeks]([url](https://www.geeksforgeeks.org/what-is-linked-list/)) on Linked Lists.

## The library
Once we have them all working fine, we have to create our own library that we can then enhanced, update and use for later projects.  
To do this we have to [create our first Makefile](Makefile). A Makefile helps us compile (translate into computer language) a program and recompile only parts of it if needed.
Learn how to create and use Makefiles here: https://makefiletutorial.com/

### Best luck! 
