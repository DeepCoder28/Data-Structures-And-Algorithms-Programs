#include<iostream>
using namespace std;


int main(){

    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    char op;
    cout<<"Enter operation you want to perform: ";
    cin>>op;

    switch(op){
        case '*': cout<<a*b;
                  break;
        case '+': cout<<a+b;
                  break;
        case '-': cout<<a-b;
                  break;
        case '%': cout<<a%b;
                  break;
        case '/': cout<<a/b;
                  break;
        default: cout<<"Please enter valid operation";
                  break;
    }

    return 0;
}