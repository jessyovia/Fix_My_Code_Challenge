#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: Pointer to the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *last;

    /* Allocate memory for the new node */
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    /* Initialize the new node */
    new->n = n;
    new->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL)
    {
        *head = new;
        new->prev = NULL;
        return (new);
    }

    /* Traverse the list to find the last node */
    last = *head;
    while (last->next != NULL)
        last = last->next;

    /* Update pointers to insert the new node at the end */
    last->next = new;
    new->prev = last;
    
    return (new);
}
