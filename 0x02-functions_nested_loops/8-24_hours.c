#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jackB
 *
 * Returns: nothing
 */
void jack_bauer(void)
{
	int hour = 0;

	while (hour < 24)
	{
		int minute = 0;

		while (minute < 60)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			minute++;
			_putchar('\n');
		}
		hour++;
	}
}
