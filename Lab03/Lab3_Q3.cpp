// WAP to delete an element from an array, use search algorithm to find the index number of given number; if element to be deleted is not found then print “Error: element not found”.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int index = -1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == key)
        {
            index = i;
            arr[i] = 0;
            break;
        }
    }
    for (int i = index; i < n; ++i)
    {
        swap(arr[i], arr[i + 1]);
    }

    if (index == -1)
    {
        cout << "Error: element not found ";
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            cout << arr[i] << " ";
        }
    }
}
