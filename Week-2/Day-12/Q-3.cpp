#include <iostream>
using namespace std;

int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    // Q- Write a program to Write function for
    // Fibonacci
    int n;
    cout << "Enter the ith term of fibonacci" << endl;
    cin >> n;
    cout << n << "th term of series is " << fibo(n);
    return 0;
}