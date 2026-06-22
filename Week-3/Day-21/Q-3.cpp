#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Q-Write a program to Count vowels and consonants.
    string input;
    cout << "Enter the word" << endl;
    cin >> input;

    // creating vector of that input
    vector <char> word(input.begin(),input.end());
    int vowels = 0, consonants = 0;
    // converting vector to lowercase for further check
    
    for (int i = 0; i < word.size(); i++) {
        word[i] = tolower(word[i]);
    }

    while(!word.empty()){
        char lastchar = word.back();
        if(lastchar == 'a' || lastchar == 'e' || lastchar == 'i' || lastchar == 'o' || lastchar == 'u') vowels++;
        else consonants++;
        word.pop_back();
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}