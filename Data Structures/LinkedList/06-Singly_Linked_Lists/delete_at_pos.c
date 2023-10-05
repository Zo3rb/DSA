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
void delete_at_pos(node *head, int pos)
{
	node *prev = head;
	while (pos != 2)
	{
		head = head->link;
		pos--;
	}
	prev = head->link;
	head->link = prev->link;
	free(prev);
}