#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector <int> nums){
    int n = nums.size();
    for (int i = 0; i < n-1; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n; j++)
        {
            if(nums[j] < nums[smallest]) smallest = j;
        }
        swap(nums[smallest],nums[i]);
    }
    cout << "Array after selection sort: " << endl;
    for(int x: nums) cout << x << " ";

}

int main(){
    // Q- Write a program to Selection sort.
    int n;
    cout << "Enter array size" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    selectionSort(arr);
    return 0;
}