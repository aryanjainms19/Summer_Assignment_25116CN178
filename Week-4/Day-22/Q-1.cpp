#include <iostream>
using namespace std;

int main(){
    // Q-Write a program to Check palindrome string. 
    string input;
    cout << "Enter the string" << endl;
    cin >> input;

    
    int st = 0,end = input.length()-1;
    bool ispalin = true;
    while(st<=end){
        if(input[st] != input[end]) {
        ispalin = false;
        break;
        }
        st++,end--;
    }
    if(!ispalin) cout << "Entered string is not palindrome" << endl;
    else cout << "Entered string is palindrome" << endl;
    return 0;
}