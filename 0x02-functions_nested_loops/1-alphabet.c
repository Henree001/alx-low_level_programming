#include "main.h"
/**
 * main - entry point
 *
 *Print_alphabet - prints alphabets
 *
 * Return: always 0
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
