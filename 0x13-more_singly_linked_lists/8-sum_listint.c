#include "lists.h"

/**
 * sum_listint - calculates the addition of all the data in a listint_t list
 * @head: first node in the link list
 *
 * Return: resulting summ
 */
int sum_listint(listint_t *head)
{
	int summ = 0;
	listint_t *temp = head;

	while (temp)
	{
		summ += temp->n;
		temp = temp->next;
	}

	return (summ);
}

