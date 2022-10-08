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
size_t i = 0, j = 0, l = 0, r = size - 1, mid = (l + r) / 2;
char *sep = ", ";

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (l > r)
			break;

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
			{
				l = mid + 1;
				mid = (l + r) / 2;
			}

			else
			{
				r = mid - 1;
				mid = (l + r) / 2;
			}
	}

return (-1);
}
