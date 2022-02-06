#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int size;
    cout<<"Input size of array: ";
    cin>>size;

    int a[1000];

    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    int ans = 0;
    int rev = 0;
    for(int i=0;i<size;i++){
        ans = (ans*10)+a[i];
        rev = (a[i] * pow(10,i)) + rev;
    }

    // for(int i=size-1;i>=0;i--){
    //     rev = (rev * 10) + a[i];
    // }

    cout<<ans;
    cout<<endl;
    cout<<rev;

    return 0;
}