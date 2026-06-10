#include <iostream>
using namespace std;

int Sum(int x,int y){
    int add = x+y;
    return add;
}
int main(){
    // Q-Write a program to Write function to find sum
    // of two numbers.
    int x,y;
    cout << "Enter the numbers" << endl;;
    cin >> x >> y;
    cout << "Sum of " << x << "and " << y << " is " << Sum(x,y);
    return 0;
}