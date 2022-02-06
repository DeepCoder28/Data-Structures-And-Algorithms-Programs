#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int ans = 0;

    int mid = start + (end - start)/2;

    while(start<=end){

        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        } else if(key < arr[mid]){
            end = mid - 1;
        } else if(key > arr[mid]){
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }

    return ans;

}

int lastOccurance(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int ans = 0;
    int mid = start + (end - start)/2;

    while(start <= end){

        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        } else if(key < arr[mid]){
            end = mid - 1;
        } else if(key > arr[mid]){
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }

    return ans;

}

int main(){

    int arr[6] = {1,2,3,4,4,5};

    int index1 = firstOccurance(arr, 6, 4);
    int index2 = lastOccurance(arr, 6, 4);

    int totalNoOfOccurance = index2 - index1 + 1;

    cout<<"First occurance of 4 is "<<index1<<endl;
    cout<<"Last occurance of 4 is "<<index2<<endl;
    cout<<"4 occured "<<totalNoOfOccurance<<" times";

    return 0;
}