#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Q-Write a program to Count even and odd elements.
    int n;
    cout << "Enter the number of elements in array" << endl;
    cin >> n;
    vector <int> array(n);
    cout << "Enter Array elements" << endl;
    int even =0,odd =0;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
        if(array[i]%2 == 0) even++;
        else odd++;
    }
    cout << "Even elements: " << even<< endl;
    cout << "Odd elements: " << odd<< endl;
    return 0;
}