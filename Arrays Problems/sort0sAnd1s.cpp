#include<iostream>
using namespace std;
    
void sortArray(int arr[], int size){

    int i = 0;
    int j = size-1;

    while(i < j){

        while(arr[i] == 0){
            i++;
        }

        while(arr[j] == 1){
            j--;
        }

        if(i <= j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }

}

void printArray(int arr[], int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int myArr[4] = {1,0,1,0};

    sortArray(myArr, 4);

    printArray(myArr, 4);

    return 0;
}