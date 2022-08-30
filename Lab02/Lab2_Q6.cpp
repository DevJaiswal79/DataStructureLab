//WAP to convert a decimal into binary number.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num;
    cin>>num;
    vector<int> ans;
    int rem = 0;
    while(num!=1){
        rem = num%2;
        ans.push_back(rem);
        num = num/2;
    }
    ans.push_back(1);
    for(int i = ans.size()-1 ; i>=0 ; --i){
        cout<<ans[i]<<" ";
    }
}
