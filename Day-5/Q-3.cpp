#include <iostream>
using namespace std;

void factor(int n){
    for (int i = 1; i <= n/2; i++)
    {
        if(n%i == 0) cout << i << " ";
    }
}

int main(){
    // Q-Write a program to Print factors of a number.
    int n; 
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "Factors of " << n << " are(excluding itself):";
    factor(n);
    return 0;
}