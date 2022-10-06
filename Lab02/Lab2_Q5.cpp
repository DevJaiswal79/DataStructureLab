// WAP to convert a binary number into decimal
#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    long long int ans = 0;
    int count = str.size() - 1;
    for (int i = 0; i < str.size(); ++i)
    {
        ans = ans + ((str[count]) - 48) * pow(2, i);
        --count;
    }
    cout << ans << endl;
}
