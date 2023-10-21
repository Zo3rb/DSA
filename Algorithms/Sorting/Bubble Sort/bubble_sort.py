arr = [9, 3, 8, 5, 6, 7, 2, 1, 4]


def bubble_sort(arr):
    for i in range(0, len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] > arr[j]:
                [arr[i], arr[j]] = [arr[j], arr[i]]


bubble_sort(arr)
print(arr)
