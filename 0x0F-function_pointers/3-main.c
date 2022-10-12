#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: arguments
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a;
		int b;
		int (*func)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(a, b));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
