//WAP to calculate x^y where x and y are two integer numbers entered by the user. [do not use pow() function]
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    long long int ans = 1;
    for(int i = 1 ;i<=y ;++i){
        ans = ans*x;
    }
    cout<<"result: "<<ans<<endl;
}
