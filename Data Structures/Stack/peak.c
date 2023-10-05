#include "main.h"
#include <stdio.h>

/**
 * peak: Function to print the last item on stack.
 * Description: print the last item on stack.
 * @stack: Structure Represents a Stack DS.
 * Returns: {void} Nothing.
 */
void peak(Stack *stack) {
  int top = stack->top;
  if (is_empty(stack))
    printf("Can't Peak an Empty Stack\n");
  else
    printf("The Top Element in The Stack is %d\n", stack->arr[stack->top]);
}
