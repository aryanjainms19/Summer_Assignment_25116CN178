#include <iostream>
#include <vector>
using namespace std;

void MoveEnd(vector <int> arr){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            arr.push_back(arr[i]);
            arr.erase(arr.begin() + i);
        }    
    }
    for(int x: arr) cout << x << " ";
}

int main(){
    // Q-Write a program to Move zeroes to end.
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MoveEnd(arr);
    return 0;
}