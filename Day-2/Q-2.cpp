#include <iostream>
using namespace std;
 
int reverse(int n){
    int num = 0;
    while (n != 0)
    {
        num *= 10;
        num += (n%10);
        n /=10;
    }
    
    return num;
}
int main(){
    // Q-Write a program to reverse a number
    int n;
    cout << "Enter the number you eant to reverse" << endl;
    cin >> n;
    cout << reverse(n);
    return 0;
}