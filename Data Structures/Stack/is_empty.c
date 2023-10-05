#include "main.h"

/**
 * is_empty: Function to check if Stack DS (ADT) is Empty.
 * Description: checking if Stack DS (ADT) is Empty.
 * @stack: Structure Represents a Stack DS.
 * Returns: {boolean} (0 false) or (1 true).
 */
int is_empty(Stack *stack) { return stack->top < 0; }