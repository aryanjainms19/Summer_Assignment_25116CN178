#include <iostream>
using namespace std;

int product(int n){
    int pro = 1;
    while (n!=0)
    {
        // Extracting the last digit from number
        pro *= n%10;
        // Resetting number(deleting last digit)
        n /= 10;
    }
    
    return pro;
}

int main(){
// Q-Write a program to find product of digits
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << product(n);
    return 0;
} 