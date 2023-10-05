
# [Queue](./main.c)

## Queue

### Credit [GeeksForGeeks](https://www.geeksforgeeks.org/queue-data-structure/?ref=ghm)

#### Definition

A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.

<img  src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221213113312/Queue-Data-Structures.png"  alt="Visualizing Queue ADT" />

#### FIFO Principle of Queue

A Queue is like a line waiting to purchase tickets, where the first person in line is the first person served. (i.e. First come first serve).
Position of the entry in a queue ready to be served, that is, the first entry that will be removed from the queue, is called the front of the queue(sometimes, head of the queue), similarly, the position of the last entry in the queue, that is, the one most recently added, is called the rear (or the tail) of the queue. See the below figure.

#### Queue Representation

```

Like stacks, Queues can also be represented in an array: In this representation, the Queue is implemented using the array. Variables used in this case are:
- Queue: the name of the array storing queue elements.
- Front: the index where the first element is stored in the array representing the queue.
- Rear: the index where the last element is stored in an array representing the queue.

```

#### Basic Operations on Stack

```

* enqueue(): Inserts an element at the end of the queue i.e. at the rear end.
* dequeue(): This operation removes and returns an element that is at the front end of the queue.
* front(): This operation returns the element at the front end without removing it.
* rear(): This operation returns the element at the rear end without removing it.
* isEmpty(): This operation indicates whether the queue is empty or not.
* isFull(): This operation indicates whether the queue is full or not.
* size(): This operation returns the size of the queue i.e. the total number of elements it contains.

```
