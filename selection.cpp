#include<iostream>
using namespace std;
void sort(int arr[] ,int n){
    for(int i = 0 ; i < n-1 ; i++){
        int min = i;

        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[min])
                min = j;
        }
                // swap
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;


    }

    // printing
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {22,4,55,7,8,4,3,22};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,n);

    return 0;
}