#include <iostream>
#include <vector>
using namespace std;

void matSub(int r1,int c1,int c2,vector <vector <int>> mat1,vector <vector <int>> mat2){
    cout << "Matrix after multiplication: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int currElement = 0;
            for (int k = 0; k < c1; k++)
            {
                currElement += mat1[i][k] * mat2[k][j];
            }
            cout << currElement << " ";
        }
        cout << endl;
    }
    
}

int main(){
    // Q- Write a program to Multiply matrices.
    int r1,c1,r2,c2;
    cout << "Enter the number of rows and columns of matrix 1 and matrix 2." << endl;
    cin >> r1 >> c1 >> r2 >> c2;
    vector <vector <int>> mat1(r1,vector<int>(c1));
    vector <vector <int>> mat2(r2,vector<int>(c2));

    if(c1 != r2){
        cout << "Error!!! columns of matrix 1 and rows of matrix 2 must be equal." << endl;
        return 0;
    }

    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cin >> mat2[i][j];
        }
    }
    matSub(r1,c1,c2,mat1,mat2);  //r2 = c1
    return 0;
}