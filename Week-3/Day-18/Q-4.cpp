#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector <int> nums){
    int n = nums.size();
    bool isswap = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(nums[j] < nums[j+1]) swap(nums[j],nums[j+1]);
            isswap = true;
        }  
        if(!isswap) break;
    }
    cout << "Sorted Array:(in descending order) " << endl;
    for(int x: nums) cout << x << " ";
}

int main(){
    // Q- Write a program to Sort array in descending order.
    int n;
    cout << "Enter array size" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr);
    return 0;
}