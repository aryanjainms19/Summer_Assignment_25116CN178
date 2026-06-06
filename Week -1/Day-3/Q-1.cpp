#include <iostream>
using namespace std;

void prime(int n){
     bool primee = true;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            primee = false;
            break;
        } 
    }
    if(primee == false) cout << n << " is not a prime number";
    else cout << n << " is a prime number";
}
int main(){
    // Q- Write a program to check if a number is prime or not
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    prime(n);
    return 0;
}