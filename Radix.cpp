<<<<<<< HEAD
#include <iostream>
using namespace std;

// Counting Sort for a specific digit (used in Radix Sort)
void countingSort(int arr[], int n, int exp) {
    int output[n];       // Step 1: Output array to store sorted numbers
    int count[10] = {0}; // Step 2: Count array for digits 0-9

    // Step 3: Count occurrences of each digit at current place (exp)
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;  
        // Example: exp = 10 (tens place), number = 75 → (75/10)%10 = 7

    // Step 4: Convert count array to cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
        // count[i] now stores **position in output array** for this digit

    // Step 5: Build output array (iterate right-to-left to maintain stability)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;      // Extract digit at current place
        output[count[digit] - 1] = arr[i];    // Place element at correct position
        count[digit]--;                        // Decrease count for next occurrence
    }

    // Step 6: Copy sorted numbers back to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main Radix Sort function
void radixSort(int arr[], int n) {
    int max = arr[0];

    // Step 1: Find the maximum element to know number of digits
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    // Step 2: Do counting sort for each digit (LSD → MSD)
    // exp = 1 → units, 10 → tens, 100 → hundreds, ...
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

// Driver code
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Sort the array using Radix Sort
    radixSort(arr, n);

    // Step 2: Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
=======
#include <iostream>
using namespace std;

// Counting Sort for a specific digit (used in Radix Sort)
void countingSort(int arr[], int n, int exp) {
    int output[n];       // Step 1: Output array to store sorted numbers
    int count[10] = {0}; // Step 2: Count array for digits 0-9

    // Step 3: Count occurrences of each digit at current place (exp)
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;  
        // Example: exp = 10 (tens place), number = 75 → (75/10)%10 = 7

    // Step 4: Convert count array to cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
        // count[i] now stores **position in output array** for this digit

    // Step 5: Build output array (iterate right-to-left to maintain stability)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;      // Extract digit at current place
        output[count[digit] - 1] = arr[i];    // Place element at correct position
        count[digit]--;                        // Decrease count for next occurrence
    }

    // Step 6: Copy sorted numbers back to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main Radix Sort function
void radixSort(int arr[], int n) {
    int max = arr[0];

    // Step 1: Find the maximum element to know number of digits
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    // Step 2: Do counting sort for each digit (LSD → MSD)
    // exp = 1 → units, 10 → tens, 100 → hundreds, ...
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

// Driver code
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Sort the array using Radix Sort
    radixSort(arr, n);

    // Step 2: Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
>>>>>>> 9d528d184686de2cbc152689622871a984fe68ef
}