#include <iostream>
using namespace std;

int main(){
    // Q-Write a program to Print character pyramid.
    //      A
    //     ABA
    //    ABCBA
    //   ABCDCBA
    //  ABCDEDCBA
 for (int i = 0; i < 5; i++)
    {
        char alpha = 'A';
        for (int j = 0; j < 8-2*i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout << alpha << " ";
            alpha++;
        }
        alpha--;
        for (int l = 0; l < i; l++)
        {
            alpha--;
            cout << alpha << " ";
        }
        for (int m = 0; m < 8-2*i; m++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}