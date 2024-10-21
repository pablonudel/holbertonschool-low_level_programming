#include <stdio.h>
/**
 * main - prints size of various types
 * Return: 0
 */
int main(void)
{
	char CHAR;
	int INT;
	long int LINT;
	long long int LLINT;
	float FLOAT;

	printf("Size of a char: %lu byte(s)\n", sizeof(CHAR));
	printf("Size of an int: %lu byte(s)\n", sizeof(INT));
	printf("Size of a long int: %lu byte(s)\n", sizeof(LINT));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(LLINT));
	printf("Size of a float: %lu byte(s)\n", sizeof(FLOAT));
	return (0);
}
