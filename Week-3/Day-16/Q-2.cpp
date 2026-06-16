#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Maxfreq(vector <int> nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    // We will create a new array having elements and their freq just after element such that at even indices there eill be elements and their frequency at odd indices.
    // later on will compare frequency and return element before max frequency
    vector <int> help(2*n,0);
    int currelement = nums[0],count = 1;
    int p = 0;
    for (int i = 1; i < n; i++)
    {
        if(nums[i] == currelement) count++;
        else{
            help[p] = currelement;
            p++;
            help[p] = count;
            p++;
            currelement = nums[i];
            count = 1;
        }
    }
        help[p] = currelement;
        p++;
        help[p] = count;
        p++;
    // checking max freq at odd indices
    int maxF = 1; // index of max freq. element
    for (int i = 3; i < p; i++)
    {
        if(i%2 != 0){
            if(help[i] > help[maxF]) maxF = i;
        }
    }
    cout << "Element with maximum frequency in array is: " << help[maxF-1];
    
}


int main(){
    // Q-Write a program to Find maximum frequency element.
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter array elements!(Make sure no two numbers have same frequency)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Maxfreq(arr);
    return 0;
}