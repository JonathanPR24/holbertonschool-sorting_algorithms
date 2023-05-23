#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: double pointer to the head of the list
 *
 * Description: This function sorts a doubly linked list in ascending order
 * by repeatedly inserting the current node into the correct position
 * among the previously sorted elements.
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *hold = NULL, *current = NULL;

	if (!list || !(*list) || !((*list)->next))
		return;

	node = *list;
	while (node)
	{
		current = node;
		hold = current->prev;

		while (hold && current->n < hold->n)
		{
			if (hold->prev)
				hold->prev->next = current;
			if (current->next)
				current->next->prev = hold;

			current->prev = hold->prev;
			hold->next = current->next;
			hold->prev = current;
			current->next = hold;

			if (!current->prev)
				*list = current;

			print_list(*list);
			hold = current->prev;
		}
		node = node->next;
	}
}
