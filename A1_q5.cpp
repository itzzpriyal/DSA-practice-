#include<iostream>
using namespace std;
int main(){
int c1,r1;
int c2,r2;
int sum_row=0,sum_coulmn=0;
cout<<"enter no of rows of array 1"<<endl;
cin>>r1;
cout<<"enter no of columns of array 1"<<endl;
cin>>c1;
int A[r1][c1]={0};
int value;
cout<<"entering elements of array 1"<<endl;
for(int i=0;i<r1;i++){
    for(int j=0;j <c1;j++){
        cout<<"enter value of element : "<<endl;
        cin>>value;
         A[i][j]=value;
    }
}
cout<<"sum of row elements"<<endl;
for(int i=0;i<r1;i++){
for(int j=0;j<c1;j++){
 sum_row=sum_row+A[i][j];
}
cout<<"sum of row "<<i+1<<" is:"<<sum_row<<endl;
sum_row=0;
}
cout<<"_________________________________"<<endl;
cout<<"sum of coulmn elements"<<endl;
for(int i=0;i<c1;i++){
for(int j=0;j<r1;j++){
 sum_coulmn=sum_coulmn+A[j][i];
}
cout<<"sum of coulmn "<<i+1<<" is:"<<sum_coulmn<<endl;
sum_coulmn=0;
}
return 0;
}