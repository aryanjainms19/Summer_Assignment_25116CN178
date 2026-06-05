#include <iostream>
using namespace std;

long long int expo(int x, int n){
    int base = x,ans = 0;
    // THis method reduces the number of iterations from n running in for loop to number of digits in expo reducing time complexity
    while (n!=0)
    {
        ans += base*(n%2);
        n /=2;
        base *= base;
    }
     

    return ans;
}

int main(){
    // Q- Write a program to Find x^n without pow().
    int x,n;
    cout << "Enter the base and its exponent: " << endl;
    cin >> x >> n;
    cout << x << " to the power of " << n << " is " << expo(x,n);
    return 0;
}