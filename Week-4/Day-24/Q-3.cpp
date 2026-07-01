#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string findLongestWord(const string &sentence) {
    stringstream ss(sentence);
    string word, longestWord = "";

    while (ss >> word) { // ss reads each word of sentence in word till it becomes empty space
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    
    return longestWord;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = findLongestWord(sentence);
    cout << "Longest word: " << result << " (" << result.length() << " characters)" << endl;

    return 0;
}