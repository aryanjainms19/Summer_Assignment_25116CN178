#include <iostream>
#include <vector>

using namespace std;

int main() {
	
    // Q-Write a program to Linear search. 
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> lin(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> lin[i];
    }
    int target;
    cout << "Enter target element!" << endl;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if(lin[i] == target){
            cout << "Target found at index: " << i << endl;
            break;
        }
    }
    
	return 0;
}
