// WAP to implement the bubble sort and show the output of each pass.

#include <iostream>
#include "randArray.h"
using namespace std;

void bubbleSort(int *arr, int n)
{
    int flag = 1;
    for (int i = 0; i < n - i; ++i)
    {
        flag = 1;
        for (int j = 1; j < n - i; ++j)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j - 1], arr[j]);
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
        cout << "Pass " << (i + 1) << ": ";
        printArr(arr, n);
        cout << endl;
    }
    cout << "After sorting : ";
    printArr(arr, n);
}
int main()
{
    int n;
    cin >> n;
    int *arr = rdm(n);
    cout << "array before sorted: ";
    printArr(arr, n);
    cout << endl;
    bubbleSort(arr, n);
}
