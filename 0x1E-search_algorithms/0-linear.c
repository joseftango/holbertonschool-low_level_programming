#include "search_algos.h"
/**
* linear_search - searchs for a value in an array using linear search
* @array: specific array
* @size: size of array
* @value: needed value to search
* Return: index of the wanted value
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}

	return (-1);
}
