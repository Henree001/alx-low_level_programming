#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_char - prints a char value
 * @ap: arguments parameter
 *
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_int - prints an int value
 * @ap: arguments parameter
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - prints a float value
 * @ap: arguments parameter
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_string - prints a strings
 * @ap: arguments parameter
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", va_arg(ap, char *));
}
/**
 * print_all - prints all datatype
 * @format: list of type of arguments
 */
void print_all(const char * const format, ...)
{
	print_f ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0, k = 0;
	va_list al;
	char *sep = "";

	va_start(al, format);

	while (format[i] != '\0' && format != NULL)
	{
		while (ops[k].function != NULL)
		{
			if (format[i] == *(ops[k].formatype))
			{
				printf("%s", sep);
				ops[k].function(al);
			}
			k++;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(al);
}
