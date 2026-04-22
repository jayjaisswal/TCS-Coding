#include<iostream>
using namespace std;
int main(){
    cout<<"Enter String: ";
    string str;
    getline(cin, str);  
    string result="";
    for(int i=0; i<str.length(); i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U'){
            result+=str[i];
        }
    }
    
    cout<<"String after removing vowels: "<<result<<endl;  
    return 0;   

}