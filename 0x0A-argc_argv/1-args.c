#include <stdio.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
