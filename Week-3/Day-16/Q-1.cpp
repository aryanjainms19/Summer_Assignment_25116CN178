#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Missing(vector <int> nums){
    sort(nums.begin(),nums.end());
    // A^A = 0
    // A^0 = A
    int ans = 1;
    int n = nums.size();
    for (int i = 2; i <= nums[n-1]; i++)
    {
        ans = ans^i;
    }
    for (int j = 0; j < n; j++)
    {
        ans ^= nums[j];
    }
    cout << "Missing element in array was: " << ans << endl;
}

int main(){
    // Q-Write a program to Find missing number in
    // array
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements from 1 to n(leaving a no. in between)!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Missing(arr);
    return 0;
}