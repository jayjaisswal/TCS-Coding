#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

int main()
{

    int arr[] = {5, 3, 7, 8, -9, 3, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    int firstMin = INT_MAX;
    int secondMin = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != firstMax)
        {
            secondMax = arr[i];
        }

        if (arr[i] < firstMin)
        {
            secondMin = firstMin;

            firstMin = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != firstMin)
        {
            secondMin = arr[i];
        }
    }
    cout << "First largest  : " << firstMax << endl;
    cout << "Second largest  : " << secondMax << endl;

    cout << "First smallest  : " << firstMin << endl;
    cout << "Second smallest  : " << secondMin << endl;
}