#include "sort.h"

/**
 * selection_sort - selection sort functiom.
 * @array: array to sort.
 * @size: array size.
 * Return: bure.
 */
void selection_sort(int *array, size_t size)
{
	size_t mos;
	size_t pau;
	size_t jos;
	int jul = 0;

	if (array == NULL || size == 0)
		return;

	for (mos = 0; mos < size - 1; mos++)
	{
		jos = mos;
		for (pau = mos + 1; pau < size; pau++)
		{
			if (array[pau] < array[jos])
				jos = pau;
		}
		if (jos != mos)
		{
			jul = array[mos];
			array[mos] = array[jos];
			array[jos] = jul;
			print_array(array, size);
		}
	}
}
