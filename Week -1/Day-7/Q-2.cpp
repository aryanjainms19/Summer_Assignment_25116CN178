#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main(){
    // Q- Write a program to Recursive Fibonacci.
    int n;
    cout << "Enter which term of fibonacci you want" << endl;
    cin >> n;
    cout << n <<"th term of fibonacci is " << fibonacci(n);
    return 0;
}