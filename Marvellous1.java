import java.lang.*;

class Demo
{
	public int i;
	public int j;
	
	public void fun()
	{
	System.out.println("Inside fun");
	}
	
	public void gun()
	{
	System.out.println("Inside gun");
	}

}




class Marvellous1
{

	public static void main(String arr[])
	{
	
	System.out.println("Inside main");
	Demo obj = new Demo();
	
	obj.fun();  //fun(obj);
	obj.gun(); //gun(obj);

	}
}