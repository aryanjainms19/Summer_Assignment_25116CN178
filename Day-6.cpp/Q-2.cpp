#include <iostream>
using namespace std;

int decimal(int n){
    int deci = 0, two = 1;
    while (n!=0)
    {
        deci += two*(n%10);
        two *= 2;
        n /= 10;
    }
    return deci;
}

int main(){
    // Q- Write a program to Convert binary to decimal. 
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Decimal form of " << n << " is " << decimal(n);
    return 0;
}