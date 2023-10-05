#include <stdlib.h>
#include "main.h"

/**
 * create_stack: Function to create(allocate) a new
 * memory space for Stack DS.
 * Description: Creating a new Stack DS.
 * @value: Data to be Inserted as First element.
 * Returns: {Stack *} Pointer to Stack memory allocation.
 */
Stack *create_stack() {
  Stack *stack = NULL;
  stack = malloc(sizeof(Stack));
  stack->top = -1;

  return stack;
}