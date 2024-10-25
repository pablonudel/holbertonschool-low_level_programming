#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hh;
	int mm;

	hh = 0;
	mm = 0;

	while (hh < 24 && mm < 60)
	{
		_putchar('0' + (hh / 10));
		_putchar('0' + (hh % 10));
		_putchar(':');
		_putchar('0' + (mm / 10));
		_putchar('0' + (mm % 10));
		_putchar('\n');

		if (mm == 59)
		{
			hh++;
			mm = -1;
		}
		mm++;
	}
}
