#include<iostream>
using namespace std;

bool isPrime(int num){
    for(int i = 2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int num;
    cin>>num;

    int arr[20];
    fill_n(arr,20,2);
    for(int i=0;i<20;i++){
        cout<<arr[i]<<`" ";
    }

    if(isPrime(num)){
        cout<<"PRIME";
    } else {
        cout<<"NOT PRIME";
    }

    return 0;
}