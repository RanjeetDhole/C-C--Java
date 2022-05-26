//write a java program which accetps N words from user through command line and display lenghtof that word

import java.lang.*;
import java.util.*;

class StringMax
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a sentence: ");
        String str = sobj.nextLine();
        String words[] = str.split(" ");

        int max = 0 ;

         // max = words[].Length;
      
       
        System.out.println("Maximum Length of the words is : "+max);
     
    
    }
}
