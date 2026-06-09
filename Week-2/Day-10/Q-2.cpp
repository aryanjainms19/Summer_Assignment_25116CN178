#include <iostream>
using namespace std;

int main(){
    // Q-Write a program to Print reverse pyramid.
    // *********
    // *******
    //  *****
    //  ***
    //  *
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2*i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 9-2*i; k++)
        {
            cout << "* ";
        }
        for (int l = 0; l < 2*i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}