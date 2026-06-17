#include <iostream>
#include <vector>
#include <set>
using namespace std;


vector <int> Union(vector <int> nums1, vector <int> nums2){
    set<int> s;

    // Insert all elements of arr1
    for (int x : nums1)
        s.insert(x);

    // Insert all elements of arr2
    for (int x : nums2)
        s.insert(x);

    // Convert set to vector
    vector<int> result(s.begin(), s.end());
    return result;
}
int main(){
    // Q-Write a program to Union of arrays.
    int n;
    cout << "Enter 1st array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements!(sorted way)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "Enter 2nd array length" << endl;
    cin >> m;
    vector <int> ARR(m);
    cout << "Enter array elements!(in sorted manner)" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> ARR[i];
    }
    vector <int> result = Union(arr,ARR);
    cout << "Union: " << endl;
    for(int x: result) cout << x << " ";
    return 0;
}