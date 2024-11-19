#include "variadic_functions.h"
/**
 * print_char - print character.
 * @args: args
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - print integer.
 * @args: args
 *
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print float.
 * @args: args
 *
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - print string.
 * @args: args
 *
 * Return: void
 */
void print_string(va_list args)
{
	char *arg = va_arg(args, char*);

	if (arg  == NULL)
	{
		printf("%s", "(nil)");
		return;
	}
	printf("%s", arg);

}
/**
 * print_all - prints anything.
 * @format: char pointer
 * @...: args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list args;
	char *sep = "";

	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (format[i] == *ops[j].op)
			{
				printf("%s", sep);
				ops[j].f(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
