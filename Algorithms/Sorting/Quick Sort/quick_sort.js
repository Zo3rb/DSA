const unsortedArray = [5, 2, 8, 1, 9, 3, 7, 4, 6];

// Implementing 'Pivot' Helper Function
function pivot(arr) {
  let pivotIndex = 0;
  let pivotValue = arr[pivotIndex];

  for (let i = 1; i < arr.length; i++) {
    if (arr[i] < pivotValue) {
      pivotIndex++;
      [arr[i], arr[pivotIndex]] = [arr[pivotIndex], arr[i]];
    }
  }

  [arr[0], arr[pivotIndex]] = [arr[pivotIndex], arr[0]];

  return pivotIndex;
}

// Implementing The Quick Sort Algorithm.
function quick_sort(arr) {
  if (arr.length <= 1) return arr;
  else {
    let pivotIndex = pivot(arr);
    let left = quick_sort(arr.slice(0, pivotIndex));
    let right = quick_sort(arr.slice(pivotIndex + 1));

    return left.concat(arr[pivotIndex]).concat(right);
  }
}
