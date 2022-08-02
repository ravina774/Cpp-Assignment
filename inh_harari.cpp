#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public :
		int x,y;
		void getdata()
		{
			cout<<"Enter the value of x = ";cin>>x;
			cout<<"Enter the value of y = ";cin>>y;
		}
};
class B : public A
{
	public:
		void mul()
		{
			cout<<"X * Y = "<<x*y<<endl;
		}
};
class C : public A
{
	public:
		void sum()
		{
			cout<<"X + y = "<<x+y<<endl;
		}
};
int main()
{
	C c1;
	B b1;
	c1.getdata();
	c1.sum();
	b1.	getdata();
	b1.	mul();
	return 0;
}
