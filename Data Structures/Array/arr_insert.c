#include "main.h"

/*
 * Function to insert in array.
 * Description: Function takes a new member and add it
 * to array param at index param.
 * @arr: (Pointer) the array to add to.
 * @index: (int) the index to add at.
 * @newMember: (int) the member to add.
 * Return Nothing.
 */
void arr_insert(struct Array *arr, int index, int newMember)
{
    if (index < arr->size)
    {
        arr->A[index] = newMember;
    }
}
