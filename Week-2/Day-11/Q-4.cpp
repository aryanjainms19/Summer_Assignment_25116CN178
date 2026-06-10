#include <iostream>
using namespace std;

int fact(int n){
    int facto = 1;
    for (int i = n; i > 1; i--)
    {
        facto *= i;
    }
    return facto;
}

int main(){
    // Q-Write a program to Write function to find
    // factorial
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n);
    return 0;
}