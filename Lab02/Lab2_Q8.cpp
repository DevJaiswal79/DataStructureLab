//WAP to find out nCr factor of given numbers.
// Note: nCr = n! /((n-r)!r!)
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    else return (n*fact(n-1));
}
int main(){
    int num,r;
    cin>>num>>r;

    long long int ans = fact(num)/(fact(num-r)*fact(r));
    cout<<"nCr : "<<ans<<endl;
}
