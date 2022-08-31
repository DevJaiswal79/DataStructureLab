// WAP to insert new element at given index number in the array.
#include<iostream>
using namespace std;

int main(){
    int ar[11] = {45,49,12,13,40,2,5,6,8,15};
    int index ;
    int n = sizeof(ar)/4 - 1;
    cin>>index;
    for(int i = n ; i>=index ; --i){
        ar[i+1] = ar[i];
    }
    int temp;
    cin>>temp;
    ar[index] = temp;
    for(int i = 0 ; i <= n ; ++i){
        cout<<ar[i]<<"  ";
    }
}
