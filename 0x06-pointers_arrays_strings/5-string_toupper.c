#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @a: string
 *
 * Return: char value
 *
 */
char *string_toupper(char *a)
{
	int i, delt = 'a' - 'A';

	for (i = 0; a[i] != '\0'; i++)
		a[i] -= delt;
	return (a);
}
