#include <iostream>
#include <vector>
using namespace std;

void freq(vector <int> arr, int f){
    int count = 0;
    for(int x: arr){
        if(x == f) count++;
    }
    cout << f << " occured " << count << " times in array!" << endl;
}

int main(){
    // Q-Write a program to Frequency of an element 
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> nums(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cout << "Enter target element!" << endl;
    cin >> target;
    freq(nums,target);
    return 0;
}