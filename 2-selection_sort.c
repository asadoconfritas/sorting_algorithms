#include "sort.h"

/**
 * selection_sort - sort by ascending order
 * @array: pointer to the array
 * @size: of the array
 * Return: end program
 **/
void selection_sort(int *array, size_t size)
{
	size_t i, j, y;
	int aux, flag;

	for (i = 0; i < size; i++)
	{
		flag = 0;
		aux = array[i];
		y = i;
		for (j = i; j < size; j++)
			if (array[j] < aux)
			{
				aux = array[j];
				y = j;
				flag = 1;
			}
		if (flag)
		{
			array[y] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
	}
}
