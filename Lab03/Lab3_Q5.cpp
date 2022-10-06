// Mary is a kindergarten teacher. She has given a task to the children after teaching them a list of words. The task is to find the unknown words (other than the words they already know) from the given text. Write a function which accepts the text and the known list of words and prints a set of unknown words found. If there are no unknown words found then prints “Successful”. [Hint use find_word() function of Lab 1]
#include <iostream>
using namespace std;

int main()
{
    string arr[] = {"doctor", "sun", "rise", "in", "east"};
    int n = sizeof(arr) / sizeof(string);
    int m;
    cin >> m;
    string test[m];
    string ans[30];
    int count = 0;
    for (int i = 0; i < m; ++i)
    {
        cin >> test[i];
    }
    for (int i = 0; i < m; ++i)
    {
        string temp = test[i];
        int flag = 1;
        for (int j = 0; j < n; ++j)
        {
            if (arr[j] == temp)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            ans[count++] = temp;
        }
    }
    for (int i = 0; i < count; ++i)
    {
        cout << ans[i] << "  ";
    }
}
