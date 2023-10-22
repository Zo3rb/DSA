function mergeArrays(arr1, arr2) {
  let results = [];
  let i = 0;
  let j = 0;

  while (i < arr1.length && j < arr2.length) {
    if (arr1[i] < arr2[j]) {
      results.push(arr1[i]);
      i++;
    } else {
      results.push(arr2[j]);
      j++;
    }
  }

  while (i < arr1.length) {
    results.push(arr1[i]);
    i++;
  }

  while (j < arr2.length) {
    results.push(arr2[j]);
    j++;
  }

  return results;
}

function mergeSort(arr) {
  if (arr.length <= 1) {
    return arr;
  } else {
    let midIndex = Math.floor(arr.length / 2);
    let firstHalf = arr.slice(0, midIndex);
    let secondHalf = arr.slice(midIndex);

    // Recursively sort and merge the sub arrays
    return mergeArrays(mergeSort(firstHalf), mergeSort(secondHalf));
  }
}

let arr = [1, 44, 5, 78, 22, 4, 9, 90, 100];
arr = mergeSort(arr);
console.log(arr);
