#include "main.h"

/**
 * is_full: Function to check if Queue DS (ADT) is Full.
 * Description: checking if Queue DS (ADT) is Full.
 * @queue: Structure Represents a Queue DS.
 * Returns: {boolean} (0 false) or (1 true).
 */
int is_full(Queue *queue)
{
	if (queue->arr[SIZE - 1])
		return 1;
	return 0;
}