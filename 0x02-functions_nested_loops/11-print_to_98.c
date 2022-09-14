#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - main function
 *
 * @n: the input number
 *
 * Return: always 0
 *
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("98\n");
}
