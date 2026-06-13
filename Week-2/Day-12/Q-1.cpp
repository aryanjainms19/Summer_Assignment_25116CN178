#include <iostream>
#include <vector>
using namespace std;

void palindrome(vector <int> arr){
    int st = 0, end = arr.size()-1;
    bool ispal = true;
    while (st<=end)
    {
        if(arr[st] != arr[end]){
            ispal = false;
            break;
        }
        st++,end--;
    }
    if(!ispal) cout << "Number is not a Palindrome";
    else cout << "Number is Palindrome" << endl;
}

int main(){

    // Q-Write a program to Write function for
    // palindrome.
    int n;
    cout << "Enter the number of digits" << endl;
    cin >> n;
    vector <int> yoo(n);
    cout << "Enter the number!(digit-by-digit)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> yoo[i];
    }
    palindrome(yoo);

    return 0;
}