#include <iostream>
#include <vector>
using namespace std;

void PairSum(vector <int> nums, int target){
    int st = 0, end = nums.size()-1;
    while(st<end){
        if(nums[st] + nums[end] == target){
        cout << "Index of element pair are: " << st <<  " " << end << endl;
        st++;
        end--;
        }else if((nums[st] + nums[end]) > target) end--;
        else st++; 
    }
}

int main(){
    // Q- Write a program to Find pair with given sum. 
    // program will return indices of element which pair upto sum
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements!(in sorted way)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target sum" << endl;
    cin >> target;
    PairSum(arr,target);
    return 0;
}