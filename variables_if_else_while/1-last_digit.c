#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int n;
	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	prinf("Last digit of ");
	prinf("%d is %d ", n, lastdigit);
	if (lastdigit > 5)
	{
		printf("and is grater than 5");
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("and is less than 6 and not 0");
	}
	else
	{
		printf("and is 0");
	}
	return (0);
}
