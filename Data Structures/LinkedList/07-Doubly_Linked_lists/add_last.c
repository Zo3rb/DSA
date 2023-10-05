#include <stdlib.h>
#include "main.h"

/**
 * Function to add node to linked list.
 * Description: Adding element to created linked list.
 * @head: a Pointer points to the HEAD node of LL.
 * @value: the data value of the node.
 * Return: Nothing.
 */
void add_last(Node *head, int value)
{
	Node *temp = NULL;
	temp = malloc(sizeof(Node));
	temp->next = NULL;
	temp->data = value;

	while (head->next != NULL)
	{
		head = head->next;
	}

	head->next = temp;
	temp->previous = head;
}
