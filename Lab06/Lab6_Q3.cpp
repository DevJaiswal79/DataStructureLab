// WAP to implement the selection sort and show the output of each pass.
#include <iostream>
#include "randArray.h"
using namespace std;

void selectionSort(int *arr, int n)
{
    int min = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (arr[min] != arr[i])
            swap(arr[min], arr[i]);
        cout << "Pass " << (i + 1) << ":  ";
        printArr(arr, n);
        cout << endl;
    }
    cout << "After sorting \n";
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
    selectionSort(arr, n);
}
