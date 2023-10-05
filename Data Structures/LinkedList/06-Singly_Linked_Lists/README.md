
# [Singly Linked Lists](./main.c)

## Singly Linked Lists

### Credit [GeeksForGeeks](https://www.geeksforgeeks.org/what-is-linked-list/)

#### Definition

Like arrays, a Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers. They include a series of connected nodes. Here, each node stores the data and the address of the next node.

<img  src="https://media.geeksforgeeks.org/wp-content/uploads/20220816144425/LLdrawio.png"  alt="Visualizing Singly Linked Lists" />

#### Representation of Singly Linked Lists

```

A linked list is represented by a pointer to the first node of the linked list. The first node is called the head of the linked list. If the linked list is empty, then the value of the head points to NULL.

  

Each node in a list consists of at least two parts:
* A Data Item (we can store integers, strings, or any type of data).
* Pointer (Or Reference) to the next node (connects one node to another) or An address of another node.

In C, we can represent a node using structures. Below is an example of a linked list node with integer data.

In Java or C#, LinkedList can be represented as a class and a Node as a separate class. The LinkedList class contains a reference of Node class type.

```
