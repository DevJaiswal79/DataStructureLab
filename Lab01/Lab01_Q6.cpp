// WAP to find the reverse of given string.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int n = str.length();
    for (int i = 0; i <= n / 2; ++i)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    cout << "new string after reversing: " << str;
}
