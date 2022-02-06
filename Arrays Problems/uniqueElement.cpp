#include<iostream>
using namespace std;

int getUniqueElement(int arr[], int size){

    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }

    return ans;

}

//OR

// int getUniqueElement(int arr[], int size){

//     int count;
//     for(int i=0;i<size;i++){
//         count = 0;
//         for(int j=0;j<size;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             return arr[i];
//         }
//     }
//     return 0;

// }

int main(){

    int myArr[7] = {2,2,4,1,6,1,6};

   int uniItem = getUniqueElement(myArr, 7);
   cout<<"Unique item present in given array is: "<<uniItem;

    return 0;
}