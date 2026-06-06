#include <iostream>
using namespace std;

int binary(int n){
    int bin = 0 ,ten = 1;
    while (n!=0)
    {
        // multiplying the remainders with their decimal positional place
        bin += ten*(n%2);
        ten *= 10;
        n /=2;
    }
    
    return bin;
}

int main(){
    // Q- Write a program to Convert decimal to binary.
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Binary form of " << n << " is" << binary(n);
    return 0;
}