//WAP to search an element in array.

#include<iostream>
using namespace std;


int main(){

    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans = -1;
    for(int i=0;i<size;++i){
        if(arr[i] == target){
            ans = i;
            break;
        }
    }
    cout<<"number at index:  "<<ans<<endl;
}
