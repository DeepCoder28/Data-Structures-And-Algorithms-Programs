#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter range: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        bool flag = true;
        for( int j=2;j<n;j++){
            if(i%j==0){
                flag == false;
            }
            if(flag == false){
                cout<<i<<" ";
                break;
            }
        }
    }

    return 0;
}