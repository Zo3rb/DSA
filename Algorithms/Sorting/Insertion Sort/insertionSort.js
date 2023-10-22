let arr = [1, 44, 5, 78, 22, 4, 9, 90];

function sort(arr) {
  /* 
    	Assuming the left portion is a sorted and we'll start from the second element
        as the begging of the second portion (un-sorted array).
    */
  for (let i = 1; i < arr.length; i++) {
    // Indicator for the Current Element.
    let currentElement = arr[i];
    // Indicator for the previous Index.
    let j = i - 1;
    // Comparing and Swapping if Needed.
    while (j >= 0 && currentElement < arr[j]) {
      arr[j + 1] = arr[j];
      j -= 1;
    }
    // Putting the highest element into the last index.
    arr[j + 1] = currentElement;
  }
}

sort(arr);
console.log(arr);
