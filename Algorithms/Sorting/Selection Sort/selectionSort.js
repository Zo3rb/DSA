const arr = [9, 3, 8, 5, 6, 7, 2, 1, 4];

function selectionSort(arr) {
  for (let i = 0; i < arr.length; i++) {
    let minIndex = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[minIndex]) {
        // Compare elements using arr[j] and arr[minIndex]
        minIndex = j;
      }
    }
    [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]]; // Swap elements correctly
  }
}

selectionSort(arr);
console.log(arr);
