# File I/O in C

This repository contains a collection of exercises focused on File Input/Output (I/O) in the C programming language. The exercises explore low-level file operations, system calls, and file descriptors. The primary goal of this project is to understand how to interact with the operating system to create, read, write, and manipulate files in a Unix-like environment.


# Project requirements & Tasks

- Compilation on Ubuntu 20.04 LTS using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Code use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- Not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed were `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
- Allowed syscalls: `read`, `write`, `open`, `close`
- Allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in the header file called [main.h](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/file_io/main.h)

## 0. Tread lightly, she is near

Function that reads a text file and prints it to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- Where letters is the number of letters it should read and print
- Returns the actual number of letters it could read and print
- If the file can not be opened or read, return `0`
- If `filename` is `NULL` return `0`
- If `write` fails or does not write the expected amount of bytes, return `0`

File: [0-read_textfile.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/file_io/0-read_textfile.c)

## 1. Under the snow

Function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content);`
- Where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file
- Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, `write` “fails”, etc…)
- The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions.
- If the file already exists, truncate it
- If `filename` is `NULL` return `-1`
- If `text_content` is `NULL` create an empty file

File: [1-create_file.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/file_io/1-create_file.c)

## 2. Speak gently, she can hear

Function that appends text at the end of a file.

- Prototype: `int append_text_to_file(const char *filename, char *text_content);`
- where `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file
- Return: `1` on success and `-1` on failure
- Do not create the file if it does not exist
- If `filename` is `NULL` return `-1`
- If `text_content` is `NULL`, do not add anything to the file. Return `1` - If the file exists and `-1` if the file does not exist or if you do not have the required permissions to write the file

File: [2-append_text_to_file.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/file_io/2-append_text_to_file.c)

## 3. cp

Program that copies the content of a file to another file.

- Usage: `cp file_from file_to`
- If the number of argument is not the correct one, exit with code `97` and print `Usage: cp file_from file_to`, followed by a new line, on the `POSIX` standard error
- If `file_to` already exists, truncate it
- If `file_from` does not exist, or if you can not read it, exit with code `98` and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error
    - where `NAME_OF_THE_FILE` is the first argument passed to your program
- If you can not create or if `write` to `file_to` fails, exit with code 99 and print `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error
    - where `NAME_OF_THE_FILE` is the second argument passed to your program
- If you can not close a file descriptor, exit with code `100` and print `Error: Can't close fd FD_VALUE`, followed by a new line, on the `POSIX` standard error
    - where `FD_VALUE` is the value of the file descriptor
- Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions
- You must read `1,024` bytes at a time from the `file_from` to make less system calls. Use a buffer
- You are allowed to use `dprintf`

File: [3-cp.c](https://github.com/pablonudel/holbertonschool-low_level_programming/blob/main/file_io/3-cp.c)
