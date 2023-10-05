#include "main.h"

/*
 * Function to append item.
 * Description: Function takes a member param and appending it
 * to the Array param.
 * @arr: (Pointer) the array to add to.
 * @newMember: (int) the new member.
 * Return Nothing.
 */
void arr_append(struct Array *arr, int newMember)
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = newMember;
        arr->length += 1;
    }
}