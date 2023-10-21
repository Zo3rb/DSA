arr = [9, 3, 8, 5, 6, 7, 2, 1, 4]


def selection_sort(arr):
    for i in range(len(arr)):
        minIndex = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[minIndex]:
                minIndex = j
        [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]]


selection_sort(arr)
print(arr)
