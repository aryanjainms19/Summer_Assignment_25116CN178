#include <iostream> 
using namespace std;

bool prime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int largestprimefactor(int n){
    if(prime(n)) return n; // if n is itself prime it will be the biggest prime factor
    for (int i = n/2; i > 1; i--)
    {
        if (n%i == 0 && prime(i)) return i; // if i is a factor and prime
    }
    return 0;
}

int main(){
    // Q-Write a program to Find largest prime factor
    int n;
    cout << "Enter the number to find its largest prime factor" << endl;
    cin >> n;
    cout << "Largest prime factor of " << n << " is " << largestprimefactor(n);
    return 0;
}