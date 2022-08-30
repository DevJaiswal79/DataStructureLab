//WAP to sort the array and ask the choice from user for ascending/descending.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {45,78,97,15,36,49,78,98,105,2,3,54,72};
    cout<<"enter 1 if you want sort in ascending order or 0 for descending order: ";
    int key;
    cin>>key;
    int n = sizeof(arr)/4;
    
        for(int i=0 ; i<n-1 ; ++i){
        int flag = 0;
        for(int j=1 ; j<n-i ; ++j){
            
            if(arr[j-1] > arr[j] && key == 1){
                swap(arr[j-1],arr[j]);
                flag = 1;
            }
            if(arr[j-1] < arr[j] && key == 0){
                swap(arr[j-1],arr[j]);
                flag = 1;
            }
        }
        if(flag==0){
            break;
        }
    }
    for(int i = 0; i<n ; ++i){
        cout<<arr[i]<<" ";
    }
}
