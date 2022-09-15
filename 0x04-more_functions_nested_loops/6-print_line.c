#include "main.h"
/**
 * print_line - main function
 *
 * @n: number of times to be printed
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
