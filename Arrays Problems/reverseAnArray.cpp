#include<iostream>
using namespace std;

void reverseArray(int myArr[], int size){

    int start = 0;
    int end = size - 1;
    int temp = 0;
    while(start<end){
        swap(myArr[start], myArr[end]);
        start++;
        end--;
    }

}

void printArray(int myArr[], int size){

    for(int i=0;i<size;i++){
        cout<<myArr[i]<<" ";
    }

}

int main(){

    int myArr[5] = {1,3,5,1,3};

    reverseArray(myArr, 5);

    printArray(myArr, 5);

    return 0;
}