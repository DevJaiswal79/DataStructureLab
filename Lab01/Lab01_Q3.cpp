// WAP to check whether the number is prime or not.
#include <iostream>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (prime(num))
    {
        cout << "yes\n";
    }
    else
        cout << "no\n";
}
