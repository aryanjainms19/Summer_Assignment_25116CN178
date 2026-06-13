#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Q-Write a program to Find largest and smallest
    // element.
    int n;
    cout << "Enter the number of elements in array" << endl;
    cin >> n;
    vector <int> array(n);
    cout << "Enter Array elements" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int largest = array[0], smallest = array[0];
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
        if(array[i] > largest) largest = array[i];
        if(array[i] < smallest) smallest = array[i];
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    return 0;
}