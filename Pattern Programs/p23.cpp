#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        //for spaces
        int space = 1;
        while(space<=n-i){
            cout<<" ";
            space = space + 1;
        }
        //for no.s
        int j = 1;
        while(j<=i){
            cout<<i;
            j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}