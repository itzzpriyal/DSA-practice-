#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
void reverse(string x){
    stack<string>st;
    for(int i=0;i<x.length();i++){
      string word="";//initialisng a string as null just like we initialise a variable as zero 
       while(x[i]!=' ' && i<x.length()){
        word=word+x[i];  
        i++;  
        }
       st.push(word);
    }
    
        while(!st.empty()){
        cout<<st.top();
        st.pop();
       cout<<" ";
        
    }}
int main(){
string s ="my name is priyal";
reverse(s);
    

return 0;
}