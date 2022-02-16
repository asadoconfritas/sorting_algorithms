#include "sort.h"

/**
 * insertion_sort_list - sorts a double LL
 * @list: double pointer to list
 * Return: end program
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *adl, *atr;

	if (!(*list) || !(*list)->next)
		return;

	adl = *list;
	while (adl)
	{
		atr = adl;
		while (atr->prev && atr->n < atr->prev->n)
		{
			atr->prev->next = atr->next;
			if (atr->next)
				atr->next->prev = atr->prev;
			atr->next = atr->prev;
			atr->prev = atr->prev->prev;
			atr->next->prev = atr;
			if (!atr->prev)
				*list = atr;
			else
				atr->prev->next = atr;
			print_list(*list);
		}
		adl = adl->next;
	}
}
