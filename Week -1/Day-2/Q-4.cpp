#include <iostream>
using namespace std;
void palindrome(int n){
    int oldnum = n;
    int reverse = 0;
    while (n!=0)
    {
        reverse *= 10;
        reverse += n%10;
        n /= 10;
    }
    if(reverse == oldnum) cout << oldnum << " is palindromic number";
    else cout << oldnum << " is not a palindrome";
}

int main(){
    int n;
    cout << "Enter the number you wanna check if palindrome" << endl;
    cin >> n;
    palindrome(n);
    // What we will do is check if reverse of this number is equal to this number
    return 0;
}