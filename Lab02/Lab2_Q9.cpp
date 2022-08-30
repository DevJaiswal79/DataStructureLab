// WAP for finding the element which appears maximum number of times in the array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = { 4,5,7,7,4,3,3,5,6,4,7,5,7,7,9,7,5,7,7};
    int n = sizeof(arr)/sizeof(int);

    int sum = 0;
    int count = 0;
    int ans = 0;
    int max_count = 0;
    for(int i=0 ; i<n ;++i){
            int temp = arr[i];
        for(int j = 0; j<n ; ++j){
            if(arr[j] == temp){
                ++count;
            }
        }
        if(max_count < count){
            max_count = count;
            ans = temp;
        }
    }
    cout<<ans<<endl;
}
