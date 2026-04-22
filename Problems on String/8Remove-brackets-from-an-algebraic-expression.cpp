#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the algebraic expression: ";
    cin>>s;
    int n=s.size();
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]==')'|| s[i]=='{' || s[i]=='}' || s[i]=='[' || s[i]==']')
            continue;
        else
            ans+=s[i];
    }
    cout<<ans<<endl;
}