#include <stdio.h>
#include <stdlib.h>


//void print_data(struct node1 * head);


struct node1{
int data;
struct node1 * next;
};



int main() {
struct node1 * head = NULL;
head = (struct node1 *)malloc(sizeof(struct node1));
(* head).data= 1;
(* head).next=NULL;

struct node1 * a = NULL;
a = ( struct node1 *)malloc(sizeof(struct node1));
(* a).data=2;
(* a).next=NULL;
(* head).next=a;

struct node1 * b =NULL;
b = (struct node1 *)malloc(sizeof(struct node1));
(* b).data=3;
(* b).next =NULL;
(* a).next=b;

struct node1 * c = NULL;
c = (struct node1 *)malloc(sizeof(struct node1));
(* c).data = 4;
(* c).next=NULL;
(* b).next=c;


 struct node1 * ptr =NULL;
    if (head == NULL)
    {
        printf("LIST IS EMPTY");
    }else{
         ptr=head;
        while (ptr!=NULL)
        {
            printf("%d" , (* ptr).data);
            ptr = (* ptr).next;
                    }
        
    }
//print_data(head);


    return 0;
}

// void print_data(struct node1 * head){
   
    
// }