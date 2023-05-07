#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * search - splits the array in the middle and
 * searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @begin: beginning of the array
 * @end: end of the array
 * @value: value to search in
 * Return: index of the number
 */
int search(int *array, size_t begin, size_t end, int value)
{
	size_t i, middle_index, size;

	size = end + begin;
	middle_index = size / 2;
	printf("Searching in array: ");
	for (i = begin; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	if (begin == end && array[begin] != value)
		return (-1);
	if (begin == end && array[begin] == value)
		return (begin);
	if (value == array[middle_index])
		return (middle_index);
	if (value < array[middle_index])
		return (search(array, begin, middle_index - 1, value));
	else if (value > array[middle_index])
		return (search(array, middle_index + 1, end, value));
	return (middle_index);
}
/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	size_t begin = 0;

	if (array == NULL)
		return (-1);
	return (search(array, begin, size - 1, value));
}
