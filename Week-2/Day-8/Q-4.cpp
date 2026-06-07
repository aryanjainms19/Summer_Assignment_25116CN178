#include <iostream>
using namespace std;

int main(){
    // Q- Write a program to Print repeated-number
    // pattern.
    // 1
    // 22
    // 333
    // 4444
    // 55555
    int num = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << num;
        }
        num++;
        cout << endl;
    }
    return 0;
}