# Quick Sort

Quick Sort is a highly efficient and widely used sorting algorithm known for its average-case and best-case time complexity. It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively. Quick Sort is an example of a divide-and-conquer sorting algorithm.

## How It Works

1. Choose a 'pivot' element from the array. Various strategies can be used to select the pivot, including choosing the first element, last element, or a random element.
2. Partition the array into two sub-arrays: elements less than the pivot and elements greater than the pivot.
3. Recursively sort the two sub-arrays.
4. Combine the sorted sub-arrays and the pivot to produce the final sorted array.

![Quick Sort Visualization](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/01/QuickSort2.png)

---

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526114635/1.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526114837/2.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526114951/3.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526115052/4.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526115200/5.webp)

Quick Sort has an average-case time complexity of O(n log n) and is often faster in practice than other O(n log n) algorithms like Merge Sort due to its efficient partitioning. However, it has a worst-case time complexity of O(n^2) when an unsuitable pivot is chosen.

- **Worst-case time complexity:** O(n^2) - Occurs when the pivot selection consistently leads to unbalanced partitions.
- **Best-case time complexity:** O(n log n) - Occurs when the pivot selection leads to balanced partitions.
- **Average-case time complexity:** O(n log n) - The average performance of Quick Sort.

Quick Sort is a versatile sorting algorithm that is commonly used in practice, and it's one of the fastest sorting algorithms for most scenarios.

## Usage

To use Quick Sort in your code, you can follow these steps:

1. Implement or import a Quick Sort function in your preferred programming language.
2. Pass an array to be sorted to the Quick Sort function.
3. The function will return the sorted array.
