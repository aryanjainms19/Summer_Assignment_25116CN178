#include <iostream>
#include <string>
using namespace std;

int main(){
    string sentence;
    cout << "Enter a sentence: " << endl;
    getline(cin, sentence);

    int count = 0;

    for(int i = 0; i < sentence.length(); i++){
        // A word starts at index 0 (if it's not a space)
        // OR right after a space, when the current char is not a space
        if(sentence[i] != ' ' && (i == 0 || sentence[i-1] == ' ')){
            count++;
        }
    }

    cout << "Number of words: " << count << endl;

    return 0;
}