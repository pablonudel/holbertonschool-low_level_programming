#include <stdio.h>
/**
 * main - prints the lower alphabet
 * in reverse,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 122; ch > 96; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
