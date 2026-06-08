#include <iostream>
using namespace std;

int main(){

    // Write a program to Print reverse number
    // triangle.
    // 12345
    // 1234
    // 123
    // 12
    // 1
    for (int i = 0; i < 5; i++)
    {
        int num = 1;
        for (int j = 0; j < 5-i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
    return 0;
}