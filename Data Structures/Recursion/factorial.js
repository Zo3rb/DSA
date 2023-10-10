// A factorial of a non-negative integer 'n' is the product of all positive integers
// from 1 to 'n'. It is denoted as 'n!' and calculated recursively.

// Iteratively Solution.
function getFactorialFrom(number) {
  let total = 1;
  for (let i = number; i >= 1; i--) {
    total *= i;
  }
  return total;
}

console.log(getFactorialFrom(4)); // Output: 24

// Recursive Solution.
function recursiveFactorial(number) {
  if (number === 1) return 1;
  return number * recursiveFactorial(number - 1);
}

console.log(recursiveFactorial(4)); // Output: 24
