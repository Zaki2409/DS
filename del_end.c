#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node * next;
};

struct node * insert_beg(struct node * head, int data ) {
    struct node * ptr = NULL;
    ptr = ( struct node *)malloc(sizeof(struct node));
    (*ptr).data = data;
    (*ptr).next = NULL;
    (*ptr).next = head;
    head = ptr ;
    return head;
    
}
void insert_mid ( struct node * head , int data , int pos) {
    struct node * ptr , * ptr2 =NULL;
     ptr2 = head;
    ptr = (struct node *)malloc(sizeof(struct node));
    (*ptr).data= data;
    (*ptr).next = NULL;
   
    pos --;
    while ( pos!=1) {
        ptr2 = (*ptr2).next;
        pos--;
    }
    (*ptr).next= ( *ptr2).next;
    (* ptr2).next = ptr;
    
    
    
}

void insert_end(struct node * head , int data) {
    struct node * ptr , * temp =NULL;
    ptr = ( struct node *)malloc(sizeof(struct node));
    (* ptr).data=data;
    (* ptr).next=NULL;
    temp = head;
    while ( (*temp).next != NULL){
        temp = (* temp).next;
    }
    (*temp).next = ptr;
}


struct node * del_first(struct node * head ) {
struct node * ptr  =NULL;
if(head==NULL){
    printf("the linked list is empty");
}else {
   ptr = head ;
   head = (*head).next;
   free(ptr);
   return head;
} 
}

struct node * del_last ( struct node * head ) {
    if(head ==NULL){
        printf("the linked list is empty");
    }else if ( (*head).next= NULL){
       
        free(head);
        head= NULL;
        
    }
    else{
        
        struct node * temp , * ptr =head;
        while ( (* temp).next!=NULL){
            ptr = temp;
            temp = (*temp).next;
        }
        (*ptr).next = ptr;
        free(temp);
        temp =NULL;
        
    }
    return head;
    
}
void display(struct node * head) {
    struct node * temp;
    if(head == NULL) {
        printf("the linked list is empty");
    }else {
        int count= 0;
        temp = head;
        while ( temp!=NULL) {
            printf("\n%d" , (* temp).data);
            temp = (*temp).next;
            count++;
        }
        printf("\ntotal nodes = %d" , count);
    }
}


int main () {
    struct node * head=NULL;
    head = ( struct node * )malloc(sizeof(struct node));
    (* head).data=25;
    (* head).next = NULL;
    
    
      
   
   //head = del_last(head);
    insert_end(head , 26);
    
    insert_end(head , 27);
    head = del_first(head);
    insert_mid(head , 1, 2 );
     head =  insert_beg(head ,24);
    display(head);
    
   
    
    return 0;
}