#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){


    bool isSwapped = false;
    for(int i=1;i<n;i++){

        for(int j=0;j<n-i;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
            
        }

        if(isSwapped == false){
            break;
        }

    }

}

int main(){

    int arr[5] = {5,4,3,2,1};

    bubbleSort(arr, 5);

    cout<<"Sorted array is: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
}