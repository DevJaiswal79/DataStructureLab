// Write a time efficient program for finding the element which appears maximum number of times in the array.
// Sample input: 2, 4, 5, 6, 8, 9, 10, 13, 2, 3, 2
// Sample output: 2 [as 2 is coming three times]

#include <iostream>
#include <map>

using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 6, 8, 9, 10, 13, 2, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    map<int, int> m;

    for (int i = 0; i < n; ++i)
    {
        m[arr[i]]++;
    }

    int maxi = -1;
    for (auto i : m)
    {
        if (maxi < i.second)
        {

            maxi = i.first;
        }
    }
    cout << maxi << endl;

    return 0;
}
