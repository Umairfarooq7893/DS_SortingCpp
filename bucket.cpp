<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(int arr[], int n) {
    // 1. Find minimum and maximum values
    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // 2. Create n empty buckets
    vector<int> buckets[n];

    // 3. Put elements into buckets
    for (int i = 0; i < n; i++) {
        int index = (long long)(arr[i] - minVal) * n / (maxVal - minVal + 1);
        buckets[index].push_back(arr[i]);
    }

    // 4. Sort each bucket
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // 5. Concatenate all buckets
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int val : buckets[i]) {
            arr[k++] = val;
        }
    }
}

int main() {
    int arr[] = {10, 25, 15, 30, 20, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}







=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(int arr[], int n) {
    // 1. Find minimum and maximum values
    int minVal = arr[0], maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // 2. Create n empty buckets
    vector<int> buckets[n];

    // 3. Put elements into buckets
    for (int i = 0; i < n; i++) {
        int index = (long long)(arr[i] - minVal) * n / (maxVal - minVal + 1);
        buckets[index].push_back(arr[i]);
    }

    // 4. Sort each bucket
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // 5. Concatenate all buckets
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int val : buckets[i]) {
            arr[k++] = val;
        }
    }
}

int main() {
    int arr[] = {10, 25, 15, 30, 20, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

>>>>>>> 9d528d184686de2cbc152689622871a984fe68ef
