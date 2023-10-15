#include <stdio.h>
#include <stdlib.h>

struct node {

int data;
struct node * next;

};

void at_end ( struct node * head , int data) {

struct node * ptr , * temp =NULL;
ptr = head;
temp = ( struct node * )malloc(sizeof(struct node));
(* temp).data = data;
(* temp).next =NULL;

while ((*ptr).next != NULL)
{
    ptr = (* ptr).next;
}
(* ptr).next = temp;

}

struct node * at_beg(struct node * head , int data) {
struct node * ptr = NULL;
ptr = (struct node *)malloc(sizeof(struct node));
(* ptr).data =data;
(* ptr).next =NULL;
(* ptr).next = head;
head = ptr;
return head;

}

void at_pos(struct node * head , int data , int pos) {
struct node * ptr , * ptr2 =NULL;
ptr = head;
ptr2 = (struct node *)malloc(sizeof(struct node));
(* ptr2).data=data;
(* ptr2).next=NULL;

pos--;
while (pos != 1)
{
    ptr = (* ptr).next;
    pos--;
}
(* ptr2).next = (* ptr).next;
( * ptr).next = ptr2;





}

void display(struct node * head) {
    if(head == NULL) {
        printf("linked list is empty");
     }else {
        struct node * ptr =NULL;
        ptr = head;
        while (ptr != NULL)        {
            printf("\n%d" , (* ptr).data);
            ptr = (* ptr).next;
        }
        
     }

}


struct node * del_first(struct node * head) {
    if (head = NULL)
    {
        printf("linked list is empty");
    } else{
        struct node * temp = NULL;
        temp = head;
        head = (* head).next;
        free(temp);
    }
     return head;

}
int main() {
 int pos;
    printf("enter pos");
    scanf("%d" , &pos);
struct node * head = NULL;
head = (struct node * )malloc(sizeof(struct node));
( * head).data =25;
(* head).next =NULL;
//printf("check");


//printf("check");

head = del_first(head);
printf("check");
head = at_beg( head , 24);
at_pos(head , 1 , pos );
at_end(head , 26);

//printf("check");

//printf("check");
//printf("before deleting");
display(head);
printf("check");

//printf("after deleting");


    return 0;
}