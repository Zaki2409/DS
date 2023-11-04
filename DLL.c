#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node * prev ;
  int data ; 
  struct node * next;
    
};

struct node * beg(struct node * head , int data) {
    struct node * temp , * ptr =NULL;
    temp = (struct node *)malloc(sizeof(struct node));
   
    (* temp).next = NULL;
    (* temp).data = data ;
    (* temp).prev = NULL;
    (* temp).next = head;
    (* head).prev = temp;
   head = temp;
   return head;
} 


 struct node * end ( struct node * head , int data) {
     struct node * temp , * ptr =NULL;
     temp =(struct node *)malloc(sizeof(struct node));
     (* temp).prev = NULL;
     (* temp).data= data;
     (* temp).next =NULL;
     ptr = head ;
     while ( (* ptr).next != NULL){
         ptr = (*ptr).next;
         (* ptr).next = temp;
         (* temp).prev = ptr;
         return head;
     }
     
 }
 
struct node * del(struct node * head) {
    struct node * temp  , * ptr =NULL;
    if( head ==NULL) {
        printf("list is empty");
    }else {
        temp = head;
        while ( (*temp).next!= NULL) {
            temp = (*temp ).next;
        }
        ptr = (* temp).prev;
        (*ptr).next =NULL;
        free (temp);
        head = ptr;
        return head;
        
    }
}
 
void dis(struct node * head) {
    struct node * temp =NULL;
    if ( head ==NULL) {
        printf("DDL is empty");
    }else{
        temp = head;
        while (temp!= NULL) {
            printf("%d\n" , (* temp).data);
            temp = (*temp).next;
        }
    }
    
}
int main() {
    //printf("check");
struct node * head =NULL;
head = (struct node *)malloc(sizeof(struct node));
(* head).prev = NULL;
(* head).data = 0;
(* head).next = NULL;
//printf("check");
head = beg(head , -1);
head = end( head , 1);
dis(head);
head = del(head);
 


    return 0;
}