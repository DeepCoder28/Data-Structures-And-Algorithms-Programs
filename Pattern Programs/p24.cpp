#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int count = i;
        //for spaces
        int space = 1;
        while(space<=i-1){
            cout<<" ";
            space = space + 1;
        }
        //for no.s
        int j = 1;
        while(j<=n-i+1){
            cout<<count;
            count++;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}