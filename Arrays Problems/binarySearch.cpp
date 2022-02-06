#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        if(key == arr[mid]){
            return mid;
        } else if(key > arr[mid]){
            start = mid + 1;
        } else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start)/2;

    }

    return -1;

}

int main(){

    int arr[5] = {12,23,34,45,56};
    
    int index = binarySearch(arr, 5, 45);

    cout<<"Key is present at index: "<<index;

    return 0;
}