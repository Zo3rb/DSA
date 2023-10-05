#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop: Function to remove an Item from Stack DS (ADT).
 * Description: removing an Item from Stack.
 * @stack: Structure Represents a Stack DS.
 * Returns: {int} Last item after removing it.
 */

int pop(Stack *stack) {
  if (is_empty(stack)) {
    printf("The Stack is Empty and Can't Remove Item From it\n");
    return -1;
  } else {
    int temp = stack->arr[stack->top];
    stack->top -= 1;

    return temp;
  }
}