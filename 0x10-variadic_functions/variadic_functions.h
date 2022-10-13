#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <unistd.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c)
{
	return (write(1, &c, 1));
}
