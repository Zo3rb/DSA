/**
 * Linear Search Function in TS.
 * @Param {Array} arr - The Array to Looks into.
 * @Param {Number} target - Target to Look of.
 * @Param {Number} len - The Size of the Array.
 * @Return {Number} index or -1 for none found.
 */
function linearSearch(arr: Number[], target: Number, len: Number): Number {
  for (let i = 0; i < len; i++) {
    if (arr[i] == target) return i;
  }

  return -1;
}

/**
 * main function just to test.
 * @Return {Number} - 0 to simulate c++.
 */
function main(): Number {
  const arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
  let target = linearSearch(arr, 5, arr.length);

  if (target > 0) console.log("Found Target's Index IS: ", target);
  else console.log("Not Found.");

  return 0;
}

// Tested.
main();
