#include "sort.h"
/**
 * quick_sort -Sort an array using quick_sort algorithm
 * from min to max
 * @array: array
 * @size: size
 **/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	sorting(array, 0, size - 1, size);
}
/**
 * split - Split the array and takes the last element as pivot
 * @array: Array
 * @min: first element
 * @last: The last element
 * @size: size
 * Return: int value
 **/
int split(int *array, int min, int last, size_t size)
{
	int piv, i = (min), j;

	piv = array[last];
	for (j = min; j < last; j++)
	{
		if (array[j] <= piv)
		{
			int_swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	int_swap(&array[i], &array[last]);
	if (i != j)
		print_array(array, size);
	return (i);
}
/**
 * sorting - quick_sort_array
 * @array: array
 * @min: min
 * @last: last
 * @size: size
 * Return: void
 */
void sorting(int *array, int min, int last, size_t size)
{
	int i;

	if (min < last)
	{
		i = split(array, min, last, size);
		sorting(array, min, (i - 1), size);
		sorting(array, (i + 1), last, size);
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
