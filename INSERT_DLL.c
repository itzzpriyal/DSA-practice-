#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *previous;
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
    struct node *temp2;
    temp2=head;
    while(temp2!=NULL){
        printf("%d\n",temp2->data);
        temp2=temp2->next;
    }
    }
    //begininng 
    void insert_begin(){
        struct node*newnode1;
        newnode1 = (struct node*)malloc(sizeof(struct node));
        printf("enter new data in beginning");
        scanf("%d",&newnode1->data);
        if (head == NULL) {
        newnode1->next = NULL;
        newnode1->previous = NULL;
        head = newnode1;
    } else {
        newnode1->next=head;
        newnode1->previous=0;
        head->previous=newnode1;
        head=newnode1;
    }
        
    }
    //insert at end
void insert_end(){
     
        struct node*newnode2,*temp3;
        newnode2 = (struct node*)malloc(sizeof(struct node));
        printf("enter new data at end");
        scanf("%d",&newnode2->data);
     
        newnode2->next=0; 
       if (head == NULL) {
        newnode2->previous = NULL;
        head = newnode2;
         } 
      else {
           temp3=head;
            while(temp3->next!=0){ 
        
        temp3=temp3->next;
        }
        temp3->next=newnode2;
        newnode2->previous=temp3;
       
        }
  
}
//mid insertion
void mid_insertion(){
    struct node* temp4,*temp5,*newnode3;
    int p,count=1;
    newnode3 = (struct node*)malloc(sizeof(struct node));
    printf("enter the position at which you want to enter the node");
    scanf("%d",&p);
    printf("enter the value of data");
    scanf("%d",&newnode3->data);
      if(head==NULL){
        head=newnode3;
        newnode3->next=0;
        newnode3->previous=0;}
  else{
    temp4=head ;   
    temp5=head;    

    while(count<p){
        temp4=temp4->next;
       temp5=temp4->next; 
       count++;
    }
temp4->next=newnode3;
newnode3->previous=temp4;
newnode3->next=temp5;
temp5->previous=newnode3;

  }

      }


int main(void) {
    create();
    display();
    insert_begin();
    display();
    insert_end();
    display();
    mid_insertion();
    display();
    return 0;
}
