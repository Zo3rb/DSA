# Selection Sort

Selection Sort is a straightforward sorting algorithm that divides the input list into two parts: the sorted part and the unsorted part. It repeatedly selects the minimum (or maximum) element from the unsorted part and moves it to the sorted part. The process is repeated until no unsorted elements remain. While not the most efficient sorting algorithm, it's a valuable concept for understanding sorting.

## How It Works

1. Start with the entire list as unsorted.
2. Find the minimum (or maximum) element in the unsorted part of the list.
3. Swap it with the first element in the unsorted part, effectively moving it to the sorted part.
4. Move the boundary between the sorted and unsorted parts one element to the right.
5. Repeat steps 2-4 until no unsorted elements remain.

![](https://media.geeksforgeeks.org/wp-content/uploads/20230524115038/1.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526165135/2.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526165200/3.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526165244/4.webp)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230526165320/5.webp)

Selection sort has a time complexity of O(n^2) in all cases, making it inefficient for large datasets. It's often used for educational purposes and small to moderate-sized lists.

- **Worst-case time complexity:** O(n^2) - Selection sort always makes the same number of comparisons and swaps regardless of the order of the input.

- **Best-case time complexity:** O(n^2) - Selection sort performs the same number of comparisons and swaps as in the worst case since it doesn't take advantage of any inherent order in the data.

- **Average-case time complexity:** O(n^2) - On average, selection sort exhibits the same quadratic time complexity due to its fixed number of comparisons and swaps.

While selection sort is not the most efficient sorting algorithm, it's valuable for learning about sorting principles and is easy to implement.
