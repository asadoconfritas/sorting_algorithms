#include "sort.h"

/**
 * bubble_sort - sort by ascending order
 * @array: pointer to array
 * @size: of the array
 * Return: end program
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, idx;
	int tmp, camb;

	if (!array)
		return;

	idx = size - 1;
	while (camb)
	{
		camb = 0;
		for (i = 0; i < idx; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				camb++;
				print_array(array, size);
			}
		}
		idx--;
	}
}
