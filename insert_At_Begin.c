/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
    
};

void count_Node( struct node *head) {
   
    int count=0;
    if(head ==NULL){
        printf("linked list is empty");
        } else {
             struct node * ptr;
            ptr = head;
            while(ptr!=NULL) {
                count ++;
                ptr = (* ptr).next;
                
                
            }
            printf("%d" , count);
        }
}


void display( struct node * head){
     //printf("check");
     struct node * ptr;
    if(head == NULL) {
        printf("the linkes list is empry to display");
    }else {
        ptr = head;
        while(ptr!=NULL){
            printf("%d\n" , (* ptr).data);
            ptr = (* ptr).next;
        }
        
    }
    
}


void insert_end ( struct node * head , int data) {
    if(head == NULL){
        printf("linked list is empty");
    }else {struct node * temp , * ptr;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    (* temp).data = data;
    (* temp).next = NULL;
    while((* ptr).next != NULL){
        ptr = (* ptr).next;
        }
        (* ptr).next = temp;
        
    }
    
}

void insert_at_beg(struct node * head , int data){
    
    struct node * ptr =NULL;
    ptr = (struct node *)malloc(sizeof(struct node));
    (* ptr).data = data;
    (* ptr).next = NULL;
    (* ptr).next = head;
    head = ptr;
    
    printf("\n%d" , (* ptr).data);
}

int main() {
    //printf("check");
    struct node *head = NULL;
    head= (struct node *)malloc(sizeof(struct node));
    (* head).data=25;
    (* head).next =NULL;
    // printf("check");
     
    struct node *a = NULL;
    a = ( struct node *)malloc(sizeof(struct node));
    (* a).data=26;
    (* a).next = NULL;
    (* head).next= a;
    //printf("check");
     struct node *b = NULL;
    b = ( struct node *)malloc(sizeof( struct node));
    (* b).data=27;
    (* b).next=NULL;
    (* a).next = b;
    
     //printf("check");
   insert_at_beg(head , 23);
    insert_at_beg(head , 24);
    //printf("check");
    
    insert_end( head , 29);
    
    // printf("check");
    printf("\n");
    //printf("check");
    display(head);
    count_Node(head);
    
    
    return 0;
}




// // Online C compiler to run C program online
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//   int data;
//   struct node * next;
// };

// struct node * insert_Beg(struct node * head , int data) {
//     struct node * ptr = NULL;
//     ptr = (struct node *)malloc(sizeof(struct node));
//     (* ptr).data = data;
//     (* ptr).next = NULL;
//     (* ptr).next = head;
//     head = ptr;
//     return head;
    
    
// }
// void display(struct node * head){
//     if(head ==NULL) {
//         printf("liunked list is emoty");
//     }else {
//         struct node * temp;
//         temp = head;
//         while( temp!= NULL) {
//             printf("\n%d" , (* temp).data);
//             temp = (* temp).next;
//         }
//     }
    
    
// }

// int main() {
//  struct node * head = NULL;
//  head = (struct node *)malloc(sizeof(struct node));
//  (* head).data = 25;
//  (* head).next = NULL;
 
//  struct node * a = NULL;
//  a = (struct node *)malloc(sizeof(struct node));
//  (* a).data=26;
//  (* a).next=NULL;
//  (* head).next = a;
//   struct node * b = NULL;
//   b = (struct node *)malloc(sizeof(struct node));
//   (* b).data = 27;
//   (* b).next = NULL;
//   (* a).next =b;

//   head = insert_Beg(head , 24);
//     head = insert_Beg(head , 23);
//   display(head);
  

//     return 0;
// }