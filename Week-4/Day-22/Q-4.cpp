#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    // Q-Write a program to Remove spaces from string.
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    string result = "";
    for (char c : text) {
        if (c != ' ') {
            result += c;
        }
    }

    cout << "After removing spaces: " << result << endl;

    return 0;
}