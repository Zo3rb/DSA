# [Linear Search](./linear_search.cpp).

## Linear Search Algorithm.

### Credit [GeeksForGeeks](https://www.geeksforgeeks.org/linear-search).

####  Definition
Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set. It is the easiest searching algorithm.

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Linear-Search.png" alt="Visualizing Linear Search" />

#### Pseudo Code
```
For each Element of List (Linear Data Structure):
	if (current element is target):
		return target's index (Element).
return -1 if loop finished and not evaluated.
```

#### Best Case:
```
Target is the First element.
```

#### Worst Case:
```
Target is the Last element of the list or none exist.
```
