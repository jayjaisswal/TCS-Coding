#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // anagram means same characters but in different order

    string str1 = "listen"; 
    string str2 = "silent";


    if (str1.length() != str2.length()) {
        cout << "Not Anagrams" << endl;
        return 0;
    }

    // TC = O(n) where n is the length of the strings, SC = O(1) since we are using a fixed size count array    
    vector<int> count(256, 0);
    for (char c : str1) {
        count[c]++;
    }
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
    
    // simple way is sort
    // TC = O(n log n) due to sorting, SC = O(1) if we sort in place
    // sort(str1.begin(), str1.end());
    // sort(str2.begin(), str2.end());
    // if (str1 == str2) {
    //     cout << "Anagrams" << endl;
    // } else {
    //     cout << "Not Anagrams" << endl;
    // }


    
    
}