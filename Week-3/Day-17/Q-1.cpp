#include <iostream>
#include <vector>
using namespace std;

void concat(vector <int> nums, vector <int> NUMS){
    int m = NUMS.size();
    int n = nums.size()-m;
    int i = n-1,j = m-1,k = n+m-1;
    while(i >= 0 && j >= 0){
        if(nums[i] > NUMS[j]){
            nums[k] = nums[i];
            i--;
            k--;
        }else{
            nums[k] = NUMS[j];
            j--;
            k--;
        }
    }
    while(j>=0){
        nums[k] = NUMS[j];
        k--;
        j--;
    }
    cout << "Merged array: " << endl;
    for(int x: nums) cout << x << " ";
}

int main(){
    // Q-Write a program to Merge arrays.
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
    for (int i = 0; i < m; i++)
    {
        arr.push_back(0);
    }
    concat(arr,ARR);
    return 0;
}