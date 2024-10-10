#include<iostream>
using namespace std;
int main(){
    int count=0;
int sparse_matrix[4][4]={

{0,0,3,0},

{0,0,5,7},

{0,0,0,0},

{0,2,6,0}

};

for(int i = 0 ; i < 4 ;i++){

for(int j = 0 ; j < 4 ; j++) {

// cout<<sparse_matrix[i][j]<<" ";

if(sparse_matrix[i][j]!=0) {

count++;

}

}

// cout<<endl;

}

cout<<"value = "<<count<<endl;

cout<<"Normal"<<endl;

cout<<"4 4 "<<count<<endl;

cout<<endl;

for(int i = 0 ; i < 4 ;i++){

for(int j = 0 ; j < 4 ;j++) {

if (sparse_matrix[i][j]!=0){

cout<<i<<" "<<j<<" "<<sparse_matrix[i][j]<<endl;

}

}}
//transpose

int transpose[4][4];

cout<<"Transpose"<<endl;

for (int j = 0; j < 4 ;j++){

for(int i = 0 ; i < 4 ;i++){

transpose[i][j]=sparse_matrix[j][i];

}

}

cout<<"4 4 "<<count<<endl;

cout<<endl;

for(int i = 0; i < 4 ;i++){

for(int j = 0 ; j < 4 ;j++) {

if (transpose[i][j]!=0){

cout<<i<<" "<<j<<" "<<transpose[i][j]<<endl;

}

}}
//multiplication 

    int m, n, p;

    // Input dimensions for matrix A and B
    cout << "Enter rows and columns for matrix A (m x n): ";
    cin >> m >> n;
    cout << "Enter columns for matrix B (n x p): ";
    cin >> p;

    // Declare matrices
    int A[m][n], B[n][p], C[m][p];

    // Input matrix A
    cout << "Enter elements of matrix A: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input matrix B
    cout << "Enter elements of matrix B: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize matrix C to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply matrix A and B, and store the result in matrix C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output matrix C (result)
    cout << "Resultant matrix C (A x B):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


