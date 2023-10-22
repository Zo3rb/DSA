# Insertion Sort

Insertion Sort is a simple sorting algorithm that is particularly efficient for small or nearly sorted lists. It works by dividing the input list into two parts: the sorted part and the unsorted part. In each iteration, the algorithm selects one element from the unsorted part and inserts it into its correct position within the sorted part. While it's not the most efficient sorting algorithm for large datasets, it's great for understanding sorting concepts.

## How It Works

1. Start with the first element as the sorted part and the remaining elements as the unsorted part.
2. Consider one element from the unsorted part at a time and insert it into its correct position in the sorted part.
3. To insert an element, compare it with the elements in the sorted part and move larger elements to the right.
4. Repeat these steps for each element in the unsorted part, moving the boundary between the sorted and unsorted parts one element to the right each time.

![](https://media.geeksforgeeks.org/wp-content/uploads/insertionsort.png)

Insertion sort has a time complexity of O(n^2) in the worst and average cases, but it can be very efficient for small lists or lists that are already partially sorted.

- **Worst-case time complexity:** O(n^2) - In the worst-case scenario, when the input list is in reverse order, insertion sort will require a large number of comparisons and shifts for each element.

- **Best-case time complexity:** O(n) - In the best-case scenario, when the input list is already sorted, insertion sort performs a minimal number of comparisons and shifts. It's a linear-time operation.

- **Average-case time complexity:** O(n^2) - On average, insertion sort requires quadratic time due to the number of comparisons and shifts.

Insertion sort is an excellent algorithm for educational purposes and for sorting small or nearly sorted datasets efficiently.
