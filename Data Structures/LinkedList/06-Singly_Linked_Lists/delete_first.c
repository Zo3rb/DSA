#include <stdlib.h>
#include "main.h"

/**
 * Function to Delete the first node.
 * Description: Deleting the First node of LL.
 * @head: a Pointer points to the HEAD node of LL.
 * Return: (pointer) new Head node.
 */
node *delete_first(node *head)
{
	node *toDelete = head;
	head = head->link;
	free(toDelete);
    
	return head;
}