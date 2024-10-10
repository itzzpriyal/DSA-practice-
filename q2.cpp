// //bubble sort
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the no of elements you want to bubble sort"<<endl;
// cin>>n;
// int arr[n]={0};
//  for (int i = 0; i < n; i++)
//     {
//         cout << "enter element : " ;
//         cin >> arr[i];
//     }
//     cout<<"Before Bubble sort"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout << endl;
// for(int i=0;i<n-1;i++){// this loop strts the sorting process from start from ( i to <n)
//     for(int j=0;j<n-i-2;j++)//numbers keep on getting sorted and aligns itself at the end of array here (n-i)symbolises how after each turn the last no starts getting sorted
//     //last no sorted-> then 2nd last -> then third last n so on....
//     {
// if(arr[j]>arr[j+1]){
//         int temp=arr[j];
//         arr[j]=arr[j+1];
//         arr[j+1]=temp;
//     }
//     }
    
// }
//  cout<<"After Bubble sort"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"  ";
//     }
// return 0;
// }
#include<iostream>
using namespace std;
int main(){
int A[6]={1,0,4,2,9,3};
for (int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
        if(A[j]>A[j+1]){
int temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;

        }
    }
}
 for(int i=0;i<6;i++){
             cout<<A[i]<<"  ";
    }
return 0;
}