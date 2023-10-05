#include <stdlib.h>
#include "main.h"

/*
 * Function to create an Array.
 * Description: Function takes a size param and creating an array
 * from that size.
 * @size: (int) the allocated size of the array.
 * Return a pointer to an Array.
 */
struct Array *create_array(int size)
{
    struct Array *newArr = malloc(sizeof(struct Array));

    newArr->size = size;
    newArr->length = 0;
    newArr->A = malloc(newArr->size * sizeof(int));
    for (int i = 0; i < newArr->size; i++)
    {
        newArr->A[i] = -999999999;
    }

    return newArr;
}
