#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 0;
    int answer = 0;
    while(n){
        int digit = n%10;
        if(digit==1){
            answer = digit*pow(2,i) + answer;
        }
        i++;
        n = n/10;
    }

    cout<<answer;

    return 0;
}