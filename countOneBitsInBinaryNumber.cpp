#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int count = 0;
    while(n){
        int bit = n&1;
        if(bit == 1){
            count++;
        }
        n = n>>1;
    }

    cout<<count;

    return 0;
}