//Accept Number and get it on and else off and get on
// 0000 0100 0000 0000 0010 0000 0000 0000 
// 0     0    0    0          0   0   0
import java.lang.*;
import java.util.*;

class Program198
{
     public static void main(String rag[])
     {
          Scanner sobj = new Scanner(System.in);

          System.out.println(" Enter number");
          int iValue = sobj.nextInt();

          Bitwise bobj = new Bitwise();
          int iRet = bobj.OnBit(iValue);
          System.out.println("Update Number is: "+iRet);

        
     }
}

class Bitwise
{
       public int OnBit(int iNo)    //4
       {
          int iMask = 0X04000000;
          int iResult = 0;

          iResult = iNo | iMask;
          return iResult;

         
       }
}

/*
Decimal       Hexadecimal                      Binary
0                      0                        0000
1                       1                       0001
2                       2                       0010
3                       3                       0011
4                       4                       0100
5                       5                       0101
6                       6                       0110
7                       7                       0111
8                       8                       1000
9                       9                       1001
10                      A                      1010
11                      B                      1011
12                      C                       1100
13                      D                      1101
14                      E                      1110
15                      F                       1111

*/