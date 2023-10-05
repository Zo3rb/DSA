#include <stdlib.h>
#include "main.h"

/**
 * Function to add node to the first.
 * Description: Adding a node to The head of Linked List.
 * @head: a Pointer points to the HEAD node of LL.
 * @data: the data value of the node.
 * Return: (pointer) HEAD of Linked List.
 */
node *add_first(node *head, int data)
{
	if (head == NULL)
	{
		printf("Can't Add to NULL Pointer\n");
		return NULL;
	}
	node *newNode = malloc(sizeof(node));
	newNode->value = data;
	newNode->link = head;
	return newNode;
}