#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target);     // Prototype.

/**
 * main - Program's Entry Point.
 * Description: Implementing C++ Binary Search.
 * Return: (0) - Always Success.
 */
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result == -1) {
        printf("Element is not present in the array\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    
    return 0;
}


/**
 * Binary Search - Binary Searching Function.
 * Description: Find a Specific Element (int Target) into
 * Sorted Linear Data Structure (an Array of Integers)
 * and Return it's Index (Element).
 * @arr: The Array to Looks into.
 * @low: Start point of the Array -> Always 0.
 * @high: The Size of the Array (length) - 1 -> can be get dynamically.
 * @target: Number to Look of.
 * Return: (int) index or -1 for none found.
 */
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid;  // Target found at index 'mid'
        }
        
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;  // Target not found
}
