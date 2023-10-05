def linearSearch(list, target, length):
    '''
    Info: Simulating Procedural Linear Search in Python.
        Args:
            list: The Array(List here) to Looks into.
            target: Number to Look of.
            length: The Size of the Array.
        Returns:
            index of target if in the list or -1.
    '''
    for index, item in enumerate(list):
        if item == target:
            return index;

    return -1;

def main():
    if __name__ == "__main__":
        print("Linear Search in Python with Procedural Paradigm");

    intList = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
    target = linearSearch(intList, 5, len(intList));

    if target > 0:
        print("Found, Target's Index is: {}".format(target));
    else:
        print("Not Found");

# Tested.
main();