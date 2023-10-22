# Radix Sort

Radix Sort is a non-comparative sorting algorithm designed for sorting integers or strings with fixed-length representations. It works by processing individual digits or characters of elements in the list and distributing them into buckets or queues based on their values. After processing all digits or characters, the elements are collected from the buckets to form the sorted list. Radix Sort is efficient for sorting numbers or strings with a fixed number of digits or characters.

## How It Works

1. Determine the maximum number of digits or characters in the elements to be sorted. This value is used to determine the number of iterations required.

2. Start with the rightmost (least significant) digit or character and process all elements, distributing them into 10 buckets (0-9) based on the value of this digit or character.

3. Collect the elements from the buckets in order, forming a new list.

4. Repeat the process for the next digit or character to the left, working your way towards the leftmost (most significant) digit or character.

5. Continue this process for all digits or characters until the entire list is sorted.

![](https://media.geeksforgeeks.org/wp-content/uploads/20230609164536/Radix-Sort--1.png)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230609164535/Radix-Sort--2.png)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230609164535/Radix-Sort--3.png)

![](https://media.geeksforgeeks.org/wp-content/uploads/20230609164534/Radix-Sort--4.png)

Radix Sort has a time complexity of O(k \* n), where "k" is the number of digits or characters, and "n" is the number of elements in the list. It's efficient when "k" is relatively small.

- **Worst-case time complexity:** O(k \* n)
- **Best-case time complexity:** O(k \* n)
- **Average-case time complexity:** O(k \* n)

Radix Sort is useful for sorting large datasets of integers or strings with fixed lengths, especially when "k" is small. However, it is not suitable for variable-length data.

## Usage

To use Radix Sort in your code, you can follow these steps:

1. Implement or import a Radix Sort function in your preferred programming language.
2. Pass an array of integers or strings with fixed-length representations to the Radix Sort function.
3. The function will return the sorted array.
