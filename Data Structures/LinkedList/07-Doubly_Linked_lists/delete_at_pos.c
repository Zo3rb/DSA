#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * Function to Delete node @ position.
 * Description: Deleting node (position) of LL.
 * @head: a Pointer points to the HEAD node of LL.
 * @pos: the Position to Delete the node.
 * Return: Nothing.
 */
void delete_at_pos(Node *head, int pos)
{
	while (pos != 1)
	{
		head = head->next;
		pos--;
	}

	head->next->previous = head->previous;
	head->previous->next = head->next;

	free(head);
}