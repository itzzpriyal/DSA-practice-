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
    //#######################################################
    void preorder(struct node*root){
        if(root==0){
            return ;//this means that it moves directly from line 30 to line 31;as it has reaches the leaf node
        }
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    //######################################################
    int main(){
        struct node *root;
        root=0;
        root=create();
        printf("preorder is");
        preorder(root);
    }