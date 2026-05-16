#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int previous = i - 1;

        // Shift elements greater than key
        while(previous >= 0 && arr[previous] > key) {
            arr[previous + 1] = arr[previous];  // peechai walai ko aagai wale jajha pa rakho
            previous--;
        }

        arr[previous + 1] = key;  // bez uper previous -- huwa ha in while loop
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

