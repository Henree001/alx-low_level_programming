#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("The size of a char is: %ld byte(s)\n", sizeof(c));
	printf("The size of a int is: %ld byte(s)\n", sizeof(i));
	printf("The size of a float is: %ld byte(s)\n", sizeof(f));
	printf("The size of a long int: %ld bytes(s)\n", sizeof(li));
	printf("The size of a long long int: %ld bytes(s)\n", sizeof(lli));
	return (0);
}
