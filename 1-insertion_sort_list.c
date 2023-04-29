#include "sort.h"

/**
 * insertion_sort_list - doubly linked list sort
 * @list: doubly linked
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *mos = NULL, *pau = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	mos = *list;
	mos = mos->next;
	while (mos)
	{
		while (mos->prev && mos->n < (mos->prev)->n)
		{
			pau = mos;
			if (mos->next)
				(mos->next)->prev = pau->prev;
			(mos->prev)->next = pau->next;
			mos = mos->prev;
			pau->prev = mos->prev;
			pau->next = mos;
			if (mos->prev)
				(mos->prev)->next = pau;
			mos->prev = pau;
			if (pau->prev == NULL)
				*list = pau;
			print_list(*list);
			mos = mos->prev;
		}
		mos = mos->next;
	}

}
