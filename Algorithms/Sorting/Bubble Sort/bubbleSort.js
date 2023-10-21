const arr = [9, 3, 8, 5, 6, 7, 2, 1, 4];

function bubbleSort(arr) {
  // Start Iterating from the begging till the end.
  for (let i = 0; i <= arr.length; i++) {
    // Start Iterating from the second element upto the element before the last one.
    for (let j = i + 1; j <= arr.length - 1; j++) {
      // Getting sure the order is right.
      if (arr[i] > arr[j]) [arr[i], arr[j]] = [arr[j], arr[i]]; // Swapping if true.
    }
  }
}

bubbleSort(arr);
console.log(arr);
