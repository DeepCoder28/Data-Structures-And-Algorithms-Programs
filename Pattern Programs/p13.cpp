// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int i = 1;
//     char ch = 'A';
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<ch;
//             ch++;
//             j = j+1;
//         }
//         cout<<endl;
//         i = i+1;
//         ch = 'A' + i - 1;
//     }

//     return 0;
// }

                        //OR

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        char ch = 'A' + i - 1;
        int j = 1;
        while(j<=n){
            cout<<ch;
            ch++;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}