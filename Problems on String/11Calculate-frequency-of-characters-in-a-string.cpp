#include <iostream>
#include <vector>
#include <string>

using namespace std;
void freq(string str)
{
    vector<int> count(256,0);
    for(int i=0;i<str.length();i++){
        count[str[i]]++; // means count[str[i]] = count[str[i]] + 1; and  count[str[i]] if str[i] = 'a' then count[97]
    }
    for(int i=0;i<256;i++){
        if(count[i]>0){
            cout<<char(i)<<" : "<<count[i]<<endl;
        }
    }

}
int main() {
    string str= "hello world";
    freq(str);
    
    
    
}

// If str[i] is 'h':

// The computer sees 'h', which has an ASCII value of 104.

// It looks at the vector count at index 104.

// The ++ adds 1 to whatever number was already stored there.