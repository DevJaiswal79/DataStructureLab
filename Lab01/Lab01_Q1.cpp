// WAP to find out largest element of an array.
#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    cin>>arr[0];
    int max = arr[0];
    for(int i=1 ;i<size ; ++i){
        cin>>arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
}
