#ifndef SORT_H
#define SORT_H

#include <stdlib.h> /* Include the standard library for the size_t type */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous element in the list
 * @next: Pointer to the next element in the list
 */
typedef struct listint_s
{
    const int n; /* Integer value stored in the node */
    struct listint_s *prev; /* Pointer to the previous element in the list */
    struct listint_s *next; /* Pointer to the next element in the list */
} listint_t;

/* Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* End of header guard */
