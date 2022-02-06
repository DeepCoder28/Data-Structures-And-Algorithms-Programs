#include<iostream>
using namespace std;

int main(){

    int n;
    int a[100];
    cout<<"Enter size: ";
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i = 0;
    int temp =0;
    while(i<n/2){
        temp = a[i];
        a[i] = a[n-i-]
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}