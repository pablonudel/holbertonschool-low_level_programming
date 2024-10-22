#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * except letters q and e,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 97; ch < 123; ch++)
	{
		if (ch != 101 && ch != 113)
		putchar(ch);
	}
	putchar(10);

	return (0);
}
