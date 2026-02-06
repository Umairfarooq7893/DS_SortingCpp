/*
    Author  : Umair Farooq
    Program : bubble Sort
    
*/
#include<iostream>
using namespace std;

int main(){
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){

                //then swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    cout<< "Sorted Array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}



