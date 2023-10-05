#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * dequeue: Function to dequeue an item from queue.
 * Description: dequeue an item from queue.
 * @queue: Structure Represents a Queue DS.
 * Returns: {void} Nothing.
 */
void dequeue(Queue *queue)
{
	if (is_empty(queue))
	{
		printf("Queue Underflow - Clean Exit.\n");
		return;
	}
	else
	{
		if ((queue->rear) < (queue->front))
			queue->front = queue->rear = -1;
		queue->rear -= 1;
	}
}