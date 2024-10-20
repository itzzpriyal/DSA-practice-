#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*previous;
    struct node*next;
    };
    struct node *head = NULL, *newnode, *temp;

//create DLL
void create() {
    int choice = 1;  // Initialize choice to 1 to enter the loop initially
    while(choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->previous = NULL;
        newnode->next = NULL;
        printf("Enter data: ");
        scanf("%d", &newnode->data);

        if(head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            newnode->previous = temp;
            temp = newnode;
        }

        printf("Do you want to enter more numbers? (1/0): ");
        scanf("%d", &choice);
            }
}
//display
void display(){
    struct node *temp1;
    temp1=head;
    while(temp1!=NULL){
        printf("%d\n",temp1->data);
        temp1=temp1->next;
    }
    }
    void reverse(){
        struct node *temp2,*tempnext=NULL,*moving_head;
       temp2=head;
       if (head==NULL){
        printf("can't be reversed");
       }
       else if(head->next==NULL){
        printf("only one element is present %d",head->data);
               }
              else{
                 while(temp2!=NULL){
                tempnext=temp2->next;
                temp2->next=temp2->previous;
                temp2->previous=tempnext;
                moving_head=temp2;
                temp2=tempnext;
              }
              head =moving_head;        
              }
    }
    int main(){
        create();
        reverse();
        display();
        return 0;
    }