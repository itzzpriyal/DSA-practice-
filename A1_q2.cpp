#include<iostream>
using namespace std;
int main(){
int k;
int count=0;
int A[10]={2,1,3,1,2,2};
for(int i=0;i<5;i++){
    for(int j=i+1;j<6;j++){
        if(A[i]==A[j]){
            for(k=j;k<6;k++){
                A[k]=A[k+1];
            }
            count++;
        }
    }
}
for(int i=0;i<count;i++){
    cout<<A[i]<<endl;
}
return 0;
}