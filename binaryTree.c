/*1)each node can atmost two children
2)that is from each node only two edges can be generated

3)max no of nodes possible at each level:(2^i)
level 0---->0
level 1---->2
level 2---->4
level 3---->8
level 4---->16
.
.
.
.
so on
########################3
minimum no of nodes possible at height (h)=>h+1
maximum no of nodes possible at height (h)=>[2^(h+1)]-1 

max height = (n-1) where n=no of nodes
min height=[log2(n+1)]-1


*/
//##########################################################################
//implementation of binary tree
//(keep on seeing the notes in rejister side by side for better graphics )
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
    };
    struct node*create(){ //here the function type is not void but user defined data type struct node as its gonna return the address of the node
   struct node*newnode;
   int x;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Eneter Data(enter -1 for no node)");
   scanf("%d",&x);
if (x==-1){
    return 0;
}
newnode->data=x;
printf("\nEnter the data in left node of %d\n",x);
newnode->left=create();
printf("\nEnter the data in right node of %d\n",x);
newnode->right=create();
return newnode;
    }
    int main(){
        struct node *root;
        root=0;
        root=create();
    }