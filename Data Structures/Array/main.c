#include <stdio.h>
#include "main.h"

int main(void)
{
    // Creating a New Array.
    struct Array *arr = create_array(7);

    // Adding Elements to the Array.
    arr_append(arr, 5);
    arr_append(arr, 7);
    arr_append(arr, 3);
    arr_append(arr, 9);

    // Inserting Element to Specific Index.
    arr_insert(arr, 5, 6);

    // Displaying the Array Elements.
    display_array(arr);

    // Deleting from the Array.
    arr_delete(arr, 2);

    // Displaying the Array Elements.
    printf("------------------\n");
    printf("------------------\n");
    printf("------------------\n");
    display_array(arr);
    printf("------------------\n");
    printf("------------------\n");
    printf("------------------\n");

    // Searching for a value and returns its index.
    int value_to_look_up = 9; // Change this if you want.
    int index = arr_search(arr, value_to_look_up);
    printf("Found the index of \"value_to_look_up\": %d\n", index);
    printf("------------------\n");
    printf("------------------\n");
    printf("------------------\n");
    
    return 0;
}