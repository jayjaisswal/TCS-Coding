#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // anagram using array
    string str1 = "listen";
    string str2 = "silent"; 

    if (str1.length() != str2.length()) {
        cout << "Not Anagrams" << endl;
        return 0;
    }

    // without vector
    int count[256] = {0}; // assuming ASCII character set
    for (char c : str1) {
        count[c]++;

    }
    // or
    // for(int i=0; i<str1.length(); i++){
    //     count[str1[i]]++;
    // }
    for (char c : str2) {
        count[c]--;
    }
    bool isAnagram = true;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = false;
            break;
        }}

        cout<<(isAnagram ? "Anagrams" : "Not Anagrams") << endl;
    
    
    
}