#include <stdlib.h>
#include "main.h"

/**
 * Function to list elements of Linked List.
 * Description: Displaying the Elements of Linked List.
 * @head: a Pointer points to the HEAD node of LL.
 * Return: Nothing.
 */
void list_list(node *head)
{
	if (head == NULL)
		printf("The List is Empty\n");
	printf("\n");
	while (head != NULL)
	{
		printf("Pointer: %p, Value: %d\n", head, head->value);
		head = head->link;
	}
}