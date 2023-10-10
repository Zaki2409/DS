#include <stdio.h>
#include <stdlib.h>

struct node1{
    int data;
    struct node *next;
};

int main() {
struct node1 *head = NULL;
head =(struct node1 *)malloc(sizeof(struct node1));
(* head).data=26;
(* head).next= NULL;

struct node1* current = NULL;
current = (struct node1 *)malloc(sizeof(struct node1));
(* current).data=27;
(* current).next=NULL;
(* head).next=current;

struct node1* current1 = NULL;
current1 = (struct node1 *)malloc(sizeof(struct node1));
(* current1).data = 28;
(* current1).next=NULL;
(* current).next= current1;

printf("%d" , (* head).data);
    return 0;
}