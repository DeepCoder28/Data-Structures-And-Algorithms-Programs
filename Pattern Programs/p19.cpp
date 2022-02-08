#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int i = 1;
    while(i<=n){
        //for spaces
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        //for no.s
        int count1 = 1;
        while(count1<=i){
            cout<<count1;
            count1++;
        }
        int j = 1;
        int count2 = i-1;
        while(j<=i-1){
            cout<<count2;
            count2--;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}