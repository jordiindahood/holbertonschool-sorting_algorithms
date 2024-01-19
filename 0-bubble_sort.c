#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Prints a list of integers
 * @array: The list to be printed
 * @size: size_t
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, n = 0;

	while (size + n > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			j = i + 1;
			if (array[i] > array[j])
			{
				int_swap(array + i, array + j);
				print_array(array, size);
				n++;
			}
		}
		n--;
	}
}
/**
 * int_swap - swap two integers
 * @a: int
 * @b: int
 */
void int_swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
