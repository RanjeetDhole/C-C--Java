import java.lang.*;
import java.io.*;


class Input3
{
    public static void main(String arg[]) throws IOException
    {   
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter String");
        String str = bobj.readLine ();

        System.out.println("Enter integer");
        int no = Integer.parseInt(bobj.readLine ());

        System.out.println("Enter float");
        float f = Float.parseFloat (bobj.readLine ());

        System.out.println("Enter double");
        double d = Double.parseDouble (bobj.readLine ());

        System.out.println("Enter String is : "+str);
        System.out.println("Enter integer is : "+no);
        System.out.println("Enter float is : "+f);
        System.out.println("Enter double is : "+d);












    }

        
}    