// WAP to implement the quick sort and show the output of each pass.

#include <iostream>
#include "randArray.h"
using namespace std;

int partition(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);
    printArr(arr, p - 1);
    cout << endl;
    // Sorting the right part
    quickSort(arr, p + 1, end);
    for (int i = p; i < end; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = rdm(n);
    cout << "Before sorting: ";
    printArr(arr, n);
    cout << endl;

    quickSort(arr, 0, n - 1);
    cout << "After sorting : ";
    printArr(arr, n);
}