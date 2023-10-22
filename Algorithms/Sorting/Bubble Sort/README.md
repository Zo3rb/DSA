# Bubble Sort

Bubble Sort is a simple and classic sorting algorithm that repeatedly steps through the list to be sorted, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until no swaps are needed, indicating that the list is sorted. While not the most efficient sorting algorithm, it's a great way to understand the basics of sorting.

## How It Works

1. Start at the beginning of the list.
2. Compare the first two elements. If the first element is greater than the second, swap them.
3. Move to the next pair of elements and repeat the comparison and swapping until you reach the end of the list.
4. The largest element has now "bubbled up" to the end of the list.
5. Repeat steps 1-4 for the remaining unsorted part of the list, excluding the already sorted elements.
6. Continue these passes until no more swaps are needed.

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526103842/1.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526103914/2.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526103949/3.webp)

Bubble sort has a time complexity of O(n^2) in the worst case, which makes it inefficient for large lists. It's primarily used for educational purposes and small datasets.

Worst-case time complexity: O(n^2) - In the worst-case scenario, when the input list is in reverse order, bubble sort will need to make many comparisons and swaps for each element, resulting in a time complexity of O(n^2), where "n" is the number of elements in the list.

Best-case time complexity: O(n) - In the best-case scenario, when the input list is already sorted, bubble sort will still perform comparisons but will not require any swaps. In this case, the time complexity is O(n), as it goes through the list once to determine that no swaps are needed.

Average-case time complexity: O(n^2) - On average, bubble sort will require O(n^2) comparisons and swaps because it doesn't take advantage of partial sorting or any inherent order in the data.

Bubble sort is not a very efficient sorting algorithm, especially for large datasets, because its performance is quadratic in the worst and average cases. There are more efficient sorting algorithms like quicksort and mergesort that have better average and worst-case time complexities.
