#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

void main()
{
    struct node* A = (struct node*)malloc(sizeof(struct node));  // (type)malloc(sizeof(struct node))
    struct node* B = (struct node*)malloc(sizeof(struct node)); 
    struct node* C = (struct node*)malloc(sizeof(struct node)); 
    struct node* D = (struct node*)malloc(sizeof(struct node)); 

    A->data=9;
    A->link =B;

    B->data=8;
    B->link =C;

    C->data=5;
    C->link =D;

    D->data=4;
    D->link =NULL;
    struct node *ptr=A;
    for(ptr==NULL; ptr=ptr->link;)
    {
        printf("%d ", ptr->data);
    }



}