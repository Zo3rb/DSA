#include <bits/stdc++.h>
using namespace std;

// Selection Sort Prototype.
void selectionSort(int[], int);
void printArray(int[], int);

/**
 * main - Program's Entry Point.
 * Description: Implementing C++ Selection Sort.
 * Return: (0) - Always Success.
 */
int main() 
{
  int arr[] = {2, 4, 5, 3, 1, 6, 7, 9, 8, 1, 0};
  int N = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, N);
  cout << "Sorted array: \n";
  printArray(arr, N);
  
  return 0;
}

/**
 * Selection Sort - Selection Sort Function.
 * Description: Sorting an Array of Elements (int).
 * @arr: The Array to Sort.
 * @length: The Size of the Array.
 * Return: (void) Nothing.
 */
void selectionSort(int arr[], int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = i + 1; j < length; j++)
    {
      if (arr[j] < arr[i])
      {
        swap(arr[j], arr[i]);
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
