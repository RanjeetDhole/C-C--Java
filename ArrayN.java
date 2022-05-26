import java.lang.*;
import java.util.*;

class ArrayN
{
    public static void main(String arg[])

    {
        int iCnt = 0;
        int max;
  

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of elements");
         iCnt = sobj.nextInt();

        int Arr[] = new int [iCnt];

        System.out.println("Enter the elements of array: ");
        for(int i= 0; i < iCnt ;i++)
        {
        
            Arr[i]=sobj.nextInt();
        }
        max  = Arr[0];
        for(int i = 0; i < iCnt; i++)
        {
            if(max < Arr[i])
            {
                max = Arr[i];
            }
        }
        System.out.println("Maximum value of array is : "+max);
  
    }

}