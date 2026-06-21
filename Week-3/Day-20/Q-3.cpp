#include <iostream>
#include <vector>
using namespace std;

void rowWiseSum(int r, int c, const vector<vector<int>>& mat1){
    for (int i = 0; i < r; i++){
        int sum = 0;
        for (int j = 0; j < c; j++){
            sum += mat1[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }
}

int main(){
    // Q- Write a program to find row-wise sum
    int r, c;
    cout << "Enter the number of rows and columns of matrix" << endl;
    cin >> r >> c;
    vector<vector<int>> mat1(r, vector<int>(c));

    cout << "Enter elements of matrix :" << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> mat1[i][j];
        }
    }

    rowWiseSum(r, c, mat1);
    return 0;
}