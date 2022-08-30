//WAP to create a dynamic array of user desired size and search an element in that array.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i<n ;++i){
        cin>>ar[i];
    }
    cout<<"enter an element to search\n";
    int key;
    cin>>key;
    int ans = -1;
    for(int i = 0 ;i<n ;++i){
        if(ar[i] == key){
            ans = i;
            break;
        }
    }
    if(ans == -1){
        cout<<"number not found \n";
    }
    else{
        cout<<"number found at index: "<<ans<<endl;
    }
}
