// WAP to implement the insertion sort and show the output of each pass.
#include <iostream>
#include "randArray.h"
using namespace std;

void insertionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int temp = arr[i + 1];
        int j = i;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            --j;
        }
        arr[j + 1] = temp;
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
    cout << "Before sorting: ";
    printArr(arr, n);
    cout << endl;
    insertionSort(arr, n);
}
