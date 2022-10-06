// WAP to find out series sum of 1^2 + 2^2 + …. + n^2

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum = sum + i * i;
    }
    cout << "Ans: " << sum << endl;
}
