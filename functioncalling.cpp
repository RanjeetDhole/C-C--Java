#include<iostream>
using namespace std;

void CallValue(int no)
{
no++;
}
void CallAddress(int *p)
{
(*p)++;
}
void CallReference(int &ref)
{
ref++;
}

int main()
{
	int a = 10, b = 10, c = 10;
	
	CallValue(a); //Callvalue(10);//10
	cout<<a<<"\n";
	
	CallAddress(&b); //CallAddress(200);//11
	cout<<b<<"\n";
	
	CallReference(c); //CallReference(c);//11
	cout<<c<<"\n";
	
return 0;

}
	
	