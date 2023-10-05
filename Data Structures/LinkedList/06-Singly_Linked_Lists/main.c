#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 * Description: Implementing Linked List DS.
 * Return: 0 - Always ok.
 */
int main()
{
	// Creating The HEAD Node.
	node *HEAD = NULL;
	HEAD = malloc(sizeof(node));
	HEAD->value = 1;
	HEAD->link = NULL;

	// Create & Add a New Static Node.
	node *current = malloc(sizeof(node));
	current->value = 2;
	current->link = malloc(sizeof(node));
	current->link->value = 3;
	current->link->link = NULL;
	HEAD->link = current;

	// Listing the 3 Nodes.
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);

	// Listing the 4 Nodes.
	add_to_last(HEAD, 444);
	printf("-----------------------------\n");
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);

	// Listing the 5 Nodes.
	HEAD = add_first(HEAD, 5000000);
	printf("-----------------------------\n");
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);

	// Listing the 6 Nodes.
	add_at_pos(HEAD, 7777, 3);
	printf("-----------------------------\n");
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);

	// Listing the 7 Nodes.
	add_at_pos(HEAD, 88888, 4);
	printf("-----------------------------\n");
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);

	// Listing the 6 Nodes.
	HEAD = delete_first(HEAD);
	printf("-----------------------------\n");
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);

	// Listing the 5 Nodes.
	delete_last(HEAD);
	printf("-----------------------------\n");
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);

	// Listing the 4 Nodes.
	delete_at_pos(HEAD, 3);
	printf("-----------------------------\n");
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);

	// Listing the 3 Nodes.
	delete_at_pos(HEAD, 2);
	printf("-----------------------------\n");
	printf("Count: %d\n", count_list(HEAD));
	list_list(HEAD);
	
	return (0);
}