#include "main.h"
/**
 * swap_int - swap the value of two integers
 *
 * @a: first argument
 * @b: second argumen
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
