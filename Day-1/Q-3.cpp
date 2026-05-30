#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    
    return fact;
}
int main() {
    // Q-Write a program to find factorial of a number
    int n;
    cout << "Enter the number of which you wanna get factorial" << endl;
    cin >> n;
    cout << factorial(n);
    return 0;
}
