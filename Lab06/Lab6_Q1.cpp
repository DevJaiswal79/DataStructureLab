// WAP to implement a function Rdm(n) which returns an array of random numbers{between 0 to 99}, where n is the size of array. (Hint: use dynamic memory allocation concept)

#include <iostream>
#include <cstdlib>
using namespace std;

int *rdm(int size)
{
   int randArray[size];
   for (int i = 0; i < size; i++)
   {
      randArray[i] = rand() % 100;
      cout << randArray[i] << "  ";
   }
   return randArray;
}

void printArr(int *arr,int n){
   for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
   int size;
   cin >> size;
   int *ptr = rdm(size);
   cout << "\nElements of the array::" << endl;
   for (int i = 0; i < size; i++)
      cout << "Elements no " << i + 1 << "::" << *(ptr + i) << endl;
   return 0;
}
