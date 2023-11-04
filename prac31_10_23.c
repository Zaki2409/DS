#include <stdio.h>
#include <stdlib.h>


struct  node {
  int data;
  struct node *next;
    
};

struct node * beg(struct node * head , int data) {
    struct node  * temp =NULL;
    temp = (struct node *)malloc(sizeof( struct node));
    (* temp).data = data;
    (* temp).next = NULL;
    (* temp).next = head;
    //head = temp;
    return  temp; // head;
    
}

void end( struct node * head , int data) {
    struct node * temp1 , * temp2 =NULL;
    temp1 = (struct node *)malloc(sizeof(  struct node));
    (* temp1).data= data;
    (* temp1).next = NULL;
    temp2 = head;
    while((* temp2).next != NULL) {
        temp2 = (* temp2).next;
        
    }
    (* temp2).next = temp1;
    
}


void mid(struct node * head , int data , int pos) {
    struct node * t1, * t2  = NULL; 
    t1 = (struct node *)malloc(sizeof(  struct node));
    (* t1).data =data;
    (* t1).next = NULL;
    t2 = head;
    
    pos--;
    while( pos != NULL) {
        t2 = (* t2).next;
        pos--;
    }
    (* t1).next= t2 ; // (* t2).next
    // t
}

void display(struct node * head) {                
    struct node * temp ;
    if ( head == NULL ) {
        printf(" list is mty");
    }
    else {
        temp = head;
        while ( temp != NULL ) {
            printf("\n%d" , ( * temp).data);
            temp = (* temp).next;
        }
    }
    
}


int main () {
    struct node * head = NULL;
    head = (struct node *)malloc(sizeof(  struct node));
    (* head).data=1;
    (* head).next =NULL;
    //begginning 
    head = beg ( head , 0);
     head = beg ( head , -1);
    //end
    end(head , 2);
    //mid
    mid(head , 3 , 1);
    //diaplay
    display(head);
    
    
    
    return 0;
}
