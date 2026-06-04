#include <iostream>
using namespace std;

void perfect(int n){
    int perfect = 0;
    for (int i = 1; i <= n/2; i++)
    {
        // checking if number is factor and if it is adding it.
        if(n%i==0) perfect +=i;
    }
    if(perfect == n) cout << n << " is a perfect number";
    else cout << n << " is not a perfect number";
}

int main() {
    // Q- Write a program to Check perfect number
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    perfect(n);
    return 0;
}