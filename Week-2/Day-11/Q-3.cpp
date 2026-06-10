#include <iostream>
using namespace std;

void IsPrime(int x){
    bool prime = true;
    for (int i = 2; i < x; i++)
    {
        if(x%i==0){
            prime = false;
            break;
        }
    }
    if(!prime) cout << x << " is not prime";
    else cout << x << " is prime";
}

int main(){
    // Q-Write a program to Write function to check
    // prime
    int x;
    cout << "Enter the number you want to check" << endl;
    cin >> x;
    IsPrime(x);
    return 0;
}