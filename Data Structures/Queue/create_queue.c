#include "main.h"
#include <stdlib.h>

/**
 * create_queue: Function to create(allocate) a new
 * memory space for Queue DS.
 * Description: Creating a new Queue DS.
 * Returns: {Queue *} Pointer to Queue memory allocation.
 */
Queue *create_queue() {
  Queue *queue = NULL;
  queue = malloc(sizeof(Queue));
  queue->front = -1;
  queue->rear = -1;

  return queue;
}
