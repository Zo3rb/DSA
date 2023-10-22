function radixSort(arr) {
  const maxDigits = Math.max(...arr).toString().length;

  for (let i = 0; i < maxDigits; i++) {
    const buckets = Array.from({ length: 10 }, () => []);

    for (const num of arr) {
      const digit = Math.floor((num / 10 ** i) % 10);
      buckets[digit].push(num);
    }

    arr = [].concat(...buckets);
  }

  return arr;
}

// Example usage:
const myArray = [170, 45, 75, 90, 802, 24, 2, 66];
const sortedArray = radixSort(myArray);
console.log(sortedArray);
