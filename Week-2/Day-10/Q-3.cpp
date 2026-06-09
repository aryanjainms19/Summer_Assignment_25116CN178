#include <iostream>
using namespace std;

int main(){
    // Q-Write a program to Print number pyramid.
    //     1
    //    121
    //   12321
    //  1234321
    // 123454321
    for (int i = 0; i < 5; i++)
    {
        int num = 1;
        for (int j = 0; j < 8-2*i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout << num << " ";
            num++;
        }
        num--;
        for (int l = 0; l < i; l++)
        {
            num--;
            cout << num << " ";
        }
        for (int m = 0; m < 8-2*i; m++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
    
}