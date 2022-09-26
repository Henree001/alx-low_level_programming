#include "main.h"
/**
* leet - leet
* @s: string
*
* return: char value
*/
char *leet(char *s)
{
	char alphaArr[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; num[j] != '\0'; j++)
		{
			if (s[i] == alphaArr[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
