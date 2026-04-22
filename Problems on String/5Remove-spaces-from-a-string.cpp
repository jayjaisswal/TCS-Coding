#include<iostream>
using namespace std;
int main(){
    cout<<"Enter String";
    string str;
    getline(cin, str);  
    string result="";
    for(int i=0; i<str.length(); i++){
        if(str[i]!=' '){
            result+=str[i];
        }

    }
    cout<<"String after removing spaces: "<<result<<endl;  
    return 0;
}