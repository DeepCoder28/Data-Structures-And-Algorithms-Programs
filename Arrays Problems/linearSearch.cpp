#include<iostream>
using namespace std;

bool linearSearch(int myArr[], int size, int key){

    for(int i=0;i<size;i++){
        if(myArr[i]==key){
            return 1;
        }
    }

    return 0;

}

int main(){

    int myArr[5] = {1,2,5,23,61};

    int key;
    cout<<"Enter key to search: ";
    cin>>key;

    if(linearSearch(myArr, 5, key)){
        cout<<"Key is present";
    } else{ 
        cout<<"Key is absent";
    }

    return 0;
}