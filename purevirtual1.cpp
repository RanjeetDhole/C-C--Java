#include<iostream>
using namespace std;

class Base
{
public:
	int x,y;
	
	//1000
	void fun()    //concrete non virtual
	{
	cout<<"Base fun\n";
	}
	
	//2000
	 virtual void gun()    //concrete virtual
	{
	cout<<"Base gun\n";
	}
	
	//3000
	 virtual void sun()    //concrete non virtual
	{
	cout<<"Base sun\n";
	}
	
	//_______
	virtual void run() = 0; //abstract function

};

class Derived : public Base
{
	public:
		int i,j;
	//4000
	void fun()  //Redefination concrete function
	{
	cout<<"Derived fun\n";
	}
	//5000
	virtual void gun() //Overridin
	{
		cout<<"Derived gun\n";
	}
	//6000
	void run() //concrete function
	{
		cout<<"Derived run\n";
	}

	
};

int main()
{
// Base bobj;  //not allowed
Derived dobj;  //Allowed

Base *bp = NULL;
bp = &dobj; //upcasting

cout<<sizeof(Base)<<"\n";
cout<<sizeof(Derived)<<"\n";

bp->fun();
bp->gun();
bp->sun();
bp->run();

return 0;

}


