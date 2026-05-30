#include <iostream>
using namespace std;
void table(int n){
    for (int i = 1; i <= 10; i++)
    {
        cout << n <<"*"<<i<<" = "<< n*i << endl;
    }
    
}
int main() {
    // Q-Write a program to print multiplication table of a number
    int n;
    cout << "Enter the number of which u want to get table" << endl;
    cin >> n;
    table(n);
    return 0;
}
