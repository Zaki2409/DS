#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node * next;

};
struct node * insert_beg(struct node * head, int data){

struct node * ptr =NULL;
ptr = (struct node *)malloc(sizeof(struct node));
(* ptr).data =data;
(* ptr).next =NULL;
(* ptr).next = head;
head = ptr;
return head;

}
 
void insert_end(struct node * head , int data) {
   struct node * temp , * ptr =NULL;
   ptr = head;
   temp = (struct node *)malloc(sizeof(struct node));
   (* temp).data = data;
   (* temp).next =NULL;
   while ((*ptr).next= NULL)
   {
    ptr = (* ptr).next;
   }
   (* ptr).next = temp;
   


}

void display(struct node * head) {
    struct node * ptr ;
    if (head == NULL)
    {
        printf("linked list is empty");
    }else {
        ptr = head;
        while (ptr != NULL)
        {
            printf("\n%d" , (* ptr).data);
            ptr = (* ptr).next;
                    }
        
    }

        
}


void insert_pos(struct node * head , int data , int pos) {
    struct node * ptr , *ptr2 =NULL;
    ptr = head;
    ptr2 = (struct node *)malloc(sizeof(struct node));
    (* ptr2).data = data;
    (* ptr2).next = NULL;

    pos--;
    while (pos!=1)
    {
        ptr = (* ptr).next;
        pos--;

    }
    (* ptr2).next = ( * ptr).next;
    ( * ptr).next = ptr2;
     
}
int main() {
    
 int pos;
    printf( "enter position");
    scanf("%d" , &pos);
   // printf("check");
struct node * head= NULL;
head = (struct node*)malloc(sizeof(struct node));
(* head).data=26;
(* head).next=NULL;

printf("check");
insert_end(head , 27);

head = insert_beg( head, 25);
head = insert_beg(head , 24);
head = insert_beg(head , 23);



//printf("check");

insert_pos( head , 1 , pos);
display(head);
//printf("check");
    return 0;
}