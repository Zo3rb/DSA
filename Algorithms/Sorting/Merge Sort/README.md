# Merge Sort

Merge Sort is a popular and efficient sorting algorithm that uses a divide-and-conquer strategy to sort an array or list. It breaks the input list into smaller, more manageable sublists, sorts them, and then merges the sorted sublists back together to produce a fully sorted list. Merge Sort is known for its stable performance and is often used in sorting large datasets efficiently.

## How It Works

1. Divide the unsorted list into smaller sublists by finding the middle of the list.
2. Recursively sort each sublist until each sublist contains only one element, which is, by definition, sorted.
3. Merge the sorted sublists back together, comparing elements from each sublist to ensure the final merged list remains sorted.

![Merge Sort Visualization](<https://media.geeksforgeeks.org/wp-content/uploads/20230706153706/Merge-Sort-Algorithm-(1).png>)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230530153635/img1drawio.png)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230530153654/img2drawio.png)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230530153714/img3drawio.png)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230530153747/img4drawio.png)

Merge sort has a time complexity of O(n log n) for all cases, making it an efficient and stable sorting algorithm.

- **Worst-case time complexity:** O(n log n) - Merge Sort consistently performs well, even in the worst-case scenario.

- **Best-case time complexity:** O(n log n) - Merge Sort's best-case performance is also O(n log n), making it efficient regardless of the initial order of the elements.

- **Average-case time complexity:** O(n log n) - On average, Merge Sort exhibits the same excellent time complexity.

Merge Sort is a versatile and efficient sorting algorithm suitable for sorting large datasets or when stability is required. It's widely used in many applications, including external sorting and general-purpose sorting libraries.
