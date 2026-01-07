#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int arr[] = {500, 300, 7, 8, -9, 3, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "max : " << max << endl;
}