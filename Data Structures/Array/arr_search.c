#include "main.h"

/*
 * Function to search in array.
 * Description: Function takes a member and search for
 * it in array param and returns its index.
 * @arr: (Pointer) the array to add to.
 * @value: (int) the value to search for.
 * Return (int) Index or -1.
 */
int arr_search(struct Array *arr, int value)
{
    for (int i = 0; i < arr->size; i++)
    {
        if (arr->A[i] >= 0 && arr->A[i] == value)
        {
            return i;
        }
    }
    return -1;
}
