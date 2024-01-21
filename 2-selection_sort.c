#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - selection sorting method
 * @array: int*
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				continue;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
		print_array(array, size);
	}
}
