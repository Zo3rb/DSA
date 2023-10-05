# [Insertion Sort](./insertion_sort.cpp).

## Insertion Sort Algorithm.

### Credit [GeeksForGeeks](https://www.geeksforgeeks.org/insertion-sort/)

#### Definition.
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

#### Another Simple Definition.
The Insertion sort algorithm sorting by building up the sort by gradually creating a larger left half which is always sorted.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/insertionsort.png" alt="Visualizing Insertion Sort" />

#### Pseudo Code.

```
Iterate from arr[1] to arr[N] over the array. 
Compare the current element (key) to its predecessor. 
If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
```

#### Best Case.

```
Nearly or Already Sorted.
```

#### Worst Case.

```
All Elements are in Deascading Order.
```
