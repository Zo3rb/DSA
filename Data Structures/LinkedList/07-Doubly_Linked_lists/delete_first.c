#include "main.h"
#include <stdlib.h>

/**
 * Function to Delete the first node.
 * Description: Deleting the First node of LL.
 * @head: a Pointer points to the HEAD node of LL.
 * Return: (pointer) new Head node.
 */
Node *delete_first(Node *head) 
{
  Node *toDelete = head;
  head = head->next;
  head->previous = NULL;
  free(toDelete);
  return head;
}