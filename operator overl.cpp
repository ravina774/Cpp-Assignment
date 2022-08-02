 //binary operator overloading 
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	private :
		int a,b;
	public:
		void input()
		{
			cout<<"Enter the value of a = ";
			cin>>a;
			cout<<"Enter the value of b = ";
			cin>>b;
		}
		complex operator +(complex obj)
		{
			complex c;
			c.a =a+obj.a;
			c.b=b+obj.b;
			return c;
		}
		void diplay()
		{
			cout<<a<<" + "<<b<<"\n";
		}
};
int main()
{
	complex c1,c2,sum;
	c1.input();
	c2.input();
	sum = c1+c2;
	cout<<"Enter the values = ";
	c1.diplay();
	cout<<"Enter the values = ";
	c2.diplay();
	cout<<"The sum is = ";
	sum.diplay();
	return 0;
}
