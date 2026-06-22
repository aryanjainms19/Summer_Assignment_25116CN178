#include <iostream>
#include <vector>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Store characters in a vector
    vector<char> str(input.begin(), input.end());

    int length = 0;
    // Traverse the vector to count elements
    for (char c : str) {
        length++;
    }

    cout << "Length of the string is: " << length << endl;

    return 0;
}