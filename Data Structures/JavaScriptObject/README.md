# JavaScript Object (Dictionary/Map) Operations and Big O Complexity

In this README, we will explore common operations on JavaScript Objects (often referred to as dictionaries or maps), along with their corresponding Big O complexities. Understanding these complexities is essential for optimizing code performance in your JavaScript applications.

## Table of Contents

1. [Introduction](#introduction)
2. [Common Object Operations](#common-object-operations)

   - [Insertion](#insertion)
   - [Access](#access)
   - [Deletion](#deletion)
   - [Search](#search)
   - [Iteration](#iteration)

3. [Big O Complexity](#big-o-complexity)
4. [Conclusion](#conclusion)

## Introduction

In JavaScript, objects are collections of key-value pairs. They are widely used for various purposes, such as storing data, implementing dictionaries, and more. Understanding the time complexities associated with common object operations is crucial for optimizing the performance of your code.

## Common Object Operations

### Insertion

Inserting a key-value pair into an object is typically done using the assignment operator (`=`) or the `Object.assign()` method.

**Example:**

```javascript
const obj = {};
obj["key"] = "value";
```

### Access

Accessing a value by its key is done in constant time.

**Example:**

`const obj = { key: 'value' };
const value = obj['key'];`

### Deletion

Removing a key-value pair from an object is typically done using the `delete` keyword.

**Example:**

`const obj = { key: 'value' };
delete obj['key'];`

### Search

Searching for a key in an object involves iterating over the keys and comparing them to the target key. The time complexity is typically O(n), where n is the number of keys in the object.

**Example:**

`function searchKey(obj, targetKey) {
  for (const key in obj) {
    if (key === targetKey) {
      return true;
    }
  }
  return false;
}`

### Iteration

Iterating over all keys in an object can be done using a `for...in` loop. The time complexity is O(n), where n is the number of keys.

**Example:**

`const obj = { key1: 'value1', key2: 'value2' };
for (const key in obj) {
  console.log(key, obj[key]);
}`

## Big O Complexity

Here's a summary of the Big O complexities for common object operations:

- Insertion: O(1)
- Access: O(1)
- Deletion: O(1)
- Search: O(n)
- Iteration: O(n)

## Conclusion

Understanding the Big O complexities of JavaScript object operations is essential for writing efficient code. Depending on your use case, you can choose the appropriate data structure (e.g., objects, arrays, sets) to optimize your code's performance.

Happy coding!

Ali
