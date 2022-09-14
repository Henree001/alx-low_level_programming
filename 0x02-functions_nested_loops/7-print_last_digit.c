#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: prints last digit
 *
 * Return: always n
 *
 */
int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return (_abs(n % 10));
}
