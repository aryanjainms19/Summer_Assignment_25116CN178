#include <iostream>
#include <vector>
#include <set>
using namespace std;


vector <int> common(vector <int> nums1, vector <int> nums2,vector <int> nums3){
    // Insert all elements of arr1
    set<int> s1;
    for (int x : nums1)
        s1.insert(x);

    //  Insert all elements of arr2
    set<int> s2;
    for (int x : nums2)
        s2.insert(x);

        //  Insert all elements of arr2
    set<int> s3;
    for (int x: nums3)
        s3.insert(x);

    vector <int> result;
    // Convert set to vector
    for(int x: s1){
        if(s2.count(x) && s3.count(x)) result.push_back(x);
    }
    return result;
}
int main(){
    // Q-Write a program to Find common elements.
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
    int l;
    cout << "Enter 3nd array length" << endl;
    cin >> l;
    vector <int> ARr(l);
    cout << "Enter array elements!(in sorted manner)" << endl;
    for (int i = 0; i < l; i++)
    {
        cin >> ARr[i];
    }
    vector <int> result = common(arr,ARR,ARr);
    cout << "Common elements: " << endl;
    for(int x: result) cout << x << " ";
    return 0;
}