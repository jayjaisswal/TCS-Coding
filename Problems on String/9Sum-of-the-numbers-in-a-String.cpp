#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a string : ";
    string str;
    cin>>str;
    int sum = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            // convert a character digit into its actual integer value.
            // Character	ASCII Value
            //     '0'	        48
            //     '1'	        49
            //     '2'	        50
            sum+=(str[i]-'0');  
        }
    }
    cout<<"Sum is : "<<sum<<endl;
}

