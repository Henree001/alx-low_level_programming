#include "main.h"
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
	n = n % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
