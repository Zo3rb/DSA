#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Bubble Sort & Print Array Prototypes.
void bubbleSort(int[], int);
void printArray(int[], int);


/**
 * main - Program's Entry Point.
 * Description: Implementing C++ Binary Search.
 * Return: (0) - Always Success.
 */
int main()
{
  int arr[] = { 5, 1, 4, 2, 8};
  int N = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, N);
  cout << "Sorted array: \n";
  printArray(arr, N);
  
  return 0;
}

/**
 * Bubble Sort - Bubble Sort Function.
 * Description: Sorting an Array of Elements (int).
 * @arr: The Array to Sort.
 * @length: The Size of the Array.
 * Return: (void) Nothing.
 */
void bubbleSort(int arr[], int length)
{
	for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        /**
         *Swap comes with C++ from <bits/stdc++.h> lib.
         * Here's The Swapping Logic From C Course.
         */
        // int temp;
        // temp = arr[j + 1];
        // arr[j + 1] = arr[j];
        // arr[j] = temp;
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

// Function to print an array
void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
