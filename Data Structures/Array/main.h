#ifndef MAIN_H
#define MAIN_H

/*
 * Array - ADT.
 * Description: an abstract data type for Array.
 * @A: (Pointer) Allocated array itself.
 * @size: (int) the the memory allocated size.
 * @length: The array element's count.
 */
struct Array
{
    int *A;
    int size;
    int length;
};

/* Functions Prototypes. */
struct Array *create_array(int size);
void display_array(struct Array *arr);
void arr_append(struct Array *arr, int newMember);
void arr_insert(struct Array *arr, int index, int newMember);
void arr_delete(struct Array *arr, int index);
int arr_search(struct Array *arr, int value);

#endif /* MAIN_H */