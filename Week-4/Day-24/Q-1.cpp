#include <iostream>
#include <string>
using namespace std;

bool isRotation(const string &s1, const string &s2) {
    if (s1.length() != s2.length())
        return false;
    
    string temp = s1 + s1;      // concatenate s1 with itself
    return temp.find(s2) != string::npos; // if == string:: npos it means s2 is not in s1
}

int main() {
    string s1;
    cout << "Enter first string" << endl;
    getline(cin,s1);

    string s2;
    cout << "Enter second string" << endl;
    getline(cin,s2);

    if (isRotation(s1, s2))
        cout << s2 << " is a rotation of " << s1 << endl;
    else
        cout << s2 << " is NOT a rotation of " << s1 << endl;

    return 0;
}