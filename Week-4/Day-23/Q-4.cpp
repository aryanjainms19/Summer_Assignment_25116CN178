#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    // Q- Write a program to Find max occuring character.
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    unordered_map<char, int> freq;

    // First pass: count frequency of each character
    for (char c : text) {
        c = tolower(c);
        freq[c]++;
    }

    // Second pass: find the first character with count 1
    char result = '\0';
    int maxi = 0;
    for (char c : text) {
        c = tolower(c);
        if(maxi < freq[c]){
            maxi = freq[c];
            result = c;
        } 
    }

    if (result != '\0') {
        cout << "First non-repeating character: '" << result << "'" << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}