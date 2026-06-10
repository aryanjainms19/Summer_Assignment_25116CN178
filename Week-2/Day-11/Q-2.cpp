#include <iostream>
using namespace std;

int maxi(int x,int y){
    if(x>y) return x;
    else return y;
}

int main(){
    // Q-Write a program to Write function to find
    // maximum.
    int x,y;
    cout << "Enter two numbers:" << endl;
    cin >> x >> y;
    cout << "Maximun between two numbers is " << maxi(x,y);
    return 0;   
}