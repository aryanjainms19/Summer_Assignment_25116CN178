#include <iostream>
#include <vector>
using namespace std;


void DiagonalSum(int r,int c,vector <vector <int>> mat1){
    int diaSum = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            if(i == j) diaSum += mat1[i][j];
        }
    }
    cout << "Sum of diagonal of matrix is: " << diaSum;
}
int main(){
    // Q- Write a program to Find diagonal sum.
    int r,c;
    cout << "Enter the number of rows and coulumns of matrix" << endl;
    cin >> r >> c;
    vector <vector <int>> mat1(r,vector<int>(c));

    cout << "Enter elements of matrix :" << endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> mat1[i][j];
        }
    }
    
    DiagonalSum(r,c,mat1);
    return 0;
}