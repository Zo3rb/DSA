#ifndef _MAIN_H_
#define _MAIN_H_

#define SIZE 4

typedef struct Stack {
  int top;
  int arr[SIZE];
} Stack;

Stack *create_stack();
void peak(Stack *);
void push(Stack *, int);
int pop(Stack *);
int is_full(Stack *);
int is_empty(Stack *);

#endif /* _MAIN_H */