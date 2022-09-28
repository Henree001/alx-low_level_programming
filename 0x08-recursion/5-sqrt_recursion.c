#include "main.h"
/**
 * helper - helps to check square root
 * @y: integer used
 * @n: integer used
 * Return: value of root
 */
int helper(int n, int y)
{
	if (n == y * y)
		return (y);
	if (n < y * y)
		return (-1);
	return (helper(n, y + 1));
}

/**
 * _sqrt_recursion - returns square root
 * @n: integer to return
 * Return: returns int of squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
