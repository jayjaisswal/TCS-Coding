#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

     for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int i = 0, j = size - 1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    
    

    
    
}