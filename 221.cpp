//Data Structure

#include<iostream>
using namespace std;

template<class T>
struct node
{
     T data;
     struct node *next;
};

template<class T>
class SinglyLL
{
     public:
          struct node<T> *Head;
          int Count;

          SinglyLL();
          void InsertFirst(T);
          void InsertLast(T);
          void Display();
          int CountNode();
          void DeleteFirst();
          void DeleteLast();
          void InsertAtPos(T,T);
          void DeleteAtPos(T);
};

template<class T>
SinglyLL<T>::SinglyLL()
{
     Head = NULL;
     Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
     struct node<T> *newn = NULL;
     newn = new node<T>;

     newn->data = no;
     newn->next = NULL;

     if(Head ==NULL)
     {
          Head = newn;
     }
     else
     {
          newn->next =Head;
          Head = newn;
     }
     Count++;
}
template<class T>
void SinglyLL<T>::InsertLast(T no)
{
     struct node<T> *newn = NULL;
     newn = new node<T>;

     newn->data = no;
     newn->next = NULL;

     if(Head ==NULL)
     {
          Head = newn;
     }
     else
     {
          struct node<T>*temp = Head;
          while(temp ->next !=NULL)
          {
               temp = temp->next;
          }
          temp->next = newn;
     }
     Count++;
}

template<class T>
void SinglyLL<T>::Display()
{
     cout<<"Elements from Linked List are: "<<endl;
     struct node<T>*temp = Head;

     while(temp!= NULL)
     {
          cout<<temp->data<<" ";
          temp = temp->next;
     }
     cout<<endl;
}

template<class T>
int  SinglyLL<T>::CountNode()
{
     return Count;
}
template<class T>
void SinglyLL<T>::DeleteFirst()
{
     struct node<T> *temp = NULL;

      struct node<T>*newn= Head;

     if(Head == NULL)  // LL contains atleast one node
       {
            Head = newn;
       }
       else  // LL contains 
       {
            temp = Head;
            Head = temp -> next;
       }
     

}
template<class T>
void SinglyLL<T>::DeleteLast()
{
     struct node<T> *temp = NULL;
     struct node<T> *newn = NULL;
      newn = new node<T>;

      if(Head ==NULL)
     {
          Head = newn;
     }
     else if(Head->next == NULL)
     {
        Head = NULL;
     }
     else
     {
          struct node<T>*temp = Head;

          while(temp->next->next!=NULL)
          {
               temp =temp->next;
          }
          temp->next  = NULL;
     }

}
template<class T>
void SinglyLL<T>:: InsertAtPos(T,T)
{
     int size = 0;int iCnt = 0; int pos = 0;
     struct node<T> *temp = NULL;
     struct node<T> *newn = NULL;

     size = CountNode(Head);

     if(pos == 1)
     {
         InsertFirst(Head,T); 
     }
     else if(pos==(size + 1))
     {
          InsertLast(Head,T)
     }
     else
     {
          newn = NULL;

          newn->data  = T;
          
     }

}

int main()
{
     SinglyLL<int>obj1;

      SinglyLL<float>obj2;

      obj1.InsertFirst(21);
      obj1.InsertFirst(11);
      obj1.InsertLast(51);
      obj1.InsertLast(101);

     obj1.Display();
     cout<<"Number of nodes are: "<<obj1.CountNode()<<endl;

     obj1.DeleteFirst();

     obj1.Display();
     cout<<"Number of nodes are: "<<obj1.CountNode()<<endl;

     obj1.DeleteLast();

     
     obj1.Display();
     cout<<"Number of nodes are: "<<obj1.CountNode()<<endl;
   


     obj2.InsertFirst(21.11);
     obj2.InsertFirst(11.11);
     obj2.InsertLast(51.11);
     obj2.InsertLast(101.11);

      obj2.Display();
     cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;

     return 0;
}