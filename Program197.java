// 0000 0000 0000 0000 0010 0000 0000 0000 
// 0     0    0    0     2     0   0   0


import java.lang.*;
import java.util.*;

class Program196
{
     public static void main(String rag[])
     {
          Scanner sobj = new Scanner(System.in);

          System.out.println(" Enter number");
          int iValue = sobj.nextInt();

          Bitwise bobj = new Bitwise();
          boolean bRet = bobj.CheckBit(iValue);

          if(bRet == true)
          {
               System.out.println("Bit is on");
          }
          else
          {
               System.out.println("Bit is off");
          }
     }
}
class Bitwise
{
       public boolean CheckBit(int iNo)
       {
          int iMask =0X00002000;
          int iResult = 0;

          iResult = iNo & iMask;

          if(iResult==0)
          {
               return false;
                         
          }
          else
          {
               return true; 
          }
       }
}



