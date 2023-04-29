/**
  * bubble_sort - bubble sort function.
  * @array: array to ssort.
  * @size: array length.
  * Return: bure.
  */
void bubble_sort(int *array, size_t size)
{
	size_t mos;
	size_t pau;
	int jul = 0;

	if (array == NULL || size == 0)
		return;
	for (mos = 0; mos < size - 1; mos++)
	{
		for (pau = 0; pau < size - pau - 1; pau++)
		{
			if (array[pau] > array[pau + 1])
			{
				jul = array[pau + 1];
				array[pau + 1] = array[pau];
				array[pau] = jul;
				print_array(array, size);
			}
		}
	}
}
