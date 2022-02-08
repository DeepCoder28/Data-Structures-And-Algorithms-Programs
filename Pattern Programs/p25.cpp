#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int count = 1;
    int i = 1;
    while(i<=n){
        //for spaces
        int space = 1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }

        //for no.s
        int j = 1;
        while(j<=i){
            cout<<count;
            count++;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}