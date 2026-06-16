#include <iostream>
#include <vector>
using namespace std;

void LeftRotate(vector <int> &arr,int &b){
    int n = arr.size();
    for (int j = 0; j < b; j++)
    {
        int first = arr[0];
        for (int i = 0; i < n; i++)
        {
            if(i == n-1) arr[i] = first;
            else arr[i] = arr[i+1];
        }
    }
    for(int x: arr) cout << x << " ";
}

int main(){
    // Q-Write a program to Rotate array left.
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int leftR;
    cout << "Enter number of left rotations" << endl;
    cin >> leftR;
    LeftRotate(arr,leftR);
    return 0;
}