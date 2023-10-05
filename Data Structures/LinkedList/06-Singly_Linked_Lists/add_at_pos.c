#include <stdlib.h>
#include "main.h"

/**
 * Function to add node to the certain position.
 * Description: Adding a node to CP of Linked List.
 * @head: a Pointer points to the HEAD node of LL.
 * @data: the data value of the node.
 * @pos: Position to add the node
 * Return: nothing.
 */
void add_at_pos(node *head, int data, int pos)
{
	if (head == NULL)
		return printf("Can't Add to NULL Pointer\n");
	node *prev = head;
	node *current = malloc(sizeof(node));
	current->value = data;
	while (pos != 2)
	{
		prev = prev->link;
		pos -= 1;
	}
	current->link = prev->link;
	prev->link = current;
}