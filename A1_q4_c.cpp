#include<iostream>
using namespace std;
int main(){
    int c1,r1;
    int value;
    cout<<"enter no of rows of array 1"<<endl;
cin>>r1;
cout<<"enter no of columns of array 1"<<endl;
cin>>c1;
int A[r1][c1];
int transpose[c1][r1]={0};
cout<<"entering elements of array 1"<<endl;
for(int i=0;i<r1;i++){
    for(int j=0;j <c1;j++){
        cout<<"enter value of element : "<<endl;
        cin>>value;
         A[i][j]=value;
    }
}
cout<<"________________"<<endl;
cout<<"transpose"<<endl;
for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
    transpose[j][i]=A[i][j];

}}
for(int i=0;i<c1;i++){
    for(int j=0;j<r1;j++){
    cout<<transpose[i][j]<<endl;

}}
return 0;
}