#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int fstDig, lstDig;

	for (fstDig = 0; fstDig <= 9 ; fstDig++)
	{
		for (lstDig = fstDig + 1; lstDig < 10; lstDig++)
		{
			putchar('0' + fstDig);
			putchar('0' + lstDig);

			if (fstDig == lstDig - 1 && lstDig == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
