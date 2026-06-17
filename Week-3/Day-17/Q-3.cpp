#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector <int> Intersection(vector <int> nums1, vector <int> nums2){

    set<int> s1;
    for(int x: nums1) s1.insert(x);
    // making sure no duplicate element
    set <int> s2;
    for(int x: nums2) s2.insert(x);

    vector <int> result;

    for(int x: s2){
        if(s1.count(x)) result.push_back(x);
    }
    return result;
}

int main(){
    // Q-Write a program to Intersection of arrays
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
    vector <int> Inter = Intersection(arr,ARR);
    cout << "Intersection array: " << endl;
    for(int x: Inter) cout << x << " ";
    return 0;
}