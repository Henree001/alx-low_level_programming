#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of string
 *
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((_strlen(str) % 2 == 0) && (i >= (_strlen(str) / 2)))
			_putchar(str[i]);
		else if ((_strlen(str) % 2 != 0) && (i > (_strlen(str) / 2)))
			_putchar(str[i]);
	}
	_putchar('\n');
}
