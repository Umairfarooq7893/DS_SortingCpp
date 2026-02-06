/*
    Author  : Umair Farooq
    Program : Quick Sort
*/
#include <iostream>
using namespace std;
/*
    => Pick a pivot element
    => Put smaller elements on left, larger on right
    => Recursively apply the same logic to left & right parts
*/

/*
    We need two functions

    1. Partition Function
    - Selects a pivot element (usually first or last element).
    - Rearranges the array such that:
        * All elements smaller than or equal to pivot are placed on the left.
        * All elements greater than pivot are placed on the right.
    - Places the pivot at its correct sorted position.
    - Returns the index of the pivot.

    2. Quick Sort Function
    - Calls the partition function to divide the array into two subarrays.
    - Recursively sorts the left subarray (elements before pivot).
    - Recursively sorts the right subarray (elements after pivot).
    - Continues until subarrays contain one or zero elements.
*/

// Partion Function
int partition(int arr[], int low, int high) {

    int pivot = arr[high];   // last element as pivot
    int i = low - 1;         // index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot at correct position
    // i always tracks the last smaller element — pivot always goes to i + 1.
    swap(arr[i + 1], arr[high]);

    return i + 1;  // pivot index
}

// QuickSort Function
void quickSort(int arr[], int low, int high) {
    if (low < high) {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);   // left subarray
        quickSort(arr, pi + 1, high);  // right subarray
    }
}

int main() {
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

