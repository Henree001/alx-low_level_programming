#include "main.h"
/**
 * times_table - main function
 *
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;

			if (prod <= 9)
			{
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			} else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
