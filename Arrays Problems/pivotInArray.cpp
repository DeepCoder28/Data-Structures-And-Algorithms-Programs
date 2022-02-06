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

int main(){

    int arr[6] = {11,1,4,6,8,10};

    int index = pivotInArray(arr, 6);
    // cout<<index<<endl;

    cout<<"Pivot in rotated sorted array is: "<<index<<endl;

    return 0;
}