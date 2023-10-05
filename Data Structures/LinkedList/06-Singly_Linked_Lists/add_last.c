#include <stdlib.h>
#include "main.h"

/**
 * Function to add node to linked list.
 * Description: Adding element to created linked list.
 * @head: a Pointer points to the HEAD node of LL.
 * @data: the data value of the node.
 * Return: Nothing.
 */
void add_to_last(node *head, int data)
{
	if (head == NULL)
		return printf("Can't Add to NULL Pointer\n");
	node *newNode = malloc(sizeof(node));
	newNode->link = NULL;
	newNode->value = data;
	while (head->link != NULL)
		head = head->link;
	head->link = newNode;
}