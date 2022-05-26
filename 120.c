#include<stdio.h>
#include<stdlib.h>
struct node

{
     int data;
     struct node *next;

};
typedef struct node NODE;
typedef  struct node *PNODE;
typedef  struct node **PPNODE;

 void InsertFirst(PPNODE head,int no)
{
     //Allocate memory for node 
     //Initilize that node

     //Check wherther LL is empty or not
     //If LL is empty then new node is first node so update itsaddress in first pointer through head
     
     //If LL is not empty then store the address of first node in the next in the next pointer of our new node
     //update the first pointer through head

     PNODE newn =NULL;

     newn = (PNODE)malloc(sizeof (NODE));     //newn = (struct npde *)malloc(12);

     newn ->data = no;
     newn -> next = NULL;

     if (*head == NULL)   //LL is empty
     {
          *head = newn;
     }
     else    // LL contain atleast one node
     {
          newn ->next = *head ;
          *head = newn ;
     }

  }
  void InsertLast(PPNODE head,int no)
  {
     //Allocate memory for node (dynamically)
     //Initilize that node

     //Check wherther LL is empty or not
     //If LL is empty then new node is first node so update itsaddress in first pointer through head
     
     //If LL is not empty then 
     //travel till last node of LL;
     //store the address of new node in the next pointer of last node 

     PNODE newn =NULL;

     newn = (PNODE)malloc(sizeof (NODE));     //newn = (struct npde *)malloc(12);

     newn ->data = no;
     newn -> next = NULL;

     if (*head == NULL)   //LL is empty
     {
          *head = newn;
     }
     else    // LL contain atleast one node
     {

     }


  }
  void Display(PNODE head)
  {
       printf("Elements from linked list are: \n");
     while(head != NULL)
     {
          printf("|%d |->",head -> data);
          head = head -> next;
     }
     printf("NULL\n");

  }
  int Count(PNODE head)
  {
       int iCnt = 0;
       
     while(head != NULL)
     {
        head = head -> next;
        iCnt++;
     }
     return iCnt++;

  }

int main()
{
     PNODE first = NULL;
     int iRet = 0;

     InsertFirst(&first,101);  //call by address
     InsertFirst(&first,51);  //call by address
     InsertFirst(&first,21);   //call by address
     InsertFirst(&first,11);    //call by address
     InsertFirst(&first,1); 
     

     Display(first); //Call by value

     iRet = Count(first);
     printf("Number of elements are:  %d\n",iRet);


     return 0;
}