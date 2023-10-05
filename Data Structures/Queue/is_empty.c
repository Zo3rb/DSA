#include "main.h"

/**
 * is_empty: Function to check if Queue DS (ADT) is Empty.
 * Description: checking if Queue DS (ADT) is Empty.
 * @queue: Structure Represents a Queue DS.
 * Returns: {boolean} (0 false) or (1 true).
 */
int is_empty(Queue *queue) { return queue->front < 0; }