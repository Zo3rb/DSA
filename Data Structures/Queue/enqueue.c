#include <stdio.h>
#include "main.h"

/**
 * enqueue: Function to enqueue a new item in queue.
 * Description: enqueue a new item in queue.
 * @queue: Structure Represents a queue DS.
 * @value: Item to be Inserted.
 * Returns: {void} Nothing.
 */
void enqueue(Queue *queue, int value)
{
	if (is_full(queue))
	{
		printf("Queue Overflow - Clean Exit.\n");
		return;
	}
	else
	{
		if (queue->front == -1)
			queue->front = 0;
		queue->rear += 1;
		queue->arr[queue->rear] = value;
	}
}