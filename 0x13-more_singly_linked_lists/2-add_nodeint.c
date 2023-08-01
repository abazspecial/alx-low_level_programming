#include "lists.h"

/**
* add_nodeint – used to add new new node int
* @head: point to the first node in the list
* @nn: data to insert in that new node
*
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int nn)
{
listint_t *neww;

neww = malloc(sizeof(listint_t));
if (!neww)
return (NULL);

neww->nn = nn;
neww->next = *head;
*head = neww;

return (neww);
}
