#include "main.h"
/**
 * jack_bauer - main function
 *
 */
void jack_bauer(void)
{
	int j;
	int i;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i <= 59; i++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
