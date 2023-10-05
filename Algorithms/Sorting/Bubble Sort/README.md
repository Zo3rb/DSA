# [Bubble Sort](./bubble_sort.cpp).

## Bubble Sort Algorithm.

### Credit [GeeksForGeeks](https://www.geeksforgeeks.org/binary-search).

#### Definition.

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/02/bubble-sort1.png" alt="Visualizing Bubble Sort" />

#### Pseudo Code

```
We start with the first element and i=0 index and check if the element present at i+1 is greater then we swap the elements at index i and i+1. If above is not the case, then no swapping will take place. Now “ i ” gets incremented and the above 2 steps happen again until the array is exhausted.
```

#### Best Case

```
Nearly or Already Sorted.
```

#### Worst Case

```
All Elements are in Deascading Order.
```
