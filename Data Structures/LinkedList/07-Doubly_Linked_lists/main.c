#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point.
 * Description: Implementing Doubly Linked List DS.
 * Return: 0 - Always ok.
 */
int main(void) {
	// Creating The Head Node.
	Node *headNode = NULL;
	headNode = malloc(sizeof(Node));
	headNode->data = 0;
	headNode->previous = NULL;
	headNode->next = NULL;

	// Creating another Node.
	Node *tmp = NULL;
	tmp = malloc(sizeof(Node));
	headNode->next = tmp;
	tmp->previous = headNode;
	tmp->data = 1;
	tmp->next = NULL;

	// Creating Third Another Node.
	Node *tmp2 = NULL;
	tmp2 = malloc(sizeof(Node));
	tmp->next = tmp2;
	tmp2->previous = tmp;
	tmp2->data = 2;
	tmp2->next = NULL;

	// Feel Free to try the Functions into the header file.

	return (0);
}