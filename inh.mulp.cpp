#include<iostream>
#include<conio.h>
using namespace std;
class A  
{
	public:
		int x;
		void getx()
		{
			cout<<"Enter the value of x = ";cin>>x;	
		}	
};
class B
{
	public:
		int y;
		void gety()
		{
			cout<<"Enter the value of y = ";
			cin>>y;
		}
};
class C : public A , public B
{
	public:
		int z;
		void mul()
		{
			z=x*y;
			cout<<"The value of x = "<<x;
			cout<<endl<<"The value of y = "<<y;
			cout<<endl<<"the mul = "<<z;
		}
};
int main()
{
	C c1;
	c1.	getx();
	c1.gety();
	c1.mul();
	return 0;
}
