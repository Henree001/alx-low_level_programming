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
	int i, delt = 'a' - 'A';

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0]-= delt;
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ') ||
		(s[i] == '\t') ||
		(s[i] == '\n') ||
		(s[i] == ',') ||
		(s[i] == ';') ||
		(s[i] == '.') ||
		(s[i] == '!') ||
		(s[i] == '?') ||
		(s[i] == '"') ||
		(s[i] == '(') ||
		(s[i] == ')') ||
		(s[i] == '{') ||
		(s[i] == '}'))
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= delt;
	}
	return (s);
}
