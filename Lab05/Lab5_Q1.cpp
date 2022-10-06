// Write a program to implement binary search algorithm. Assume user will enter the sorted array.
// https://www.hackerrank.com/contests/launchpad-1-winter-challenge/challenges/binary-search-basic
#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
            return mid;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int key;
    cin >> key;
    int ans = -1;
    ans = binarySearch(arr, n, key);
    cout << ans << endl;
    return 0;
}
