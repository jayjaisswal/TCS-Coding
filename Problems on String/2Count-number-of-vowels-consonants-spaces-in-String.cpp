#include<iostream>
using namespace std;
int main(){
    cout<<"Enter String";
    string str;
    getline(cin, str);  
    int consoant=0, vowel=0, space=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowel++;
        }
        else if(str[i]==' '){
            space++;
        }
        else{
            consoant++; 
        }
    }

    cout<<"Vowels: "<<vowel<<endl;  
    cout<<"Consonants: "<<consoant<<endl;
    cout<<"Spaces: "<<space<<endl;
    return 0;
    

}
