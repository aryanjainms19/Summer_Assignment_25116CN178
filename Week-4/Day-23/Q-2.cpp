#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    // Q- Write a program to Find first repeating character.
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    unordered_map<char, int> freq;

    // First pass: count frequency of each character
    for (char c : text) {
        c = tolower(c);
        freq[c]++;
    }

    // Second pass: find the first character with count > 1
    char result = '\0';
    for (char c : text) {
        if (freq[c] > 1) {
            result = c;
            break;
        }
    }

    if (result != '\0') {
        cout << "First repeating character: '" << result << "'" << endl;
    } else {
        cout << "No repeating character found." << endl;
    }
    return 0;
}