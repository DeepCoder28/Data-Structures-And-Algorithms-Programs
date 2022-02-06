#include<iostream>
using namespace std;

int sumArray(int myArr[], int size){

    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum+myArr[i];
    }

    return sum;

}

int main(){

    int myArr[5] = {1,2,4,5,6};

    int sum = sumArray(myArr, 5);
    cout<<"Sum of array elements = "<<sum;

    return 0;
}