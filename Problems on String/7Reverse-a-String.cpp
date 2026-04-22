#include <iostream>

using namespace std;

int main() {
    cout << "Enter String: ";
    string str;
    getline(cin, str);
    string result = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        result += str[i];
    }

    cout << "Reversed String: " << result << endl;
    return 0;
    
    
    
}