//Aceept function and Display

#include<iostream>
using namespace std;
class ArrayX
{
     public:
     int *Arr;
     int Size;

     ArrayX(int Value)
     {
          Size = Value;
          Arr = new int[Size];
     }
     ~ArrayX()
     {
          delete []Arr;
     }
     void Accept()
     {
          cout<<"Enter the vales: "<<endl;

          for(int i = 0;i < Size; i++)
          {
               cin>>Arr[i];
               
          }
     }
      void Display()
     {
          cout<<" vales are : "<<endl;

          for(int i = 0;i < Size; i++)
          {
               cout<<Arr[i];
               
          }
     }
};

int main()
{
     ArrayX obj1(5);
     obj1.Accept();
     obj1.Display();

     return 0;
}