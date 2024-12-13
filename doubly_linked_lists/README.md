
# Doubly Linked Lists in C

This project focuses on **Doubly Linked Lists**, a fundamental data structure used to store a collection of elements in memory. Unlike singly linked lists, doubly linked lists allow traversal in both directions: forwards and backwards. This repository provides exercises that cover the creation, manipulation, and traversal of doubly linked lists in C, offering a deeper understanding of pointers, dynamic memory management, and data structure implementation.


# Project requirements & Tasks

- Files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- Code use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed were `malloc`, `free`, `printf` and `exit`. 
- The prototypes of all functions should be included in your header file called [lists.h](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/lists.h)
## 0. Print list

Function that prints all the elements of a `dlistint_t` list.

- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes

File: [0-print_dlistint.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/0-print_dlistint.c)

## 1. List length

Function that returns the number of elements in a linked `dlistint_t` list.

- Prototype: `size_t dlistint_len(const dlistint_t *h);`

File: [1-dlistint_len.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/1-dlistint_len.c)

## 2. Add node

Function that adds a new node at the beginning of a `dlistint_t` list.

- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

File: [2-add_dnodeint.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/2-add_dnodeint.c)

## 3. Add node at the end

Function that adds a new node at the end of a `dlistint_t` list.

- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

File: [3-add_dnodeint_end.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/3-add_dnodeint_end.c)

## 4. Free list

Function that frees a `dlistint_t` list.

- Prototype: `void free_dlistint(dlistint_t *head);`

File: [4-free_dlistint.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/4-free_dlistint.c)

## 5. Get node at index

Function that returns the nth node of a `dlistint_t` linked list.

- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- Where `index` is the index of the node, starting from `0`
- If the node does not exist, return `NULL`

File: [5-get_dnodeint.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/5-get_dnodeint.c)

## 6. Sum list

Function that returns the sum of all the data (n) of a `dlistint_t` linked list.

- Prototype: `int sum_dlistint(dlistint_t *head);`
- If the list is empty, return `0`

File: [6-sum_dlistint.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/6-sum_dlistint.c)

## 7. Insert at index

Function that inserts a new node at a given position.

- Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- Where `idx` is the index of the list where the new node should be added. Index starts at `0`
- Returns: the address of the new node, or `NULL` if it failed
- If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
- Files ***2-add_dnodeint.c*** and ***3-add_dnodeint_end.c*** will be included in the compilation

File: [7-insert_dnodeint.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/7-insert_dnodeint.c)

## 8. Delete at index

Function that deletes the node at index `index` of a `dlistint_t` linked list.

- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- Where `index` is the index of the node that should be deleted. Index starts at `0`
- Returns: `1` if it succeeded, `-1` if it failed

File: [8-delete_dnodeint.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/8-delete_dnodeint.c)
