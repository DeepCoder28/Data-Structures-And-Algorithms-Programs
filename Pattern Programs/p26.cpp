#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        //triangle 1
        while(j<=n-i+1){
            cout<<j;
            j = j+1;
        }

        //triangle 2
        int k = 1;
        while(k<=2*i-2){
            cout<<"*";
            k = k+1;
        }

        //triangle 3
        int l = 1;
        int count = n-i+1;
        while(l<=n-i+1){
            cout<<count;
            count--;
            l = l+1;
        }

        cout<<endl;
        i = i+1;
    }

    return 0;
}