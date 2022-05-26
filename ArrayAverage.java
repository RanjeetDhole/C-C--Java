import java.lang.*;
import java.util.*;

class ArrayAverage
{
    public static void main(String arg[])
    {
        int iCnt = 0;
        System.out.println("How many numbers you want to enter");

        Random sobj = new Random.nextInt();
          iCnt  = Random .nextInt();
         
         double[] Arr = new double[iCnt];
         double total = 0;

         for (int i = 0; i < Arr .length;i++)
         {
             System.out.println("Enter Element No: "+(i + 1)+": ");
             Arr[i] = Random .nextDouble();

         }
         Scanner .close();

         for(int i = 0;i <Arr.length; i++ )
         {
             total = total + Arr[i];
         }
         double average = total / Arr.length;

         System.out.format("The average is: %.3f",average);



 
     }


}
     