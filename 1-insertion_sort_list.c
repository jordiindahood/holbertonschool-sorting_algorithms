#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - insertion sorting method
 * @list: listint_t **
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list, *swap, *checkpoint;

	checkpoint = *list;
	while (checkpoint)
	{
		tmp = checkpoint;
		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			swap = tmp->prev;

			tmp->prev = swap->prev;
			swap->next = tmp->next;
			if (tmp->prev)
				tmp->prev->next = tmp;
			swap->prev = tmp;
			tmp->next = swap;
			if (swap->next)
				swap->next->prev = swap;
			if (!tmp->prev)
				*list = tmp;
			tmp = swap->prev;
		print_list(*list);
		}
		checkpoint = checkpoint->next;
	}
}
/**
 * node_swap - swap two nodes
 * @a: int
 * @b: int
 */
void node_swap(listint_t *a, listint_t *b)
{
	b->prev = a->prev;
	a->next = b->next;
	if (b->prev)
		b->prev->next = b;
	a->prev = b;
	b->next = a;
	if (a->next)
		a->next->prev = a;
	b = a->prev;
}
