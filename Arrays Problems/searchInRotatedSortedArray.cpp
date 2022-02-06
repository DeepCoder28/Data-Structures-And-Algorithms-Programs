#include<iostream>
using namespace std;

int pivotInArray(int arr[], int size){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start < end){

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else {
            end = mid;
        }

        mid = start + (end - start)/2;

    }

    return start;

}

int binarySearch(int arr[], int key, int size, int start, int end){

    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        } else if(key > arr[mid]){
            start = mid + 1;
        } else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start);

    }

}

int searchInRotatedSortedArray(int arr[], int size, int key){

    int pivot = pivotInArray(arr, size);
    
    if(key >= arr[pivot] && key <=arr[size-1]){
        return binarySearch(arr,key, size, pivot, size-1);
    } else {
        return binarySearch(arr, key, size, 0, pivot-1);
    }

}

int main(){

    int arr[7] = {8,9,1,2,3,4,5};

    int key = 1;

    int index = searchInRotatedSortedArray(arr, 7, key);

    cout<<"Key present at index: " <<index;

    return 0;
}