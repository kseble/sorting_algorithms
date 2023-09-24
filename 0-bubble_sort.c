#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - sorts arrays using bubble sort
 *
 * @size: the size of the array
 * @array: The array to be printed
 */

void bubble_sort(int *array, size_t size)
{
	size_t step, i;

	for (step = 0; step < size - 1; ++step)
	{
		for (i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
