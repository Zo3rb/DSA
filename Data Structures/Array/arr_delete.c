#include "main.h"

/*
 * Function to delete item.
 * Description: Function takes an index param and delete it
 * from the Array param.
 * @arr: (Pointer) the array to add to.
 * @index: (int) the member to delete.
 * Return Nothing.
 */
void arr_delete(struct Array *arr, int index)
{
    if (index < arr->size && arr->A[index] >= 0)
    {
        arr->A[index] = -999999999;
    }
}
