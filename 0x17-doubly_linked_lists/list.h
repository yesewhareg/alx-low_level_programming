#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;


size_t print_dlistint(const dlistint_s *h);
size_t dlistint_n(const dlistint_s *h);
dlistint_s *add_node(dlistint_s **head, const int *n);
dlistint_s *add_node_end(dlistint_s **head, const int *n);
void free_list(dlistint_s *head);

#endif /* LISTS_H */
