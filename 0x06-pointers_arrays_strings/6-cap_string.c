#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string
 *
 * Return: char value
 *
 */
char *cap_string(char *s)
{
	int i, j, delt = 'a' - 'A';
	char seperators[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
	')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13 ; j++)
			{
				if (s[i] == seperators[j])
				{
					if (s[i + 1] >= 'a' && s[i] <= 'z')
						s[i + 1] -= delt;
				}
			}
	}
	return (s);
}
