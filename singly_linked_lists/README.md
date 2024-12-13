
# Singly Linked Lists in C

This project focuses on **Singly Linked Lists**, a fundamental data structure used to organize and store data in memory. Singly linked lists are linear collections where each element (node) contains data and a pointer to the next node in the list. This repository provides a series of exercises that will help you master the creation, manipulation, and traversal of singly linked lists in C.
# Project requirements & Tasks

- All files will be compiled on Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Code use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [lists.h](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/singly_linked_lists/lists.h)
## 0. Print list

Function that prints all the elements of a `list_t` list.

- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- If `str` is `NULL`, print `[0] (nil)`
- The use `printf` is allowed

File: [0-print_list.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/singly_linked_lists/0-print_list.c)

## 1. List length

Function that returns the number of elements in a linked `list_t` list.

- Prototype: `size_t list_len(const list_t *h);`

File: [1-list_len.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/singly_linked_lists/1-list_len.c)

## 2. Add node

Function that adds a new node at the beginning of a `list_t` list.

- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- The use `strdup` is allowed

File: [2-add_node.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/singly_linked_lists/2-add_node.c)

## 3. Add node at the end

Function that adds a new node at the end of a `list_t` list.

- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- The use `strdup` is allowed

File: [3-add_node_end.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/singly_linked_lists/3-add_node_end.c)

## 4. Free list

Function that frees a `list_t` list.

- Prototype: `void free_list(list_t *head);`

File: [4-free_list.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/singly_linked_lists/4-free_list.c)
