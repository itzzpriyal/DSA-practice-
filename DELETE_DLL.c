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
    struct node *temp2;
    temp2=head;
    while(temp2!=NULL){
        printf("%d\n",temp2->data);
        temp2=temp2->next;
    }
    }
    //delete from begin
    void delete_begin(){
        struct node *temp2;
        if(head==NULL){
            printf("no further node can be deleted");
        }
        else{
            temp2=head;
            head=head->next;
            if(head!=NULL){
                head->previous=NULL;
            }
           free(temp2);
         
    }}
    void delete_end(){
        struct node *temp3,*temp4;
         if(head==NULL){
            printf("no further node can be deleted");
        }
         else if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Last node deleted.\n");}
        else{
            temp3=head;
            while(temp3->next!=0){
                temp4=temp3;
                temp3=temp3->next;
            }
          free(temp3);
          temp4->next=NULL;
        }
    }
    /*void delete_end() {
    if (head == NULL) {
        printf("List is empty, no node to delete!\n");
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Last node deleted.\n");
    } else {
        struct node *temp3 = head;
        while (temp3->next != NULL) {
            temp3 = temp3->next;
        }
        temp3->previous->next = NULL;
        free(temp3);
        printf("Last node deleted.\n");
    }
}*/
void mid_delete() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    int p, count = 1;
    printf("Enter the position at which you want to delete the node: ");
    scanf("%d", &p);

    struct node *temp = head;

    // If the position is the first node
    if (p == 1) {
        delete_begin();
        return;
    }

    // Traverse to the node to be deleted
    while (temp != NULL && count < p) {
        temp = temp->next;
        count++;
    }

    // If position is out of bounds
    if (temp == NULL) {
        printf("Position out of bounds!\n");
        return;
    }

    // If it's the last node
    if (temp->next == NULL) {
        delete_end();
        return;
    }

    // For middle nodes
    temp->previous->next = temp->next;
    temp->next->previous = temp->previous;
    free(temp);
    printf("Node at position %d deleted.\n", p);
}
    // void mid_delete(){
    //     struct node* temp4,*temp5,*temp6;
    //     int p;
    //      printf("enter the position at which you want to delete the node");
    // scanf("%d",&p);
    // int count =0;
    // temp4=temp5=temp6=head;
    // if(head==NULL){
    //     printf("list already empty");
    // }
    // else if(p==1){
    //     delete_begin();
    // }
    
    
    // while (count<p){
    //   temp4=temp5;
    //   temp5=temp5->next;
    //   count++;  
    // }
    
    // temp6=temp4->previous;
    // temp6->next=temp5;
    // temp5->previous=temp6;
    // free(temp4);

    
    // }
  
    
    
    //check for dangling pointers
    int main(){
    create();
    display();
    printf("\n");
    delete_begin();
    display();
     printf("\n");
    delete_end();
    display();
    mid_delete();
    display();
    return 0;
}