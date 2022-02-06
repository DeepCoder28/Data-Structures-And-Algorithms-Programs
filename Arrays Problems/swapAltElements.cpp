#include<iostream>
using namespace std;

void swapAltElements(int myArr[], int size){

    for(int i=0;i<size-1;i+=2){
        swap(myArr[i], myArr[i+1]);
    }

}

//OR

// void swapAltElements(int arr[], int size){
    
//     for(int i=0;i<size;i+=2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }

// }

void printArray(int myArr[], int size){

    for(int i=0;i<size;i++){
        cout<<myArr[i]<<" ";
    }
    cout<<endl;

}

int main(){

    int myArr[5] = {1,2,4,5,6};
    int myArr2[6] = {1,2,4,5,6,7};   

    swapAltElements(myArr, 5);
    swapAltElements(myArr2, 6);
    printArray(myArr, 5);
    printArray(myArr2, 6);

    return 0;
}