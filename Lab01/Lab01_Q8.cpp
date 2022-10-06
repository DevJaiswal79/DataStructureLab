// WAP to find a word in given statement.
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str[] = {"the", "sun", "rise", "from", "east"};
    string s;
    int n = sizeof(str) / sizeof(string);
    cin >> s;
    int ans = -1;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == s)
        {
            ans = i;
            break;
        }
    }
    if (ans == -1)
    {
        cout << "word not in a given statment \n";
    }
    else
    {
        cout << "word found at index: " << ans << endl;
    }
}
