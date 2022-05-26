#include<iostream>
using namespace std;

void callByValue(int a)
{
cout<<"callByvalue"<<endl;
a++;
}

void callByReference(int &b)
{
cout<<"CallByReference"<<endl;
b++;
}

void callByAddress(int *c)
{
cout<<"CallByAddress"<<endl;
(*c)++;
}
int main()
{
int a = 10;
cout<<"\nValue of variable before function call"<<a<<endl;

callByValue(a);
cout<<"Value of variable before function call"<<a<<endl;

int b = 10;
cout<<"\nValue of variable before function call"<<b<<endl;

callByReference(b);
cout<<"Value of variable before function call"<<b<<endl;

int c = 10;
cout<<"\nValue of variable before function call"<<c<<endl;

callByAddress(&c);
cout<<"Value of variable before function call"<<c<<endl;

return 0;

}