  //binary operator overloading  using friend function
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
		friend complex operator +(complex o1 , complex o2)
		{
			complex o3;
			o3.a =o1.a+o2.a;
			o3.b=o1.b+o2.b;
			return o3;
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


///sum = operator +(c1,c2);
