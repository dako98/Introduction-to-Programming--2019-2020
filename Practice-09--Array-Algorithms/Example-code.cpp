/**
 * @file Example-code.cpp
 * @author Alexander Dimitrov
 * @brief Example code from Practice-09
 */

#include <iostream>

// Inserts an element at a position keeping the order of the array
bool insertAt(int arr[], int& size, int element, int position)
{
    if (position > size || position < 0)
        return false;

    for (int i = size; i > position; --i)
        arr[i] = arr[i - 1];

    arr[position] = element;
    ++size;

    return true;
}


// Removes an element at a position doesn't keep the order
bool removeElementAt(int arr[], int& size, int position)
{
    if (position > size || position < 0)
        return false;

    arr[position] = arr[size - 1];
    --size;

    return true;
}


// Removes an element at a position while keeping the order
bool sortedRemoveElementAt(int arr[], int& size, int position)
{
    if (position > size || position < 0)
        return false;

    for (int i = position; i < size - 1; ++i)
        arr[i] = arr[i + 1];

    --size;

    return true;
}


int binarySearchInner(int arr[], int target, int left, int right)
{
    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (arr[middle] == target) {
            return middle;
        } else if (arr[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}


/**
 * @brief Returns the index of the searched element in the given array.
 *
 * @param arr Sorted array
 * @param size Size of the given array
 * @param target Element to search for
 * @param left Left limit of search range.
 * @param right Right limit of search range
 * @return int Index of found element or -1 if not found.
 */
int binarySearch(int arr[], int size, int target)
{
    return binarySearchInner(arr, target, 0, size - 1);
}


void print (const int arr[], int size)
{
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << ' ';
}




int main()
{
    const int MAX_SIZE = 128;
    int arr[MAX_SIZE] = {1, 5, 12, 52, 168, 256, 1024, 2048, 5000, 10000};
    int size = 10;      // Number of elements in the array
    int lookFor = 52;   // Number to look for in the array
    print(arr, size);

    int foundAt = binarySearch(arr, size, lookFor);
    if (foundAt != -1) {
        std::cout << std::endl
            << "Position of " << lookFor << " in the array is " << binarySearch(arr, size, lookFor)
            << std::endl << std::endl;
    } else {
        std::cout << std::endl << lookFor << " was not found in the array" << std::endl << std::endl;
    }

    int toInsert = 42;
    int inPosition = 5;
    if (size + 1 < MAX_SIZE && insertAt(arr, size, toInsert, inPosition)) {
        std::cout << "Inserted " << toInsert << " at position " << inPosition << std::endl;
        print(arr, size);
        std::cout << std::endl << std::endl;
    } else {
        std::cout << "Couldn't insert element!" << std::endl;
    }

    if (removeElementAt(arr, size, inPosition)) {
        std::cout << "Removed element at position " << inPosition << std::endl;
        print(arr, size);
        std::cout << std::endl << std::endl;
    } else {
        std::cout << "Couldn't remove element!" << std::endl;
    }

    if (sortedRemoveElementAt(arr, size, inPosition)) {
        std::cout << "Removed element at position " << inPosition << " keeping the order" << std::endl;
        print(arr, size);
        std::cout << std::endl << std::endl;
    } else {
        std::cout << "Couldn't remove element!" << std::endl;
    }

    return 0;
}
