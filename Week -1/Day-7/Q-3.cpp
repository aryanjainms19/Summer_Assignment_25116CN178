#include <iostream>
using namespace std;

int sum(int n){
    if(n == 0) return 0;
    return (n%10 + sum(n/10));
}

int main(){
    // Q-Write a program to Recursive sum of digits. 
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Sum of digits of " << n << " is" << sum(n);
    return 0;
}