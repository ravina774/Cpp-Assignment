#include<iostream>
using namespace std;
class Base 
{
	int a;
	public:
		void getvalue()
		{
			cout<<"Enter the value of a = ";cin>>a;
		}
		int getA()
		{
			return a;
		}	
};
class Derived : public Base
{
	int b;
	public:
	void getB()
	{
		cout<<"Enter the value of b = ";cin>>b;
	}
		void multiple()
		{
			cout<<"A * B  = "<<b*getA();
		 } 
};
int main()
{
	Derived d1;
	d1.getvalue();
	d1.getB();
	d1.multiple();
	return 0;
}
