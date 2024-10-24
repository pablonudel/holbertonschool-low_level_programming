#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hh;
	int hfd;
	int hld;
	int mm;
	int mfd;
	int mld;

	hh = 0;
	mm = 0;

	while (hh < 24 && mm < 60)
	{
		mld = mm % 10;
		mfd = (mm - mld) / 10;
		hld = hh % 10;
		hfd = (hh - hld) / 10;

		_putchar('0' + hfd);
		_putchar('0' + hld);
		_putchar(':');
		_putchar('0' + mfd);
		_putchar('0' + mld);
		_putchar('\n');

		if (mm == 59)
		{
			hh++;
			mm = -1;
		}
		mm++;
	}
}
