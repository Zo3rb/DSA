# [Selection Sort](./selection_sort.cpp).

## Selection Sort Algorithm.

### Credit [GeeksForGeeks](https://www.geeksforgeeks.org/selection-sort/).

#### Definition.

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning.

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20220203094305/Selection-Sort-Flowhchart.png" alt="Visualizing Selection Sort" />

#### Pseudo Code.

```
Initialize minimum value(min_idx) to location 0.
Traverse the array to find the minimum element in the array.
While traversing if any element smaller than min_idx is found then swap both the values.
Then, increment min_idx to point to the next element.
Repeat until the array is sorted.
```

#### Best Case.

```
Nearly or Already Sorted.
```

#### Worst Case.

```
All Elements are in Deascading Order.
```
