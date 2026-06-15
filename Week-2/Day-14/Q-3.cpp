#include <iostream>
#include <vector>
using namespace std;

void secondL(vector <int> arr){
    int first = arr[0],second = arr[0];
    for(int x: arr){
        if(x > first){
            second = first;
            first = x;
        }else if(x > second && x != first) second = x;
    }
    cout << "Second largest element of array is " << second << endl;
}

int main(){
    // Q-Write a program to Second largest element.
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> nums(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    secondL(nums);
    return 0;
}

