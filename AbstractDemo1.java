import java.lang.*;

abstract class Demo
{
	public int i, j ;
	
	public Demo()
	{
		
		System.out.println("Demo constrructor");
		
		
	}
	public void fun()         //Abstract virtual void gun()=0;
	{
		
		System.out.println("Demo fun");	
		
	}
	public abstract void gun();	
}
class Hello extends Demo
{
	public int x,y;
	public Hello()
	{
		
	System.out.println("Hello constructor");
			
	}
	
	public void sun()   //concrete
	{
		
		System.out.println("Hello sun");	
		
	}
	public void gun()   //concrete
	{
		
		System.out.println("Hello gun");	
		
	}
}

class AbstractDemo1
{
	public static void main(String a[])
	{
		//Demo dobj = new Demo();
	//	dobj = new Demo();
		
		Hello hobj = new Hello();
		hobj.fun();
		hobj.gun();
		hobj.sun();	
	}
}