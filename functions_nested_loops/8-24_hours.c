#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	h1 = 48;
	h2 = 48;
	m1 = 48;
	m2 = 48;

	_putchar(h1);
	_putchar(h2);
	_putchar(58);
	_putchar(m1);
	_putchar(m2);
	_putchar('\n');
	
	while (h1 < 51 && h2 < 52 && m1 < 54 && m2 < 58)
	{
		m2++;

		if (m2 == 57)
		{
			m2 = 48;
			m1++;
		}
		if (m1 == 53 && m2 == 57)
		{
			h2++;
			m1 = 48;
			m2 = 48;
		}
		if (h2 == 57 && m1 == 53 && m2 == 57)
		{
			h1++;
			h2 = 48;
			m1 = 48;
			m2 = 48;
		}

		_putchar(h1);
        	_putchar(h2);
        	_putchar(58);
        	_putchar(m1);
        	_putchar(m2);
        	_putchar('\n');
	}
}
