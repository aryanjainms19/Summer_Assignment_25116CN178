#include <iostream>
#include <vector>
using namespace std;

void RightRotate(vector <int> &arr,int &b){
    int n = arr.size();
    for (int j = 0; j < b; j++)
    {
        int last = arr[n-1];
        for (int i = n-1; i >= 0; i--)
        {
            if(i == 0) arr[i] = last;
            else arr[i] = arr[i-1];
        }
    }
    for(int x: arr) cout << x << " ";
}

int main(){
    // Q-Write a program to Rotate array right
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int rightR;
    cout << "Enter number of right rotations" << endl;
    cin >> rightR;
    RightRotate(arr,rightR);
    return 0;
}