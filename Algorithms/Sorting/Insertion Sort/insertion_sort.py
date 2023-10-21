def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]  # Select the current element to insert
        j = i - 1

        # Move elements of arr[0...i-1], which are greater than key, one position ahead of their current position
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key  # Insert the selected element into its correct position


# Example usage:
arr = [64, 34, 25, 12, 22, 11, 90]
insertion_sort(arr)
print("Sorted array:", arr)
