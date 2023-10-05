#include <stdlib.h>
#include "main.h"

/**
 * Function to get the Linked List Count.
 * Description: get the LL Elements Count.
 * @head: a Pointer points to the HEAD node of LL.
 * Return: (int) Count.
 */
int count_list(Node *head)
{
	int count = 0;
	while (head != NULL)
	{
		count += 1;
		head = head->next;
	}
	printf("\n");
	return count;
}