#include "sort.h"
/**
 * bubble_sort - function that sorts an arr
 * @array: input arr
 * @size: arr size
 * Return: nth
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, num;
	int tmp, swap;

	for (num = size, swap = 1; num > 0 && swap; num--)
	{
		swap = 0;
		for (idx = 0; (idx + 1) < num; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				tmp = array[idx + 1];
				array[idx + 1] = array[idx];
				array[idx] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
