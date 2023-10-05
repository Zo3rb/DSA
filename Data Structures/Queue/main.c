#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 * Description: Implementing Queues DS.
 * Return: 0 - Always ok.
 */
int main(void) {

	// Creating a Queue.
	Queue *myQueue = create_queue();

	// Enqueuing an Items.
	enqueue(myQueue, 5);
	enqueue(myQueue, 3);
	enqueue(myQueue, 2);
	enqueue(myQueue, 6);

	// Dequeuing Items.
	dequeue(myQueue);
	dequeue(myQueue);

	// Peaking Last Item Without Dequeuing It.
	printf("%d\n", peak(myQueue));
	
  return 0;
}