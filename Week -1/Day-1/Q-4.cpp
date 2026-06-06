#include <iostream>
using namespace std;

int digits(int n){
    int count = 0;
    while (n>0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int main() {
    // Q-Write a program to count digits in the number
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << digits(n);
    return 0;
}
