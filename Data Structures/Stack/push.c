#include "main.h"
#include <stdio.h>

/**
 * push: Function to add an Item to Stack DS (ADT).
 * Description: Adding an Item to Stack.
 * @stack: Structure Represents a Stack DS.
 * @value: Data to be Inserted.
 * Returns: {void} Nothing.
 */
void push(Stack *stack, int value) {
  if (is_full(stack)) {
    printf("The Stack is Full and Can't Add Another Item\n");
    return;
  } else {
    stack->top += 1;
		stack->arr[stack->top] = value;
  }
}