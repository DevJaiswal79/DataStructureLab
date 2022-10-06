// WAP to display lower triangular matrix of a given n by n size matrix entered by user.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n by n size for matrix :" << endl;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
            if (j > i)
            {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}
