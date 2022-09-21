#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: first argument
 * @src: second argument
 *
 * Return: char value
 *
 */
char *_strcat(char *dest, char *src)
{
	int len_dest;
	int i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{}
	for (i = 0; src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	return (dest);
}
