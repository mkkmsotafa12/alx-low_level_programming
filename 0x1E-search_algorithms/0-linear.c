#include "search_algos.h"

/*
* linear search - A function that searches for a value in an array of integers
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in the array
* @value: is the value to search for
* Return: int
*/

int linear_search(int *array, size_t size, int value)
{
	int num;
	if (array == NULL || !array)
		return (-1);

	for (num = 0; num < (int)size; num++)
	{
		printf("Value checked array[%u] = [%d]\n", num, array[num]);
		if (value == array[num])
			return (num);
	}
	return (-1);
}