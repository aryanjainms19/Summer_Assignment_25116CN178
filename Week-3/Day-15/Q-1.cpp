#include <iostream>
#include <vector>
using namespace std;

void ReverseIt(vector <int> &arr){
    int st = 0, end = arr.size()-1;
    while (st<=end)
    {
        swap(arr[st],arr[end]);
        st++,end--;
    }
    
}

int main(){
    // Q- Write a program to Reverse array.
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ReverseIt(arr);
    cout << "Reversed array: " << endl;
    for(int x: arr) cout << x << " ";
    return 0;
}