#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char chl;
	char chu;

	for (chl = 97; chl < 123; chl++)
	{
		putchar(chl);
	}
	for (chu = 65; chu < 97; chu++)
	{
		putchar(chu);
	}
	putchar(10);

	return (0);
}
