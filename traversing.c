#include <stdio.h>
#include <stdlib.h>


struct node1 {
    int data;
    struct node *next;
};
void count_of_node( struct node1 *head) {
    int count=0;
    if(head ==NULL) {
        printf("linkd list is empty");

    }else{
        struct node1 *temp;
        temp = head;
        while (temp != NULL)
        {
            /* code */
            count++;
            temp = temp->next;
        }
        printf("the number of node are %d ", count);
        
    }

}

int main() {
struct node1 *head= NULL;
head= (struct node1 *)malloc(sizeof(struct node1 ));
head->data = 26;
head->next=NULL;

struct node1 *a = NULL;
a = ( struct node1 *)malloc(sizeof(struct node1));
a->data=27;
a->next=NULL;
(*head).next=a;

struct node1 *b = NULL;
b = (struct node1*)malloc(sizeof( struct node1));
b->data=28;
b->next=NULL;
a->next=b;

count_of_node(head);

    return 0;
}