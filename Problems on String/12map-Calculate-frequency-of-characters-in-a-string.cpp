#include<iostream>
#include<map>   
using namespace std;  
void freq(string str){
    map<char, int> m;
    for(int i=0; i<str.length(); i++){
        m[str[i]]++;

}
for(auto i: m){
    cout<<i.first<<" "<<i.second<<endl;
 }
}
      
int main(){
    string str = "hello world"; 
    freq(str);

}