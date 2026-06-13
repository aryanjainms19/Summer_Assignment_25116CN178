#include <iostream>
using namespace std;

int intPow(int base, int exp) {
    int result = 1;
    while (exp--) result *= base;
    return result;
}

int count(int n){
    int ct = 0;
    while(n!=0){
        ct++;
        n /= 10;
    }
    return ct;
}
void Armstrong(int n){
    // will check if number is armstrong or not
    int OG = n,neww = 0;
    int sizee = count(n);
    while (n!=0)
    {
        neww += intPow(n%10,sizee);
        n /= 10;
    }
    if(OG == neww) cout << OG << " is an armstrong number!";
    else cout << OG << " is not an armstrong number";
}

int main(){
    // Q- Write a program to Write function for
    // Armstrong.
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    Armstrong(n);
    return 0;
}