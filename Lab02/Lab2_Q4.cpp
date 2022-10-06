// WAP to multiply two numbers by using addition.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two num to multiply: ";
    cin >> a >> b;
    int mi, ma;
    if (a > b)
    {
        mi = b;
        ma = a;
    }
    else
    {
        mi = a;
        ma = b;
    }
    long int ans = 0;
    for (int i = 1; i <= mi; ++i)
    {
        ans = ans + ma;
    }
    cout << ans << endl;
}
