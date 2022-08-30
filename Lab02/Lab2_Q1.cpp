//1. WAP to generate a Fibonacci series up to n terms.
// Input Input number of terms: 10 
//Output Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

#include<iostream>
using namespace std;
void fibonacciSeries(int x){
    int a = 0;
    int b = 1;
    int c ;
    cout<<a<<" "<<b<<" ";
    while(x--){
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<endl;
    fibonacciSeries(n-2);
}
