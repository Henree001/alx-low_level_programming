#include "main.h"
/**
 * rot13 - encrypts code
 * @s: string to encrypt
 * Return: char value
 */
char *rot13(char *s)
{
	int i, j;
	char rot13a[] = "ABCDEFGHIJKLMabcdefghijklm";
	char rot13b[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rot13a[j] != '\0'; j++)
		{
			if (s[i] == rot13a[j])
			{
				s[i] = rot13b[j];
				break;
			}
			if (s[i] == rot13b[j])
			{
				s[i] = rot13a[j];
				break;
			}
		}
	}
	return (s);
}
