#include <stdlib.h>
#include "main.h"

/**
 * Function to Delete the last node.
 * Description: Deleting the Last node of LL.
 * @head: a Pointer points to the HEAD node of LL.
 * Return: Nothing.
 */
void delete_last(node *head)
{
	node *lastNode = head;
	node *beforeLast = head;
	while (lastNode->link != NULL)
	{
		if (lastNode->link != NULL)
		{
			beforeLast = lastNode;
			lastNode = lastNode->link;
		}
	}
	free(lastNode);
	beforeLast->link = NULL;
}