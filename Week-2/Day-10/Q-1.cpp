#include <iostream>
using namespace std;

int main(){
    // Q-Write a program to Print star pyramid.
    //   *
    //  ***
    // *****
    //*******
   //*********
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8-2*i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout << "* ";
        }
        for (int l = 0; l < 8-2*i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}