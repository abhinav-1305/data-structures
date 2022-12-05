#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head;

void beginsert() {
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL) {
        printf("\nOVERFLOW");
    }
    else {
        printf("\nEnter value: ");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\nNode Inserted");
    }
}
void lastinsert() {
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL) {
        printf("\nOVERFLOW");
    }
    else {
        printf("\nEnter value: ");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL) {
            ptr->next=NULL;
            head=ptr;
            printf("\nNode Inserted");
        }
        else {
            temp=head;
            while((temp->next)!=NULL) {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("\nNode Inserted");
        }
    }
}
