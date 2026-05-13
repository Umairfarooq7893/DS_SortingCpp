#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    int minElement = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Minimum element: " << minElement;

    return 0;
}