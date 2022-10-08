#include "search_algos.h"
/**
* binary_search - using binary search algorithm
* @array: an sorted array to search in
* @size: size of array
* @value: value to be searched
* Return: the index where value is located
**/

int binary_search(int *array, size_t size, int value)
{
size_t j = 0, l = 0, r = size - 1, mid;
char *sep = ", ";

	if (!array)
		return (-1);

	while (l <= r)
	{
		mid = (l + r) / 2;

		printf("Searching in array: ");

		for (j = l; j <= r; j++)
		{
			printf("%ld", j);

			if (j < r)
				printf("%s", sep);

		}
		putchar('\n');

			if (value == array[mid])
				return (mid);

			else if (value > array[mid])
				l = mid + 1;

			else
				r = mid - 1;
	}

return (-1);
}
