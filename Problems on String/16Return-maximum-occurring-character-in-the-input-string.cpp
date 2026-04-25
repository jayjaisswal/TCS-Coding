#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // 256 covers the entire standard and extended ASCII range
    vector<int> charCount(256, 0); 

    for (char c : str) {
        // Cast to (unsigned char) to handle values > 127 safely
        charCount[(unsigned char)c]++;
    }

    int maxFreq = 0;
    char mostFrequentChar = ' ';

    // Start from 0 to include the first possible ASCII character
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > maxFreq) {
            maxFreq = charCount[i];
            mostFrequentChar = (char)i;
        }
    }

    if (maxFreq > 0) {
        cout << "The maximum occurring character is: '" << mostFrequentChar 
             << "' with count: " << maxFreq << endl;
    } else {
        cout << "The string is empty." << endl;
    }

    return 0;
}