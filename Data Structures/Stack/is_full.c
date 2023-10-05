#include "main.h"

/**
 * is_full: Function to check if Stack DS (ADT) is Full.
 * Description: checking if Stack DS (ADT) is Full.
 * @stack: Structure Represents a Stack DS.
 * Returns: {boolean} (0 false) or (1 true).
 */
int is_full(Stack *stack) { return stack->top == SIZE; }
