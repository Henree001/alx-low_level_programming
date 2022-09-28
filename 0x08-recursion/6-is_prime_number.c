#include "main.h"
/**
 * is_prime_number - checks for prime number
 * @n: number to be checked
 * Return: 1 if its a prime number, 0 if not
 */
int is_prime_number(int n)
{
	int y = 2;
	if (n < 2)
		return (0);
	return (helper(n, y));
}
/**
 * helper - function to help check for prime number
 * @n: parameter used
 * @y: parameter used
 * Return: always 0
 */
int helper(int n, int y)
{
	if (n % y == 0 && n != y)
		return (0);
	if (n > y && n % y != 0)
		return (helper(n, y + 1));
	return (1);
}
