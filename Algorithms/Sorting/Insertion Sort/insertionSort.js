function insertionSort(arr) {
  for (let i = 1; i < arr.length; i++) {
    const key = arr[i]; // Select the current element to insert
    let j = i - 1;

    // Move elements of arr[0...i-1], which are greater than key, one position ahead of their current position
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key; // Insert the selected element into its correct position
  }
}

// Example usage:
const arr = [64, 34, 25, 12, 22, 11, 90];
insertionSort(arr);
console.log("Sorted array:", arr);
