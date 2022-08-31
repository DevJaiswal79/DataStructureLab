// WAP for checking whether there are any duplicated elements in the array or not? 5. Mary
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {5,4,6,8,9,2,3,1,10,11,14,15,12,13,12};
    int n = sizeof(arr)/4;
    int ans = -1;
    sort(arr ,arr+n);
    for(int i = 1 ; i<n ; ++i){
        if(arr[i-1] == arr[i]){
            ans = arr[i];
            break;
        }
    }
    cout<<ans<<endl;
}
