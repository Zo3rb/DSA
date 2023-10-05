#include <stdio.h>

// Linear Search Prototype.
int linearSearch(int[], int, int);

/**
 * main - Program's Entry Point.
 * Description: Implementing C++ Linear Search.
 * Return: (0) - Always Success.
 */
int main()
{
  int myArr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Could be Sorted or Not but Must be Linear DS.
  // Change The Second Parameter for Testing.
  int target = linearSearch(myArr, 5, sizeof(myArr) / sizeof(myArr[0]));

  if (target > 0)
    printf("Found, Target;s Index is: %d\n", target);
  else
    printf("Not Found\n");

  return (0);
}

/**
 * linearSearch - Linear Searching Function.
 * Description: Find a Specific Element (int Target) into
 * Linear Data Structure (an Array of Integers)
 * and Return it's Index (Element).
 * @arr: The Array to Looks into.
 * @target: Number to Look of.
 * @length: The Size of the Array.
 * Return: (int) index or -1 for none found.
 */
int linearSearch(int arr[], int target, int length)
{
  for (int i = 0; i < length; i++)
  {
    if (arr[i] == target)
      return i;
  }

  return -1;
}