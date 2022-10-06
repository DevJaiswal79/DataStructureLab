// Write a program to check whether given Matrix is sparse or not. We say a matrix as sparse when more than 50% of total elements are zero. If matrix is sparse then represent it in triplet form with the help of array data structure. Also print the number of bytes that are saved or wasted when you represent input matrix in the triplet form.

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    int size = r * c;
    int cz = 0;
    int triplet[1000];
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] != 0)
            {
                triplet[cz] = i;
                ++cz;
                triplet[cz] = j;
                ++cz;
                triplet[cz] = arr[i][j];
                ++cz;
            }
        }
    }
    int waste = 3 * ((cz / 3) + 1);
    if (cz / 3 < size / 2)
    {
        cout << "It is a sparse matrix \n";
        cout << r << "\t" << c << "\t" << cz / 3 << endl;
        int tri = 0;
        for (int i = 0; i < cz; ++i)
        {
            cout << triplet[i] << "\t";
            ++tri;
            if (tri % 3 == 0)
            {
                cout << endl;
            }
        }
        cout << "The saved memory: " << (size * 4) - (waste * 4) << endl;
    }
    else
    {
        cout << "it is not a sparse matrix " << waste << endl;
    }
    return 0;
}
