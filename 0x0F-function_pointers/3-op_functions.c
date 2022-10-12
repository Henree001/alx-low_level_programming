#include "3-calc.h"
/**
 * op_add - sum of a and b
 * @a: first value to be added
 * @b: second value to be added
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub - finds the difference of two numbers
 * @a: first value
 * @b: second value
 * Return: difference
 */
int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}
/**
 * op_mul - multiply two numbers
 * @a: first value
 * @b: second value
 * Return: product
 */
int op_mul(int a, int b)
{
	int prod = a * b;

	return (prod);
}
/**
 * op_div - divides a by b
 * @a: first value
 * @b: second value
 * Return: division
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}
/**
* op_mod - finds the remainder of the division of a by b
* @a: first value
* @b: second value
* Return: remainder
*/
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
