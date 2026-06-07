#include <iostream>
using namespace std;

int main(){
    // Q-Write a program to Print number triangle.
// 1
// 12
// 123
// 1234
// 12345
    for (int i = 0; i < 5; i++)
    {
        int num = 1;
        for (int j = 0; j < i+1; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    
    return 0;
}