#include<stdio.h>
#include<stdlib.h>


// Structure declaration
struct node
{
    int data;               //4
    struct node*next;      //8
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// juna naw  Nawin naw
// struct node  NODE
// struct node  PNODE
// struct node  PPNODE

int main()
{
    // static memory allocation
     NODE obj;

    // Dynamic memory allocation

    PPNODE ptr = (PPNODE)malloc(sizeof(NODE));

    obj.data = 11;  //Direct accessing operator
    obj.next = NULL;  

    ptr->data = 11; //Indirect accessing operator ->
    ptr->next = NULL;

    return 0;
}