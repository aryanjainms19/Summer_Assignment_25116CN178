#include <iostream>
using namespace std;

int sumofdigits(int n){
    int sum = 0;
    while(n!=0){
        sum += n%10;
        n /=10;
    }
    return sum;
}

int main(){
    // Q-Write to program to find sum of digits of a number.
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << sumofdigits(n);
    return 0;
}