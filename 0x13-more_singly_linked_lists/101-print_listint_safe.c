#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - calculates the length of a loop in a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: Number of nodes in loop, 0 if no loop
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t length = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;
	fast_ptr = head->next->next;

	/* Floyd's cycle finding algorithm */
	while (fast_ptr != NULL)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;

			while (slow_ptr != fast_ptr)
			{
				length++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;

			while (slow_ptr != fast_ptr)
			{
				length++;
				slow_ptr = slow_ptr->next;
			}

			return (length);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Function that prints a list safely.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: Number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t length, i;

	length = looped_listint_len(head);

	if (!length)
	{
		for (; head != NULL; length++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
	}
	else
	{
		for (i = 0; i < length; i++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (length);
}
