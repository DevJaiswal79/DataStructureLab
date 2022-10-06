// Write a C program to print the frequency of the digits in given alphanumeric string.
// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1000];
    scanf("%s", a);
    char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int count[10];
    for (int i = 0; i < 10; ++i)
    {
        int temp = arr[i];
        int c = 0;
        for (int j = 0; a[j] != '\0'; ++j)
        {
            if (a[j] == temp)
            {
                ++c;
            }
        }
        count[i] = c;
    }
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", count[i]);
    }
    return 0;
}
