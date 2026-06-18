#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Binary_S(vector <int> nums, int target){
    int n = nums.size();
    int st = 0, end = n-1;
    while (st <= end)
    {
        int mid = st + (end-st)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) end--;
        else st++;
    }
    
    return -1;  // target not found
}

int main(){
    // Q-Write a program to Binary search.
    int n;
    cout << "Enter array length!" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements(sorted in increasing order)!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target element!" << endl;
    cin >> target;
    int TG = Binary_S(arr,target);
    if(TG == -1) cout << "Target element not found in array!" << endl;
    else cout << "Target element found at index: " << TG << endl;
    return 0;
}