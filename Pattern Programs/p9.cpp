// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int count = 1;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<count;
//             count--;
//             j = j+1;
//         }
//         cout<<endl;
//         i = i+1;
//         count = i;
//     }

//     return 0;
// }

                        // OR

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    // int count = 1;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i-j+1;
            // count--;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        // count = i;
    }

    return 0;
}