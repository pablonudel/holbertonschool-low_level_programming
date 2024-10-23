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
	
	while (hh != 23 && mm != 59)
	{
		for (mm = 0; mm < 60; mm++)
		{
			if(mm == 59)
			{
				mm = 0;
				hh++;
			}
		}
		
		if (hh < 10)
		{
			_putchar('0');
		}
		_putchar(hh);
		_putchar(':');
		if (mm < 10)
		{
			_putchar('0');
		}
		_putchar(mm);
		_putchar('\n');
	}
}
