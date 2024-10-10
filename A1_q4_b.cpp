#include<iostream>
using namespace std;
//multiplication of a matrix
int main(){
int c1,r1;
int c2,r2;
cout<<"enter no of rows of array 1"<<endl;
cin>>r1;
cout<<"enter no of columns of array 1"<<endl;
cin>>c1;
cout<<"enter no of rows of array 2"<<endl;
cin>>r2;
cout<<"enter no of coulmns of array 2"<<endl;
cin>>c2;
int A[r1][c1];
int B[r2][c2];
int C[r1][c2]={0};//it is necessary to initialise array C[] as {0} as it may contain garbage value
int value;
int value_2;
cout<<"entering elements of array 1"<<endl;
for(int i=0;i<r1;i++){
    for(int j=0;j <c1;j++){
        cout<<"enter value of element : "<<endl;
        cin>>value;
         A[i][j]=value;
    }
}
cout<<"entering elements of array 2"<<endl;
for(int i=0;i<r2;i++){
    for(int j=0;j <c2;j++){
        cout<<"enter value of element : "<<endl;
        cin>>value_2;
         B[i][j]=value_2;
    }
}
cout<<endl;
cout<<"Multiplication : "<<endl;
//###############################################################################################
//LOGIC
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        for(int k=0;k<c1;k++){
             C[i][j] =C[i][j]+(A[i][k]*B[k][j]);
        }
    }
}
cout<<"_________________________________________________________________________________"<<endl;
for(int i=0;i<r1;i++){
    for(int j=0;j <c2;j++){
       
       cout<<C[i][j]<<endl;
    }
}
return 0;
}




// #include<iostream>
// using namespace std;

// int main() {
//     int r1, c1, r2, c2;

//     // Input the dimensions of the matrices
//     cout << "Enter number of rows of matrix A: ";
//     cin >> r1;
//     cout << "Enter number of columns of matrix A: ";
//     cin >> c1;

//     cout << "Enter number of rows of matrix B: ";
//     cin >> r2;
//     cout << "Enter number of columns of matrix B: ";
//     cin >> c2;

//     // Check if multiplication is possible
//     if (c1 != r2) {
//         cout << "Matrix multiplication is not possible. Columns of A must be equal  to rows of B." << endl;
//         return 1;
//     }

//     // Declare the matrices
//     int A[r1][c1];
//     int B[r2][c2];
//     int C[r1][c2] = {0};

//     // Input elements of matrix A
//     cout << "Entering elements of matrix A:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             cout << "Enter value for A[" << i << "][" << j << "]: ";
//             cin >> A[i][j];
//         }
//     }

//     // Input elements of matrix B
//     cout << "Entering elements of matrix B:" << endl;
//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             cout << "Enter value for B[" << i << "][" << j << "]: ";
//             cin >> B[i][j];
//         }
//     }

//     // Perform matrix multiplication
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             for (int k = 0; k < c1; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     // Output the result
//     cout << "Resulting matrix after multiplication:" << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
