#include <iostream>
using namespace std;

long long int factorial(int m){
    long long int fact = 1;
    for (int i = m; i>0; i--)
    {
        fact *= i;
    }
    
return fact;
}

void strong(int n){
    int strong = 0,original = n;
    while(n!=0){
        // Extracting factorial of last digit
        strong += factorial(n%10);
        // deleting last digit
        n /= 10;
    }
    if(strong == original) cout << original << " is a strong number";
    else cout << original << " is not a strong number";
}

int main(){
    // Q-Write a program to Check strong number.
    int n;
    cout << "Enter the number you want to check if strong or not" << endl;
    cin >> n;
    strong(n);
    return 0;
}