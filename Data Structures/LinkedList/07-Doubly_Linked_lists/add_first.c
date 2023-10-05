#include <stdlib.h>
#include "main.h"

/**
 * Function to add node to the first.
 * Description: Adding a node to The head of Linked List.
 * @head: a Pointer points to the HEAD node of LL.
 * @value: the data value of the node.
 * Return: (pointer) HEAD of Linked List.
 */
Node* add_first(Node* head, int value)
{
	Node *temp = NULL;
	temp = malloc(sizeof(Node));
	temp->next = head;
	temp->previous = NULL;
	temp->data = value;

	head->previous = temp;
	head = temp;
}