#include <bits/stdc++.h>
using namespace std;

// Insertion Sort Prototype.
void insertionSort(int[], int);
void printArray(int[], int);

/**
 * main - Program's Entry Point.
 * Description: Implementing C++ Insertion Sort.
 * Return: (0) - Always Success.
 */
int main() 
{
  int arr[] = {2, 4, 5, 3, 1, 6, 7, 9, 8, 1, 0};
  int N = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, N);
  cout << "Sorted array: \n";
  printArray(arr, N);
  
  return 0;
}

/**
 * Insertion Sort - Insertion Sort Function.
 * Description: Sorting an Array of Elements (int).
 * @arr: The Array to Sort.
 * @length: The Size of the Array.
 * Return: (void) Nothing.
 */
void insertionSort(int arr[], int length)
{
  for (int i = 0; i < length; i++)
  {
    int currentElement = arr[i]; // Pointer (Indicator) for The Current Element to Compare.
    int j = i - 1; // Indicator for The Next Iteration Process (Could Be a For Loop).
    while (j >= 0 && arr[j] > currentElement) // While Still in Iteration Range & Previous Element is Bigger than Current.
    {
      arr[j + 1] = arr[j]; // Assign The Current Place for The Bigger Value.
      j--;
    }
    /* If The Previous Loop Condition Didn't Met. */
    arr[j + 1] = currentElement; // Then Add The Curent Value to Opposite Direction.
  }
}

// Function to print an array.
void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
