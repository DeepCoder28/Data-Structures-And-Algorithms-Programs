#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    while(n){
        int digit = n%10;
        ans = ans*10+digit;
        n = n/10;
        i++;
    }

    cout<<ans;

    return 0;
}