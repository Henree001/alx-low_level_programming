#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		unsigned int i;
		va_list ap;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
				printf("%d", va_arg(ap, unsigned int));
			else
				printf("%d%s", va_arg(ap, unsigned int), separator);
		}
		va_end(ap);
		printf("\n");
	}
}
