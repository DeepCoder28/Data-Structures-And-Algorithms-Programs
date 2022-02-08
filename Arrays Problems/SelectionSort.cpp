#include<iostream>
using namespace std;

void sortArray(int arr[], int size){

    int minIndex = 0;

    for(int i=0;i<size-1;i++){

        minIndex = i;

        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);

    }

}

int main(){

    int arr[5] = {-10,4,303,212,1};

    sortArray(arr, 5);

    cout<<"Sorted array: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}