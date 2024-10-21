#include<stdio.h>
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
    //usimg while loop here wont let the last element to be preinted so use DO WHILE
   
    // while(temp2->next!=head){
    //     printf("%d\n",temp2->data);
    //     temp2=temp2->next;
    // }
     do {
        printf("%d\n", temp2->data);
        temp2 = temp2->next;
    } while (temp2 != head);  // Loop until we reach the head again

    }
    void end(){
        struct node *temp3,*newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter new data value");
        scanf("%d",&newnode->data);
     if (head == NULL) {
       printf("only one element is present");
       head=tail=newnode;
       newnode->previous=tail;
       newnode->next=head;
        
    }
else{
    
 tail->next=newnode;
 newnode->previous=tail;
 newnode->next=head;
 head->previous=newnode;
 
}
       
        
    }
     void begin(){
        struct node *temp3,*newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter new data value");
        scanf("%d",&newnode->data);
     if (head == NULL) {
       printf("only one element is present");
       head=tail=newnode;
       newnode->previous=tail;
       newnode->next=head;
        
    }
else{
    
 tail->next=newnode;
 newnode->previous=tail;
 newnode->next=head;
 head->previous=newnode;
 head=newnode;
 
}
       
        
    }
    void mid(){
        int count=0,p;
        printf("enter position");
        scanf("%d",&p);
        struct node *ptemp,*ftemp;
         newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter new data value");
        scanf("%d",&newnode->data);
     if (head == NULL) {
       printf("only one element is present");
       head=tail=newnode;
       newnode->previous=tail;
       newnode->next=head;}
       else if(p==1){
        begin();
       }

       else{
        ptemp=ftemp=head;
        while(count<p-1){
            ptemp=ftemp;
            ftemp=ftemp->next;
            count ++;
        }
        
        newnode->next=ftemp;
        newnode->previous=ptemp;
        ptemp->next=newnode;
        ftemp->previous=newnode;
        }

    }
int main(){
    create();
    display();
    begin();
    display();
    end();
    display();
    mid();
    display();
    return 0;
}