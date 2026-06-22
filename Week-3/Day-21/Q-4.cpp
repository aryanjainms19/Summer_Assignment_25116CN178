#include <iostream>
#include <vector>

using namespace std;
int main(){
    // Q-Write a program to Convert lowercase to uppecase
    string input;
    cout << "Enter the string!" << endl;
    cin >> input;

    // converting string to vector
    vector <char> word(input.begin(),input.end());

    for (int i = 0; i < word.size(); i++)
    {
        word[i] = toupper(word[i]);
        cout << word[i];
    }
    
    return 0;
}