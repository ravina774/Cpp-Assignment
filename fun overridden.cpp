//implement of function overridden
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	public:
		void print()
		{
			cout<<"\nBase Function \n";
		}
};
class Derived : public Base
{
	public:
		void print()
		{
			cout<<"\nDerived Function \n";
		}
};
int main()
{
	Derived d1,d2;
	d1.print();
	// access print() function of the Base class
	d2.Base::print();
	return 0;
}
