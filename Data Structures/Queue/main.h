#ifndef _MAIN_H
#define _MAIN_H

#define SIZE 4

typedef struct {
  int arr[SIZE];
  int front;
  int rear;
} Queue;

Queue *create_queue();
int is_empty(Queue *);
int is_full(Queue *);
void enqueue(Queue *, int);
void dequeue(Queue *);
int peak(Queue *);

#endif /* _MAIN_H */