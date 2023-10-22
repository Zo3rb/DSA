let arr = [1, 44, 5, 78, 22, 4, 9, 90];

function sort(arr) {
  // Dividing the whole unsorted array into two parts (sorted/unsorted).
  for (let i = 0; i < arr.length; i++) {
    // Getting Indicator to The Current Element.
    let minIndex = i;
    for (let j = i + 1; j < arr.length; j++) {
      // Now, We are comparing and reAssign the minIndex as it'll be the smallest value.
      if (arr[minIndex] > arr[j]) {
        minIndex = j;
      }
    }
    // now we swap the smallest for the current iterator.
    [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]];
  }
}

sort(arr);
console.log(arr);
