#include <iostream>
#include <string>
using namespace std;

string compressString(const string &str) {
    if (str.empty())
        return str;

    string compressed = "";
    int n = str.length();
    int count = 1;

    for (int i = 1; i <= n; i++) {
        if (i < n && str[i] == str[i - 1]) {
            count++;
        } else {
            compressed += str[i - 1];
            compressed += to_string(count);
            count = 1;
        }
    }

    return (compressed.length() < str.length()) ? compressed : str;
    // using turnary opr to return compressed string if its lenght is really compressed
}

int main() {
    string s1;
    cout << "Enter a string to be compressed" << endl;
    getline(cin,s1);
    string s2;
    cout << "Enter a string to be compressed" << endl;
    getline(cin,s2);

    cout << s1 << " -> " << compressString(s1) << endl;
    cout << s2 << " -> " << compressString(s2) << endl;

    return 0;
}