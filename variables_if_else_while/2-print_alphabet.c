#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
