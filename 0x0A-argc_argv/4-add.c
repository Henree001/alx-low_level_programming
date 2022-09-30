#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;
	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}	
	printf("%d\n", sum);
	return (0);
}
		

