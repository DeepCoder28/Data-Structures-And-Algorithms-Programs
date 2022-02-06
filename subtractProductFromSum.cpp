#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int product = 1;
    int sum = 0;
    while(n){
        int digit = n%10;
        sum = sum+digit;
        product = product * digit;
        n = n/10;
    }

    cout<<(product-sum);

    return 0;
}