#include <iostream>
using namespace std;

int main(){
    // Q-Write a program to Print hollow square
    // pattern.
    // *****
    // * *
    // * *
    // * *
    // *****
    for (int i = 0; i < 5; i++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "*";
        for (int j = 0; j < 7; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "* ";
    }
    
    
    return 0;
}