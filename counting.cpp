#include<iostream>
using namespace std;

int fact(int num){

    int result = 1;
    for(int i=1;i<=num;i++){
        result = result * i;
    }
    return result;

}

int nCr(int n, int r){
    int ans = fact(n)/(fact(r)*fact(n-r));

    return ans;
}

int main(){

    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r);

    return 0;
}