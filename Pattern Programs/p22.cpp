#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        //for spaces
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }
        //for no.s
        int j = n-i+1;
        while(j){
            cout<<i;
            j--;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}