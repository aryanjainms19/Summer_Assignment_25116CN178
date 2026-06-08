#include <iostream>
using namespace std;

int main(){

        // Q- Write a program to Print reverse star pattern.
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = 5; i > 0; i--)
    {
        for (int j = i; j >0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}