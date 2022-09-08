#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	printf("The size of a char is: %ld byte(s)\n", sizeof(char));
	printf("The size of a int is: %ld byte(s)\n", sizeof(int));
	printf("The size of a float is: %ld byte(s)\n", sizeof(float));
	printf("The size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("The size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	return (0);
}
