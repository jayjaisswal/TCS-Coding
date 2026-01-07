#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5, 3, 7, 8, -9, 3, 1, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = INT_MAX;
    for(int i =0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"min : "<<min<<endl;
}