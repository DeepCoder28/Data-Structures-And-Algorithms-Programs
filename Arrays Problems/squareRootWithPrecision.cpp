#include<iostream>
using namespace std;

long long int sqrtOfNumber(int n){

    long long int start = 1;
    long long int end = n;
    int ans = 0;

    long long int mid = start + (end - start)/2;

    while(start <= end){

        long long int square = mid * mid;
        
        if(square == n){
            return ans;
        } else if(square > n) {
            end = mid - 1;
        } else if(square < n){
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }

    return ans;

}

double sqrtWithMorePrecision(int n, int precision, int ans1){

    double factor = 1;

    double ans2 = ans1;

    for(int j=0;j<precision;j++){

        factor = factor/10;
        for(double i = ans2; i*i < n; i = i+factor){
            ans2 = i;
        }

    }

    return ans2;

}

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans1 = sqrtOfNumber(n);

    double ans2 = sqrtWithMorePrecision(n, 4, ans1);

    cout<<"Square root of a number is "<<ans1<<endl;

    cout<<"Square root of a number with more precision is "<<ans2<<endl;

    return 0;
}