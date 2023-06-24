#include "sort.h"

/**
 * selection_sort - function that sorts an array of int
 * @array: input arr
 * @size: arr size
 * Return: nth
 */
void selection_sort(int *array, size_t size)
{
	int tp;
	size_t idx, ji, mi;

	for (idx = 0; idx < size; idx++)
	{
		mi = idx;
		for (ji = idx + 1; ji < size; ji++)
		{
			if (array[mi] > array[ji])
				mi = ji;
		}

		if (idx != mi)
		{
			tp = array[idx];
			array[idx] = array[mi];
			array[mi] = tp;
			print_array(array, size);
		}
	}
}
