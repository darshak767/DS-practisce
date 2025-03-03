#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next; //self calling structure 
};

void llTriversal(struct Node *ptr){
    while(ptr != '\0'){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}


struct Node *insertIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i=0;

    while(i != index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

void main(){
    struct Node * head; 
    struct Node * second; 
    struct Node * third; 

    head = (struct Node*) malloc(sizeof (struct Node));
    second = (struct Node*) malloc(sizeof (struct Node));
    third = (struct Node*) malloc(sizeof (struct Node));

    head->data = 44;
    head->next = second;

    second->data = 54;
    second->next = third;

    third->data = 66;
    third->next = NULL;

    printf("Before the insertion:- \n");
    llTriversal(head);

    head = insertIndex(head, 555, 1);

    printf("After the insertion :- \n");
    llTriversal(head);
}