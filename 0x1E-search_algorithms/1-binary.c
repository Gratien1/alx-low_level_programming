#include "search_algos.h"

/**
 * print_arr - print array
 *
 * @arr: array to print
 * @start: start index
 * @end: end idx
 */

void print_arr(int *arr, size_t start, size_t end)
{
	size_t i;

	for (i = start; i < end; i++)
		(i != end - 1) ? printf("%d, ", arr[i]) : printf("%d", arr[i]);
	printf("\n");
}


/**
 * binary_search -  searches for a value in an array of integers
 *
 * @array: array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: first idx where value is located or -1 if value is not found or null
 */


int binary_search(int *array, size_t size, int value)
{
	size_t st = 0,  end = size, mid = 0;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	print_arr(array, st, end);
	while (st < end)
	{
		mid  = (st + end - 1) / 2;
		if (array[mid] > value)
		{
			end = mid;
			printf("Searching in array: ");
			print_arr(array, st, end);
		}
		else if (array[mid] < value)
		{
			st = mid + 1;
			printf("Searching in array: ");
			print_arr(array, st, end);
		}
		else
			return (mid);
	}
	return (-1);
}
