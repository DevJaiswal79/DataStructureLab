// Write a function which accepts an array of integers along with the size of it. The numbers are arranged in the list in increasing order until a particular index and after that it is arranged in decreasing order. This function should find and return the index position at which the increasing list starts decreasing. Call this function from main function

#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid > start && arr[mid] > arr[mid - 1])
        {
            start = mid;
        }
        else if (mid < end && arr[mid] < arr[mid + 1])
        {
            end = mid - 1;
        }
        else
            return start + 1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int ans = -1;
    ans = pivot(arr, n);
    cout << ans << endl;
}
