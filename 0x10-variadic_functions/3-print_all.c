#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
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
		printf("(nil)");
	else
		printf("%s", va_arg(ap, char *));
}
/**
 * main - main function
 * Return: 0
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
	int i = 0, j = 0;
	va_list al;
	char *sep = ", ";

	va_start(al, format);
	while (format[j] != '\0' && format != NULL)
		j++;
	while (format[i] != '\0' && format != NULL)
	{
		if (i == j - 1)
			sep = "";
		if (format[i] == *(ops[i].formatype))
			 
		{
			ops[i].function(al);
			printf("%s", sep);
		}
		i++;
	}
	printf("\n");
	va_end(al);
}
