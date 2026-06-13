#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Q-Write a program to Find sum and average of
    // array.
    int n;
    cout << "Enter the number of elements in array" << endl;
    cin >> n;
    vector <int> array(n);
    cout << "Enter Array elements" << endl;
    int sum = 0;
    double average = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        sum += array[i];
    }
    average = (double)sum/n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average;
    return 0;
}