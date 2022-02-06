#include<iostream>
using namespace std;

int maxInArray(int myArr[], int size){
    int maxValue = INT_MIN;
    for(int i=0;i<size;i++){
        if(myArr[i]>maxValue){
            maxValue = myArr[i];
        }
    }
    return maxValue;
}

int minInArray(int myArr[], int size){
    int minValue = INT_MAX;
    for(int i=0;i<size;i++){
        if(myArr[i]<minValue){
            minValue = myArr[i];
        }
    }
    return minValue;
}

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int myArr[10000];

    for(int i=0;i<n;i++){
        cin>>myArr[i];
    }

    int result1 = maxInArray(myArr,n);
    cout<<"Maximum value in array is: "<<result1;
    
    int result2 = minInArray(myArr, n);
    cout<<"Minimum value in array is: "<<result2;

    return 0;
}