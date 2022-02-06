#include<iostream>
using namespace std;

int findPeakElement(int arr[], int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){

        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        } else {
            end = mid;
        }

        mid = start + (end - start)/2;

    }

    return start;

}

int main(){

    int arr[7] = {5,23,65,34,12,1,0};

    int index = findPeakElement(arr, 7);

    cout<<"Peak element in this mountain array is at index: "<< index << endl;

    return 0;
}