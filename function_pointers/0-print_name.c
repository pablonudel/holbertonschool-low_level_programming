#include "function_pointers.h"
/**
 * print_name - pass a name to a function to print it
 * @name: char pointer - name
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
