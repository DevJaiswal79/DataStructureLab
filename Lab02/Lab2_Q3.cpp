//WAP to find out GCD of two numbers.

#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    else
        return gcd(b,a%b);
}

int main(){
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    int ans = 0;
    if(a > b){
        ans = gcd(a,b);
    }
    else ans = gcd(b,a);

    cout<<ans<<endl;
}
