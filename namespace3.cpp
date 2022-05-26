#include<iostream>
namespace Marvellous 
{
	void fun()
	{
	std::cout<<"Inside fun Marvellous\n";
	}
}

namespace Infosysteams
{
	void fun()
	{
	std::cout<<"Inside fun Infosysteams\n";
	}
}

int main()
{
	std::cout<<"Jay Ganesh\n";
	
	using namespace Marvellous;
	using namespace Infosysteams;
	
	//fun();  //Ambiguty
	
	Infosysteams::fun();
	
	
return 0;
}