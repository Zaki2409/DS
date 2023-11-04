#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct node  {
int data;
struct node * next;

};  

void insert_beg(struct node * head , int data) {
struct node * temp = NULL;
temp  =  (struct node * )malloc(sizeof(struct node));
(* temp).data = data;
(* temp).next = NULL;
}

int main() {
struct node * head = NULL;
head = (struct node * )malloc(sizeof(struct node));


    return 0;
}
    