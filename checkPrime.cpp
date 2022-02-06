#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a no. ";
    cin>>n;

    int i = 2;
    while(i<n){
        if(n%i == 0){
            cout<<"NOT PRIME";
            break;
        }
        i = i+1;
    }

    return 0;
}