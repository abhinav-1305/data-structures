#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node() {
    struct node *temp; int data1;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&data1);
    temp->data=data1;
    temp->next=NULL;
    
}

void insert_beg(struct node **head) {
    struct node *ptr;
    ptr=create_node();
    ptr->next=*head;
    *head=ptr;
}

void insert_end(struct node **head) {
    struct node *ptr,*temp;
    ptr=*head;
    while((ptr->next)!=NULL) {
        ptr=ptr->next;
    }
    temp=create_node();
    ptr->next=temp;   
}

void insert_mid(struct node **head,int i) {
    if(i==1) {
        insert_beg(head);
    }
    else {
    struct node *ptr,*temp;
    ptr=*head;
    temp=create_node();
    for(int j=0;j<i-2;j++) {
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    }
}

void display(struct node *head) {
    struct node *ptr;
    ptr=head;
    if(ptr==NULL) {
        printf("\nEmpty Linked List");
    }
    else {
        printf("\nValues: ");
        while(ptr!=NULL) {
            printf(" %d ",ptr->data);
            ptr=ptr->next;
        }
    }
}

void delete_beg(struct node **head) {
    struct node *ptr,*temp;
    if(*head==NULL) {
        printf("List is Empty\n");
    }
    else {
        ptr=*head;
        *head=(*head)->next;
        free(ptr);
    }
}

void delete_end(struct node **head) {
    struct node *ptr, *temp;
    if(*head==NULL) {
        printf("List is Empty\n");
    }
    else if((*head)->next==NULL) {
        free(*head);
        *head=NULL;
    }
    else {
        ptr=*head;
        temp=*head;
        while((temp->next)!=NULL) {
            ptr=temp;
            temp=temp->next;
        }
        free(temp);
        ptr->next=NULL;
    }
}

void delete_specific(struct node **head,int pos) {
    struct node *ptr, *temp;
    if(*head==NULL) {
        printf("List is Empty\n");
    }
    else if((*head)->next==NULL) {
        free(*head);
        *head=NULL;
    }
    else {
        ptr=*head;
        temp=*head;
        for(int i=0;i<pos-1;i++) {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=temp->next;
        free(temp);
    }
}



void main() {
    struct node *head=NULL;
    while(1) {
        printf("\n1.Insert Beg  2.Insert Mid  3.Insert End  4.Display 5.Delete Beg 6.Delete End 7.Delete Specific\n");
        int c;
        scanf("%d",&c);
        
        if(c==1) {
            insert_beg(&head);
        }
        else if(c==2) {
            printf("where do u want to add a node?: ");
            int pos;
            scanf("%d",&pos);
            insert_mid(&head,pos);
        }
        else if(c==3) {
            insert_end(&head);
        }
        else if(c==4) {
            display(head);
        }
        else if(c==5) {
            delete_beg(&head);
        }
        else if(c==6) {
            delete_end(&head);
        }
        else if(c==7) {
            printf("where do u want to delete a node?: ");
            int pos1;
            scanf("%d",&pos1);
            delete_specific(&head,pos1);
        }
        
        else {
            exit(0);
        }
        
    }
}
