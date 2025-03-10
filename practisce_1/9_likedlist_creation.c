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

    llTriversal(head);
}