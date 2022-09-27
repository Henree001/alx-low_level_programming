#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i + j]; j++)
		{}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
