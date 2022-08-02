//implement of virtual function 
#include<iostream>
#include<conio.h>
using namespace std;
class Base 
{
	public:
	int b=10   ;
    virtual void Display()
	{
	//	b=10;
		cout<<"1 value of base class variable b = "<<b<<endl;
	}
};
class Derived : public Base
{
	int d = 20;
	public:
	void Display()
	{
	//	d=20;
		cout<<"2 value of base class variable b = "<<b<<endl;
		cout<<"2 value of derived class variable d = "<<d<<endl;
	}
};
int main()
{
	Base *ptr;
	Base B;
	Derived D;
	cout<<"\nptr is points to base class :- \n";
	ptr = &B;
	ptr->Display();
	cout<<"\nptr is points to derived class :- \n";
	ptr = &D;
	ptr->Display();
	return 0;
}
