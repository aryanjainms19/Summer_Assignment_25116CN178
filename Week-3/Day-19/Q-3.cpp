#include <iostream>
#include <vector>
using namespace std;


void Tmat(int r,int c,vector <vector <int>> mat1){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            cout << mat1[j][i] << " ";
        }
        cout << endl;
    }
    
}
int main(){
    // Q- Write a program to Transpose matrix
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
    
    Tmat(r,c,mat1);
    return 0;
}