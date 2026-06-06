#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1) return 1;
    return n*factorial(n-1);
}

int main(){
    // Q- Write a program to Recursive factorial
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);
    return 0;
}