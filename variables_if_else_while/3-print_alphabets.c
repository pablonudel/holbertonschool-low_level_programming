#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char chl[26] = "abcdefghijklmnopqrstuvwxyz";
	char chu[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < 26; i++)
	{
		putchar(chl[i]);
	}
	for (int i = 0; 1 < 26; i++)
	{
		putchar(chu[i]);
	}
	putchar(10);

	return (0);
}
