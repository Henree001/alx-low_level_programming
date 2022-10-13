#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char *));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
