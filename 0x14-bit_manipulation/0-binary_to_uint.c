#include "main.h"
#include "4-pow_recursion.c"
#include <string.h>
/**
 * binary_to_uint - binary to uint
 * @b: string to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, convert, j;
	int i;

	i = strlen(b) - 1;
	if (b == NULL)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		convert = (b[j] - '0') *(_pow_recursion(2, i));
		sum += convert;
		i--;
	}
	return (sum);
}
