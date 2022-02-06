#include<iostream>
using namespace std;

int countOccurances(int arr[], int size){

    int count;
    int countArr[1000],k=0;
    int visited[size];
    for(int i=0;i<size;i++){
        count = 0;

        if(visited[i]==1){
            continue;
        }

        for(int j=i;j<size;j++){
            if(arr[i] == arr[j]){
                count++;

                visited[j] = 1;
            }
        }

        countArr[k] = count;
        k++;
    }

    for(int i=0;i<k+1;i++){
        int item = countArr[i];
        count = 0;
        for(int j=0;j<k+1;j++){
            if(item == countArr[j]){
                count++;
            }
        }
        
        if(count == 1){
            return 1;
        } else {
            return 0;
        }

    }

}

int main(){

    int myArr[5] = {1,1,3,4,3};
    bool ans = countOccurances(myArr,8);
    cout<<ans;

    return 0;
}