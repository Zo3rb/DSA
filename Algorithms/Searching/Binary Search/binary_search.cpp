#include <iostream>
using namespace std;

// Binary Search Prototype.
int binarySearch(int[], int, int);


/**
 * main - Program's Entry Point.
 * Description: Implementing C++ Binary Search.
 * Return: (0) - Always Success.
 */
int main(void)
{
  int myArr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Must be Sorted to be Efficient
  // Change The Second Parameter for Testing.
  int target = binarySearch(myArr, 5, sizeof(myArr) / sizeof(myArr[0]));

	if (target > 0)
  		cout << "Found, Target's Index is: " << target << endl;
	else
		cout << "Not Found" << endl;

	return (0);
}

/**
 * Binary Search - Binary Searching Function.
 * Description: Find a Specific Element (int Target) into
 * Sorted Linear Data Structure (an Array of Integers)
 * and Return it's Index (Element).
 * @arr: The Array to Looks into.
 * @target: Number to Look of.
 * @length: The Size of the Array.
 * Return: (int) index or -1 for none found.
 */
int binarySearch(int arr[], int target, int length)
{
	int listStart = 0;
	int listEnd = length - 1;
	int listMiddle;

	while (listEnd >= listStart)
	{
		listMiddle = (listStart + listEnd) / 2;
		if (arr[listMiddle] == target)
			return listMiddle;
		else if (arr[listMiddle] > target)
			listEnd = listMiddle - 1;
		else
			listStart = listMiddle + 1;
	}

	return -1;
}
