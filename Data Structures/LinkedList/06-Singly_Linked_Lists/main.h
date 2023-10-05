#ifndef MAIN_H
#define MAIN_H

/**
 * node - Node Data Type.
 * Description: ADT(SRS) for a node of Linked List.
 * @value: Could be Any DT or ADT.
 * @link: Pointer to Same Type of Structure (link).
 */
typedef struct node {
	int value;
	struct node *link;
} node;

/* Prototypes of Functions. */
int count_list(node *head);
void list_list(node *head);
node *add_first(node *head, int data);
void add_to_last(node *head, int data);
void add_at_pos(node *head, int data, int pos);
node *delete_first(node *head);
void delete_last(node *head);
void delete_at_pos(node *head, int pos);

#endif /* MAIN_H */