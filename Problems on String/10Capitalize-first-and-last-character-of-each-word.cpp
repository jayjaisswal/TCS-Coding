#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void capitalizeFirstLast(string &str) {
    int n = str.length();

    for (int i = 0; i < n; i++) {
        // Skip spaces
        if (str[i] == ' ') continue;

        // Capitalize if it's the first char of the string or preceded by a space
        if (i == 0 || str[i - 1] == ' ') { // i==0 checked then next willnot check
            str[i] = toupper(str[i]);
        }

        // Capitalize if it's the last char of the string or followed by a space
        if (i == n - 1 || str[i + 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    string text = "hello world from gemini";
    
    capitalizeFirstLast(text);
    
    cout << "Result: " << text << endl;
    
    return 0;
}