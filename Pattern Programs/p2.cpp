#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        //For spaces
        int j = n-i;
        while(j>0){
            cout<<" ";
            j = j-1;
        }
        //For stars
        int k = 1;
        while(k<=i){
            cout<<"*";
            k = k+1;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}