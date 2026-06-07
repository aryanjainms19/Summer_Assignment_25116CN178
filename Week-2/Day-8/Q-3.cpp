#include <iostream>
using namespace std;

int main(){
    // Q-Write a program to Print character triangle.
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    for (int i = 0; i < 5; i++)
    {
        char alpha = 'A';
        for (int j = 0; j < i+1; j++)
        {
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }
    return 0;
}