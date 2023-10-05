# [Arrays](./main.c)

## Credit [GeeksForGeeks](https://www.geeksforgeeks.org/array-data-structure/)

### Representation of Array

The representation of an array can be defined by its declaration. A declaration means allocating memory for an array of a given size.

### Definition

An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).

For simplicity, we can think of an array as a flight of stairs where on each step is placed a value (let’s say one of your friends). Here, you can identify the location of any of your friends by simply knowing the count of the step they are on.

This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array). The base value is index 0 and the difference between the two indexes is the offset.

!["Array Representation"](https://media.geeksforgeeks.org/wp-content/uploads/20220721080308/array.png)

We can directly access an array element by using its index value.

Basic terminologies of array
Array Index: In an array, elements are identified by their indexes. Array index starts from 0.
Array element: Elements are items stored in an array and can be accessed by their index.
Array Length: The length of an array is determined by the number of elements it can contain.
Representation of Array
The representation of an array can be defined by its declaration. A declaration means allocating memory for an array of a given size.

!["Array Representation"](https://media.geeksforgeeks.org/wp-content/uploads/20220721080308/array.png)

Arrays can be declared in various ways in different languages. For better illustration, below are some language-specific array declarations.

### Types of Array operations

- Traversal: Traverse through the elements of an array.
- Insertion: Inserting a new element in an array.
- Deletion: Deleting element from the array.
- Searching: Search for an element in the array.
- Sorting: Maintaining the order of elements in the array.

## Advantages of using Arrays

- Arrays allow random access to elements. This makes accessing elements by position faster.
- Arrays have better cache locality which makes a pretty big difference in performance.
- Arrays represent multiple data items of the same type using a single name.
- Arrays store multiple data of similar types with the same name.
- Array data structures are used to implement the other data structures like linked lists, stacks, queues, trees, graphs, etc.

## Disadvantages of Array

- As arrays have a fixed size, once the memory is allocated to them, it cannot be increased or decreased, making it impossible to store extra data if required. An array of fixed size is referred to as a static array.
- Allocating less memory than required to an array leads to loss of data.
- An array is homogeneous in nature so, a single array cannot store values of different data types.
- Arrays store data in contiguous memory locations, which makes deletion and insertion very difficult to implement. This problem is overcome by implementing linked lists, which allow elements to be accessed sequentially.

## Application of Array

- They are used in the implementation of other data structures such as array lists, heaps, hash tables, vectors, and matrices.
- Database records are usually implemented as arrays.
- It is used in lookup tables by computer.
- It is used for different sorting algorithms such as bubble sort insertion sort, merge sort, and quick sort.
