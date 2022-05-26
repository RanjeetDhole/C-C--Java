import java.lang.*;

class AbstractDemo
{
	public static void main(String a[])
	{
		
		PNB pobj = new PNB();
		SBI sobj = new SBI();
		
		
		pobj.Credit(1000);
		pobj.Debit(200);

		sobj.Credit(50000);
		sobj.Debit(8000);
		
		
		System.out.println(pobj.Balance);  //800
		System.out.println(sobj.Balance);  //42000
		
	}

}




abstract class RBI
{
	public int Balance;
	public RBI()
	{
		this.Balance = 0;
		
		
	}
	
	public void Credit(int Amount)
	{
		
		this.Balance = this.Balance + Amount;
		
	}	
		
	public void Debit(int Amount)
	{
		
		this.Balance = this.Balance - Amount;
		
	}
		
		public abstract int CalculateIntrest();
}

class SBI extends RBI
{
	public int AccountNumber;
	public int Ifsc;
	
	public int CalculateIntrest()
	{
		
		return 6;
		
	}
	
	
	
}

class PNB extends RBI
{
	public int AccountNumber;
	public int Ifsc;
	
	public int CalculateIntrest()
	{
		
		return 7;
		
	}
	
	
	
}
























