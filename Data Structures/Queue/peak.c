#include "main.h"
#include <stdio.h>

/**
 * peak: Function to peak last Queue item.
 * Description: peak last Queue item without dequeuing it.
 * @queue: Structure Represents a Queue DS.
 * Returns: {int} Last item Value.
 */
int peak(Queue *queue) {
  if (is_empty(queue))
	{
		printf("This Queue is Empty.\n");
		return  -1;
	}
	else
		return queue->arr[queue->rear];
}