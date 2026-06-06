#include <iostream>
using namespace std;

int reverse(int n, int rev){
    if(n==0) return rev;
    // if n is 0 reverse completed
    return reverse(n/10,rev*10 + n%10);
}

int main(){
    // Q- Write a program to Recursive reverse number.
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Reverse of " << n << " is " << reverse(n,0);
    return 0;
}