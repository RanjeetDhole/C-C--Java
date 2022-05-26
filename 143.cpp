// c++
#include<iostream>
using namespace std;

class ArrayX
{
     private:
     int *Arr;
     int iSize;

     public:
     ArrayX(int iValue)              // Parametrised Constructor
     {
          this->iSize = iValue;
          Arr = new int[iSize];      //Resoure

     }
 
     ~ArrayX()                      //Destructor
     {
          delete []Arr;       //Deallocate the resource
     }

     void Accept()          // void Accepts(ArrayX *this)
     {
          int iCnt = 0;

          cout<<"Enter the elements"<<endl;
          for(iCnt = 0;iCnt < iSize;iCnt++)
          {
               cin>>Arr[iCnt];
          }
     }
     void Display()       
     {
          int iCnt = 0;

          cout<<"Enter of Array are"<<endl;
          for(iCnt = 0;iCnt < iSize;iCnt++)
          {
               cout<<Arr[iCnt]<<endl;
          }
     }
     int Summation()
     {
          int iSum = 0,iCnt = 0;

          for(iCnt = 0;iCnt < iSize ; iCnt++)
          {
               iSum = iSum + Arr[iCnt];
          }
          return iSum;
     }
     
};
int main()
{
     int iRet =  0;
     ArrayX obj1(5);

     obj1.Accept();      // Accept(&obj1)  Accept(100)
     obj1.Display();     //Display(&obj1)  Display(100)

     iRet = obj1.Summation();

     cout<<"Addition is : "<<iRet<<endl;




     return 0;
}