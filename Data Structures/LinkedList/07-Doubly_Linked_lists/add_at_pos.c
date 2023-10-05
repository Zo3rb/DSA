#include <stdlib.h>
#include "main.h"

/**
 * Function to add node to the certain position.
 * Description: Adding a node to CP of Linked List.
 * @head: a Pointer points to the HEAD node of LL.
 * @value: the data value of the node.
 * @pos: Position to add the node
 * Return: nothing.
 */
void add_at_pos(Node *head, int value, int pos)
{
	Node *prev = head;
	Node *current = NULL;
	current = malloc(sizeof(Node));
	current->data = value;

	while (pos != 2)
	{
		prev = prev->next;
		pos -= 1;
	}

	current->next = prev->next;
	prev->next->previous = current;
	prev->next = current;
	current->previous = prev;
}
