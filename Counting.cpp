#include<iostream>
using namespace std;

void countingSort(int arr[], int n) {

    // Step 1: Assume first element is the maximum
    int max = arr[0];  
    
    // Step 2: Find the maximum element in the array
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    // Step 3: Create a count array of size max+1, initialize all to 0
    int count[max + 1] = {0};

    // Step 4: Count frequency of each element in the original array
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;  // Increase the count at index arr[i]
    }

    // Step 5: Reconstruct the sorted array from the count array
    int index = 0;
    for(int i = 0; i <= max; i++) {
        while(count[i] > 0) {
            arr[index] = i;
            index++;        // Move to next position in arr
            count[i]--;     // Decrease count since one occurrence is placed
        }
    }
}

int main() {
    int arr[] = {4,2,2,8,3,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    countingSort(arr, n); 
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}