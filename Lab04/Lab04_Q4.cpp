// Write a C/C++ program to left rotate an array of integers by d times.
//  https://www.hackerrank.com/challenges/array-left-rotation/problem

#include <iostream>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<int> rotateLeft(int d, vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n);
    int index;
    for (int i = 0; i < arr.size(); ++i)
    {
        index = (i - d + n) % n;
        ans[index] = arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int d = 4;
    vector<int> a = rotateLeft(4, arr);
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
}
