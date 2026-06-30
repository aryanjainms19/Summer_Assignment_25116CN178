#include <iostream>
#include <string>
#include <map>
#include <cctype>
using namespace std;

int main(){
    // Q-Write a program to Character frequency
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    map<char, int> freq;
    for (char c : text) {
        if (c == ' ') continue;          // skip spaces
        c = tolower(c);                  // ignore case
        freq[c]++;
    }

    cout << "\nCharacter frequencies:\n";
    for (auto& pair : freq) {
        cout << "'" << pair.first << "': " << pair.second << endl;
    }
    return 0;
}