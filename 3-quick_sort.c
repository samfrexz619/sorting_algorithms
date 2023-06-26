#include "sort.h"
/**
 * quick_sort - function that sorts an array of int
 * @array: input arr
 * @size: size of ar
 * Return: nth
 */
void quick_sort(int *array, size_t size)
{
	_sorting(array, 0, size - 1, size);
}
/**
 * _sorting - auxiliary func
 * @arr: input arr
 * @lw: index
 * @hgh: index
 * @size: size of arr
 * Return: nth
 */
void _sorting(int *arr, int lw, int hgh, int size)
{
	int p, v, idx;
	int tmp;

	if (lw < hgh)
	{
		p = hgh;
		v = lw;
		for (idx = lw; idx < hgh; idx++)
		{
			if (arr[idx] < arr[p])
			{
				if (idx != v)
				{
					tmp = arr[idx];
					arr[idx] = arr[v];
					arr[v] = tmp;
					print_array(arr, size);
				}
				v++;
			}
		}
		if (v != p && arr[v] != arr[p])
		{
			tmp = arr[v];
			arr[v] = arr[p];
			arr[p] = tmp;
			print_array(arr, size);
		}
		_sorting(arr, lw, v - 1, size);
		_sorting(arr, v + 1, hgh, size);
	}
}
