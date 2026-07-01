#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(const string &str) {
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        bool isDuplicate = false;

        // Check if str[i] already exists in result
        for (int j = 0; j < result.length(); j++) {
            if (result[j] == str[i]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            // if a character in str is not matching with all those in result then push that character in result
            result += str[i];
        }
    }

    return result;
}

int main(){
    // Q- Write a program to Remove duplicate chracters
    string input;
    cout << "Enter the string" << endl;
    getline(cin,input);
    cout << removeDuplicates(input);
    return 0;
}