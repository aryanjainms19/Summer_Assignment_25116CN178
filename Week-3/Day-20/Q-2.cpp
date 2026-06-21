#include <iostream>
#include <vector>
using namespace std;


void Tmat(int r,int c,vector <vector <int>> mat1){
    bool symmetric = true;
    for (int i = 0; i < r && symmetric; i++){
        for (int j = i+1; j < c; j++)
        {
            if(mat1[i][j] != mat1[j][i]){
                symmetric = false;
                break;
            }
        }
    }
    if(symmetric) cout << "Given matrix is symmetric!" << endl;
    else cout << "Given matrix is not symmetric!" << endl;

}
int main(){
    // Q- Write a program to Check symmetric matrix
    int r,c;
    cout << "Enter the number of rows and coulumns of matrix" << endl;
    cin >> r >> c;
    if(r != c){
        cout << "Matrix should be square matrix!" << endl;
    }
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