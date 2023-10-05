#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 * Description: Implementing Stacks DS.
 * Return: 0 - Always ok.
 */
int main(void)
{
	// Creating an Empty Stack An Peak it.
	Stack *myStack = create_stack();
	peak(myStack);

	// Pushing a new Item.
	push(myStack, 5);
	peak(myStack);
	
	push(myStack, 4);
	peak(myStack);

	printf("\n-----------------------\n");

	printf("Remove and Return Last Item: %d\n", pop(myStack));
	
	return (0);
}