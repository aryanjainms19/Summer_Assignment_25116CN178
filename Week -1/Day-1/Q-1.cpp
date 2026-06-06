#include <iostream>
using namespace std;
// Q-Write a program to calculate sum of first N natural numbers
int SumUptoN(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter the number n" << endl;
    cin >> n;
    cout << SumUptoN(n);
    return 0;
}