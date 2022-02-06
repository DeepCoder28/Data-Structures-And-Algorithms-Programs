#include<iostream>
using namespace std;

int main(){

    int n; 
    cin>>n;

    int a = 0;
    int b = 1;

    cout<<a<<" "<<b<<" ";

    int sum = 0;

    for(int i=3;i<=n;i++){
        sum = a+b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }

    return 0;
}