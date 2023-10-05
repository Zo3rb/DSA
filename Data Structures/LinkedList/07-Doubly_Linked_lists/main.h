#ifndef MAIN_H
#define MAIN_H

/**
 * node - Node Data Type.
 * Description: ADT(SRS) for a node of Linked List.
 * @data: Could be Any DT or ADT.
 * @next: Pointer to Same Type of Structure (link).
 * @previous: Pointer to Same Type of Structure (prev-link).
 */
typedef struct Node
{
	int data;
	struct Node *next;
	struct Node *previous;
} Node;

/* Prototypes of Functions. */
int count_list(Node*);
void list_list(Node*);
Node* add_first(Node*, int);
void add_last(Node*, int);
void add_at_pos(Node*, int, int);
Node* delete_first(Node*);
void delete_last(Node*);
void delete_at_pos(Node*, int);

#endif /* MAIN_H */