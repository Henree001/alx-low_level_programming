#include "main.h"
/**
 * _isdigit - main function
 *
 * @c: character to compare
 *
 * Return: 1 if its a digit, 0 if otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
