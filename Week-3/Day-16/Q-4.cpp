#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void RemoveD(vector <int> nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for (int i = 1; i < n; i++)
    {
        if(nums[i] == nums[i-1]) {
            nums.erase(nums.begin() + i);
            i--; // one element erased so one i back
            n--; // size pf array  decreased
        }
    }
    for(int x: nums) cout << x << " ";
}

int main(){
    // Q-Write a program to Remove duplicates from array
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    RemoveD(arr);
    return 0;
}