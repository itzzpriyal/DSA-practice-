#include <stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
    struct node *previous;
};

struct node *head = NULL, *newnode, *tail;
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
            head =tail= newnode;
        } else {
            tail->next = newnode;
            newnode->previous = tail;
            tail = newnode;
           
        }

        printf("Do you want to enter more numbers? (1/0): ");
        scanf("%d", &choice);
    }
    tail->next=head;
    head->previous=tail;
}
//display
void display(){
    struct node *temp2;
    temp2=head;
     if (head == NULL) {
        printf("List is empty!\n");
        
    }
     do {
        printf("%d\n", temp2->data);
        temp2 = temp2->next;
    } while (temp2 != head);  // Loop until we reach the head again

    }

void begin(){
    struct node*temp2;
    temp2=head;
   if (head==NULL){
        printf("NO NODE IS PRESENT");    }
       else if(head==head->next){
            free(head);
        }
        else{
            head=head->next;
            head->previous=tail;
            tail->next=head;
            free(temp2);
        }
}
void end(){
  struct node*temp3;
    temp3=tail;
   if (head==NULL){
        printf("NO NODE IS PRESENT");    }
       else if(head==head->next){
            free(head);
        }  
        else{
            tail=tail->previous;
            tail->next=head;
            head->previous=tail;
            free(temp3);
        } 
}
void mid(){
    struct node*ptemp,*ftemp;
    int count=0 ,p;
    ptemp=ftemp=head;
   printf("enter position");
   scanf("%d",&p);
   while(count<p){
ptemp=ftemp;
ftemp=ftemp->next;
count++;
   } 
   ftemp->previous=ptemp->previous;
   ptemp->previous->next=ftemp;
   free(ptemp);
}
int main(){
create();
// begin();
// end();
mid();
display();
}