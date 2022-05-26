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
     PNODE temp = NULL;

     newn = (PNODE)malloc(sizeof (NODE));     //newn = (struct npde *)malloc(12);

     newn ->data = no;
     newn -> next = NULL;

     if (*head == NULL)   //LL is empty
     {
          *head = newn;
     }
     else    // LL contain atleast one node
     {
          // travel till last node
          // store address of new node in the next pointer of last node;
          temp = *head;
          while(temp -> next != NULL)
          {
               temp = temp -> next;
          }
          temp ->next = newn;
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


  void DeleteFirst(PPNODE head)
  {
       //if LL is empty then return 
       //if LL contain one node then 
       //Store address of second node in the first pointer through head
       // And delete the first

       PNODE  temp  = NULL;

       if(*head == NULL)  // LL contains atleast one node
       {
            return ;
       }
       else  // LL contains 
       {
            temp = *head;
            *head = temp -> next;
            free(temp);

       }
  }

  void DeleteLast(PPNODE head)
  {
       //If LL is empty then return 
       //If LL contain more than  one node then travel till second last node and delete last node
       
       PNODE temp = NULL;

       if(*head == NULL)
       {
            return ;
       }
       else if((*head) -> next == NULL)  //LL contains one node
       {
            free(*head);
            *head = NULL;
       }
       else // //LL contains more than one node
       {
            temp = *head;
            while (temp->next->next!=NULL)
            {
                 temp =temp->next;
            }
            free(temp->next);
            temp->next =NULL;
            
       }
  }
  void InsertAtPos(PPNODE head ,int no,int pos)
  {
       //consider no of nodes are 4

       //if position is invalid return directiy (<1 OR >5)
       //if position is 1 then call insertfirst
       //if position is N+1 then call Insertlast(position is 5)

       int size = 0 ;int iCnt = 0;
       PNODE newn =NULL;
       PNODE temp = NULL;

       size = Count(*head);

       if ((pos < 1)||(pos > (size + 1)))
       {
            printf("Position is invalid\n");
            return ;
       }

       if(pos == 1)
       {
          InsertFirst(head,no);
       }
       else if(pos == (size + 1))
       {
            InsertLast(head,no);
       }
       else 
       {       
           newn = NULL;

          newn = (PNODE)malloc(sizeof (NODE));     //newn = (struct npde *)malloc(12);

          newn ->data = no;
          newn -> next = NULL;

          temp = *head;

          for(iCnt = 1; iCnt < pos-1 ;iCnt++)
          {
               temp =temp-> next;
          }
          newn -> next = temp -> next;
          temp -> next = newn;
       }
  }
  void DeleteAtPos(PPNODE head,int pos)
  {
       {
       //consider no of nodes are 4

       //if position is invalid return directiy (< 1 OR > 4)
       //if position is 1 then call deletefirst
       //if position is N then call Deletetlast(position is 4)

       int size = 0 ;int iCnt = 0;
      
       PNODE temp = NULL;
       PNODE tempdelete = NULL;

       size = Count(*head);

       if ((pos < 1)||(pos > (size)))
       {
            printf("Position is invalid\n");
            return ;
       }

       if(pos == 1)
       {
          DeleteFirst(head);
       }
       else if(pos == (size ))
       {
            DeleteLast(head);
       }
       else 
       {
          
          temp = *head;

          for(iCnt = 1; iCnt < pos-1 ;iCnt++)
          {
               temp =temp-> next;
          }
          tempdelete = temp -> next;
          temp ->next = temp -> next -> next;
          free(tempdelete);
        
       }

  }
}


int main()
{
     PNODE first = NULL;
     int iRet = 0;

     InsertFirst(&first,101);  //call by address
     InsertFirst(&first,51);  //call by address
     InsertFirst(&first,21);   //call by address
     InsertFirst(&first,11);    //call by address

     InsertAtPos(&first,75,3);

     DeleteAtPos(&first,3);
   
     Display(first); //Call by value

     iRet = Count(first);
     printf("Number of elements are:  %d\n",iRet);

     InsertFirst(&first,1);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);
  

    Display(first);
     Display(first);

     iRet=Count(first);
     printf("Number of nodes are: %d\n",iRet);

    
    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    DeleteLast(&first);
    Display(first);

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

     return 0;
}