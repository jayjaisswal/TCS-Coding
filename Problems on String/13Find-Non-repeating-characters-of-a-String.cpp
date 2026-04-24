#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string str = "hello world";
    vector<int> count(256, 0);

    // Count the frequency of each character
    for (char c : str) {
        count[c]++;
    }

    // Print non-repeating characters
    cout << "Non-repeating characters in the string: ";
    for (char c : str) {
        if (count[c] == 1) {
            cout << c << " ";
        }
    }
    cout << endl;

    return 0;
    
    
    
}