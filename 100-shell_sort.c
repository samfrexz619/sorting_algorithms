#include "sort.h"
/**
 * shell_sort - function that sorts an arr of int
 * @array: input arr
 * @size: size of arr
 * Return: nth
 */
void shell_sort(int *array, size_t size)
{
	size_t num = 1;

	while (num < size)
		num = (num * 3) + 1;

	while ((num = (num - 1) / 3) > 0)
		_shells(array, size, num);

}

/**
 * _shells - auxiliary function
 * @arr: input arr
 * @size: size of arr
 * @num: interval
 * Return: nth
 */
void _shells(int *arr, int size, int num)
{
	int tmp, idx, j;

	for (idx = 0; (idx + num) < size; idx++)
	{
		for (j = idx + num; (j - num) >= 0; j = j - num)
		{
			if (arr[j] < arr[j - num])
			{
				tmp = arr[j];
				arr[j] = arr[j - num];
				arr[j - num] = tmp;
			}
		}
	}
	print_array(arr, size);
}
