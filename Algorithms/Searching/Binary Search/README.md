# [Binary Search](./binary_search.cpp).

## Binary Search Algorithm.

### Credit [GeeksForGeeks](https://www.geeksforgeeks.org/binary-search).

#### Definition

Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n).

![](https://media.geeksforgeeks.org/wp-content/uploads/20220309171621/BinarySearch.png)

#### Pseudo Code

```text
Begin with the mid element of the whole array as a search key.
If the value of the search key is equal to the item then return an index of the search key.
Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
Otherwise, narrow it to the upper half.
Repeatedly check from the second point until the value is found or the interval is empty.
```

#### Best Case

```text
Target is the Middle element of Searched Array (Sorted Linear DS).
```

#### Worst Case

```text
Target is either the First or The Last Element or Even none exist.
```
