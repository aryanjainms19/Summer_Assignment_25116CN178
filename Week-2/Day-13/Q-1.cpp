#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Q- Write a program to Input and display array.
    vector <int> arr(4);
    cout << "Enter 4 elements in array" << endl;
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}