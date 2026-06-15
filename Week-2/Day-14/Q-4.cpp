#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Duplicate(vector<int> nums) {
    sort(nums.begin(), nums.end());

    bool found = false;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            cout << "Duplicate: " << nums[i] << "\n";
            found = true;
            while (i + 1 < nums.size() && nums[i] == nums[i + 1])
                i++;  // skip repeated duplicates
        }
    }

    if (!found)
        cout << "No duplicates found.\n";
}

int main() {
    //Q-Write a program to Find duplicates in array. 
    int n;
    cout << "Enter array length" << endl;
    cin >> n;
    vector <int> lin(n);
    cout << "Enter array elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> lin[i];
    }
    Duplicate(lin);

    return 0;
}
