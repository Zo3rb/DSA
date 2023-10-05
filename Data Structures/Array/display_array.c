#include <stdio.h>
#include "main.h"

/*
 * Function to display the elements of an Array.
 * Description: Function takes an array param and displaying
 * its elements.
 * @arr: (Pointer) the Allocated struct of the Array ADT.
 * Return Nothing.
 */
void display_array(struct Array *arr)
{
    for (int i = 0; i < arr->size; i++)
    {
        if (arr->A[i] != -999999999)
        {
            printf("%d\n", arr->A[i]);
        }
    }
}