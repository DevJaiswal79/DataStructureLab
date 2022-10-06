// WAP to replace a character by another character in a string. Take both the choices from the user.
#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    string str;
    getline(cin, str);
    char prev;
    char rep;
    cout << "enter a character to replace ";
    cin >> prev;
    cin >> rep;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == prev)
        {
            str[i] = rep;
            break;
        }
    }
    cout << "new string: " << str << endl;
}
