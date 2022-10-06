#include <iostream>
using namespace std;
// WAP to implement the linear search. Use function concept, if element is found then return index number of element otherwise return -1;
int linearSearch(int ar[], int n, int key)
{
    for (int i = 0; i < n; ++i)
    {
        if (ar[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int ar[] = {46, 12, 13, 45, 15, 16, 78, 19, 5, 6, 10, 2, 3, 4};
    int n = sizeof(ar) / sizeof(int);
    int key;
    cout << "Enter a element to search:  ";
    cin >> key;
    cout << linearSearch(ar, n, key);
}
