#include<iostream>
using namespace std;

int main(){
    
    int amount;
    cout<<"Enter amount: ";
    cin>>amount;

    int hundrads = amount/100;
    amount = amount - (hundrads*100);
    int twentys = amount/20;
    amount = amount - (twentys*20);
    int ones = amount/1;
    amount = amount - (ones*1);

    int note;
    cout<<"Enter note: ";
    cin>>note;

    switch(note){
        case 100: cout<<hundrads;
                  break;
        case 20:  cout<<twentys;
                  break;
        case 1:   cout<<ones;
                  break;
        default:  cout<<"Enter valid note"; 
                  break;
    }

    return 0;
}