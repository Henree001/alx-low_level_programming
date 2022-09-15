#include "main.h"
/**
 * _isupper - main function
 *
 * @c: compare character
 *
 * Return: 1 if uppercase 0 if otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
