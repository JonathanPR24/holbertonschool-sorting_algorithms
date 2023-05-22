#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	/* Perform bubble sort */
	for (i = 0; i < size - 1; i++)
	{
		/* Iterate through the array */
		for (j = 0; j < size - i - 1; j++)
		{
			/* Compare adjacent elements and swap if necessary */
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print array after each swap */
				print_array(array, size);
			}
		}
	}
}

