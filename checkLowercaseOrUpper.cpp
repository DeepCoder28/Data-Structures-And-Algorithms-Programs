#include<iostream>
using namespace std;

int main(){

    int value;
    value = cin.get();

    if(value>=65 && value<=90){
        cout<<"uppercase";
    }
    else if(value>=91 && value<=122){
        cout<<"lowercase";
    }
    else if(value>=48 && value<=57){
        cout<<"numeric";
    }

    return 0;
}