#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0
 */
int main(void)
{
	int fstDig, sndDig, lstDig;

	for (fstDig = 0; fstDig < 10 ; fstDig++)
	{
		for (sndDig = fstDig + 1; sndDig < 10; sndDig++)
		{
			for (lstDig = sndDig + 1; lstDig < 10; lstDig++)
			{
				putchar('0' + fstDig);
				putchar('0' + sndDig);
				putchar('0' + lstDig);

				if (lstDig == 9 && sndDig == lstDig - 1 && fstDig == lstDig -2) 
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
	}

	return (0);
}
