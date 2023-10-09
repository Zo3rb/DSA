# Introduction to Problem Solving Patterns

Welcome to the "Introduction to Problem Solving Patterns" module! In this module, we will explore some of the most commonly used problem-solving patterns in algorithmic and coding challenges. Understanding these patterns and when to apply them is crucial for becoming a more efficient problem solver.

## Table of Contents

1. [Introduction](#introduction)
2. [Frequency Counter](#frequency-counter)
   - [When to Use](#when-to-use-frequency-counter)
   - [How to Use with Examples](#how-to-use-frequency-counter-with-examples)
3. [Multi Pointers](#multi-pointers)
   - [When to Use](#when-to-use-multi-pointers)
   - [How to Use with Examples](#how-to-use-multi-pointers-with-examples)
4. [Sliding Window](#sliding-window)
   - [When to Use](#when-to-use-sliding-window)
   - [How to Use with Examples](#how-to-use-sliding-window-with-examples)
5. [Divide and Conquer](#divide-and-conquer)
   - [When to Use](#when-to-use-divide-and-conquer)
   - [How to Use with Examples](#how-to-use-divide-and-conquer-with-examples)
6. [Conclusion](#conclusion)

## Introduction

Solving complex problems often requires structured approaches. Problem-solving patterns are well-defined strategies that provide a systematic way to tackle various types of challenges. In this module, we will focus on four important patterns: Frequency Counter, Multi Pointers, Sliding Window, and Divide and Conquer.

## Frequency Counter

### When to Use Frequency Counter

The Frequency Counter pattern is useful when:

- You need to compare two collections (e.g., arrays, strings) and determine if they are anagrams.
- You want to check for duplicates or unique values within a collection.
- You need to identify relationships between elements in two collections.

### How to Use Frequency Counter with Examples

#### Example 1: Checking for Anagrams

```python
# Check if two strings are anagrams
def are_anagrams(str1, str2):
    if len(str1) != len(str2):
        return False

    frequency_counter1 = {}
    frequency_counter2 = {}

    for char in str1:
        frequency_counter1[char] = frequency_counter1.get(char, 0) + 1

    for char in str2:
        frequency_counter2[char] = frequency_counter2.get(char, 0) + 1

    return frequency_counter1 == frequency_counter2

print(are_anagrams("listen", "silent"))  # True
```

#### Check for duplicate values in an array

```python
def has_duplicates(arr):
    frequency_counter = {}

    for item in arr:
        if frequency_counter.get(item):
            return True
        frequency_counter[item] = 1

    return False

print(has_duplicates([1, 2, 3, 4, 1]))  # True
```

#### Check if a string has all unique characters using a frequency counter

```python
def has_unique_chars(s):
    frequency_counter = {}

    for char in s:
        if char in frequency_counter:
            return False
        frequency_counter[char] = 1

    return True

print(has_unique_chars("abcdefg"))  # True
print(has_unique_chars("hello"))    # False
```

```javascript
// Check if a string has all unique characters using a frequency counter
function hasUniqueChars(str) {
  const frequencyCounter = {};

  for (const char of str) {
    if (frequencyCounter[char]) {
      return false;
    }
    frequencyCounter[char] = 1;
  }

  return true;
}
```

console.log(hasUniqueChars("abcdefg")); // true
console.log(hasUniqueChars("hello")); // false

## Multi Pointers

### When to Use Multi Pointers

The Multi Pointers pattern is useful when:

- You need to find pairs of elements in a sorted array that meet certain conditions.
- You want to determine if a given string is a palindrome.
- You need to solve problems involving pointers moving towards each other.

### How to Use Multi Pointers with Examples

#### Example 1: Finding Pair with Target Sum

#### Find a pair of numbers in a sorted array that sum up to a target value

```python
def two_sum(arr, target):
    left, right = 0, len(arr) - 1

    while left < right:
        current_sum = arr[left] + arr[right]
        if current_sum == target:
            return [arr[left], arr[right]]
        elif current_sum < target:
            left += 1
        else:
            right -= 1

    return None

print(two_sum([1, 2, 3, 4, 5], 9))  # [4, 5]
```

#### Example 2: checking Palindrome

```python
def is_palindrome(s):
    left, right = 0, len(s) - 1

    while left < right:
        if s[left] != s[right]:
            return False
        left += 1
        right -= 1

    return True

print(is_palindrome("racecar"))  # True
```

#### Python Example 2: Finding Triplets with Zero Sum

```python
# Find all triplets in an array that sum up to zero using multi pointers
def zeroSumTriplets(arr):
    arr.sort()
    triplets = []

    for i in range(len(arr) - 2):
        left = i + 1
        right = len(arr) - 1

        while left < right:
            total = arr[i] + arr[left] + arr[right]

            if total == 0:
                triplets.append([arr[i], arr[left], arr[right]])
                left += 1
                right -= 1
            elif total < 0:
                left += 1
            else:
                right -= 1

    return triplets

print(zeroSumTriplets([-3, -2, -1, 0, 1, 2, 3]))  # [[-3, -1, 2], [-2, 0, 2], [-2, -1, 3], [-3, 0, 3]]
```

#### JavaScript Example 2: Finding Triplets with Zero Sum

```javascript
// Find all triplets in an array that sum up to zero using multi pointers
function zeroSumTriplets(arr) {
  arr.sort((a, b) => a - b);
  const triplets = [];

  for (let i = 0; i < arr.length - 2; i++) {
    let left = i + 1;
    let right = arr.length - 1;

    while (left < right) {
      const total = arr[i] + arr[left] + arr[right];

      if (total === 0) {
        triplets.push([arr[i], arr[left], arr[right]]);
        left++;
        right--;
      } else if (total < 0) {
        left++;
      } else {
        right--;
      }
    }
  }

  return triplets;
}

console.log(zeroSumTriplets([-3, -2, -1, 0, 1, 2, 3])); // [[-3, -1, 2], [-2, 0, 2], [-2, -1, 3], [-3, 0, 3]]
```

### Sliding Window

#### When to Use Sliding Window

The Sliding Window pattern is useful when:

- You need to efficiently solve problems that involve subarrays or substrings.
- You want to optimize solutions for problems with a fixed window or size constraint.
- You aim to reduce the time complexity of your algorithm.

#### How to Use Sliding Window with Examples

##### Example 1: Maximum Sum Subarray of Size K

```python
# Find the maximum sum of any contiguous subarray of size K using the sliding window pattern
def max_sum_subarray(arr, k):
    max_sum = float('-inf')
    current_sum = 0

    for i in range(len(arr)):
        current_sum += arr[i]

        if i >= k - 1:
            max_sum = max(max_sum, current_sum)
            current_sum -= arr[i - k + 1]

    return max_sum

print(max_sum_subarray([2, 1, 5, 1, 3, 2], 3))  # 9
```

### Divide and Conquer

#### When to Use Divide and Conquer

The Divide and Conquer pattern is useful when:

- You have a problem that can be broken down into smaller, similar subproblems.
- Solving the subproblems independently can lead to an efficient overall solution.
- You want to optimize the performance of algorithms for problems like sorting, searching, or optimization.

#### How to Use Divide and Conquer with Examples

##### Example 1: Binary Search

```python
# Implement binary search using the divide and conquer pattern
def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1

print(binary_search([1, 2, 3, 4, 5], 3))  # 2
```

## Conclusion

By the end of this module, you will have a deep understanding of the Frequency Counter, Multi Pointers, Sliding Window, and Divide and Conquer problem-solving patterns. These patterns are essential tools that will significantly enhance your ability to solve complex algorithmic and coding challenges.

Happy problem solving!

Ali
