// MERGE SORT
/*
    =>A single element is always sorted
    =>So if we can break an array until only single elements remain,
      we can then combine (merge) them in the correct order
*/
/*  
    =>Divide the array into two halves ie merge sort function
    =>Sort each half (recursively) is sort function
    =>Merge the two sorted halves into one sorted array
*/

/*  
    MERGE FUNCTION
    => This function merges two sorted parts of the array.

    arr[] : original array
    low   : starting index
    mid   : middle index
    high  : ending index
*/

#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {

    // Number of elements in left part
    int n1 = mid - low + 1;

    // Number of elements in right part
    int n2 = high - mid;

    // Create temporary arrays
    int left[n1], right[n2];

    // Copy elements to left array
    for (int i = 0; i < n1; i++) {
        left[i] = arr[low + i];
    }

    // Copy elements to right array
    for (int j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }

    // Index variables
    int i = 0;      // left array index
    int j = 0;      // right array index
    int k = low;    // original array index

    // Compare and merge
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left array
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining elements of right array
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

/*  MERGE SORT FUNCTION  (the divider)
    => This function divides the array 
       and calls merge()
*/
void mergeSort(int arr[], int low, int high) {

    // If there is more than one element
    if (low < high) {

        // Find middle index
        int mid = (low + high) / 2;

        
        mergeSort(arr, low, mid);      // Sort left half
        mergeSort(arr, mid + 1, high); // Sort right half
        merge(arr, low, mid, high);    // Merge both halves
    }
}
int main(){

    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call merge sort
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted array: "; 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
