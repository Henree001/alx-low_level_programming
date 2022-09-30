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
	int i = 1, j = 2;
	int prod;
	prod = atoi(argv[i]) * atoi(argv[j]);

	if (argc == 3)
	{
		 printf("%d\n", prod);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}


