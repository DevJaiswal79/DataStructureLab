#include <iostream>
#include <cstdlib>
static int *rdm(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = rand() % 100;
        //    std::cout<<p[i]<<"  ";
    }
    return p;
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << "  ";
    }
}