#include <stdlib.h>
#include "main.h"

/**
 * Function to Delete the last Node.
 * Description: Deleting the Last Node of LL.
 * @head: a Pointer points to the HEAD Node of LL.
 * Return: Nothing.
 */
void delete_last(Node *head)
{
	Node *lastNode = head;

	while (lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	lastNode->previous->next = NULL;
	free(lastNode);
}