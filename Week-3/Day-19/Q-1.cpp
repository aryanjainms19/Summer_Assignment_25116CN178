#include <iostream>
#include <vector>
using namespace std;

void matAdd(int rows,int cols,vector <vector <int>> mat1,vector <vector <int>> mat2){
    cout << "Matrix after addition: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat1[i][j] + mat2[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main(){
    // Q- Write a program to Add matrices.
    int r,c;
    cout << "Enter the number of rows and coulumns of both matrices(as for addition rows and columns should be same for both matrix)" << endl;
    cin >> r >> c;
    vector <vector <int>> mat1(r,vector<int>(c));
    vector <vector <int>> mat2(r,vector<int>(c));

    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> mat2[i][j];
        }
    }
    matAdd(r,c,mat1,mat2);
    return 0;
}