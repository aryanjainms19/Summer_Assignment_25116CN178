#include <iostream>
using namespace std;

int setbits(int n){
    int bits = 0;
    while (n!=0)
    {
        if(n%2 == 1) bits++;
        n /= 2;
    }
    return bits;
}

int main(){
    // Q- Write a program to Count set bits in a number
    int n;
    cout << "Enter the number in decimal from: " << endl;
    cin >> n;
    cout << "Number of set bits in " << n << " is " << setbits(n);
    return 0;
}