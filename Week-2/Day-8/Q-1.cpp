#include <iostream>
using namespace std;

int main(){
    // Q- Write a program to Print half pyramid pattern.

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "$ ";
        }
        cout << endl;
    }
    return 0;
}