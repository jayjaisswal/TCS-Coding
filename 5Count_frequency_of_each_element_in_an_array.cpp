#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int arr[] = {2, 4, 2, 5, 7, 8, 5, 4, 2, 4, 2, 2, 6, 8, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    // brute force
    for(int i =0;i<size;i++){
        int count = 0;
        for(int j =i+1;j<size;j++){
            if(arr[i]==arr[j]){
                ++count;
            }
        }
        cout<<arr[i]<<" : "<<count<<endl;

    }
}