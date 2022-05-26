#include<iostream>
using namespace std;

class Number
{
     private: 
     int  iNo;            // Characteristic

     public:
                          //  Behaviour

          void Accept()       // Setter Method
          {
               cout<<"Enter the value: "<<endl;
               cin>>this->iNo;
          }

          void Display()      //Getter Method
          {
               cout<<"Value is: "<<this->iNo<< endl;

          }
          int Factorial()
          {
               int iFact = 1;
               int iCnt = 0;

               for(iCnt= 1 ;iCnt <= iNo ; iCnt++)
               {
                    iFact *=  iCnt;  //iFact = iFact * iCnt;
               }
               return iFact;
          }
};
int main()
{
     Number nobj;
     int iRet = 0;

     //Cout<<nobj.iNo;
     
   
     

     nobj.Accept();
     nobj.Display();

     iRet = nobj.Factorial();

     cout<<"Factorial is : "<<iRet<<endl;

     return 0;
}