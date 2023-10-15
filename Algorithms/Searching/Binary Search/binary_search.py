import math


def binarySearch(arr, target):
    start = 0
    end = len(arr) - 1

    while start <= end:
        middle = math.floor((start + end) / 2)

        if arr[middle] == target:
            return middle
        elif arr[middle] < target:
            start = middle + 1
        else:
            end = middle - 1

    return -1
