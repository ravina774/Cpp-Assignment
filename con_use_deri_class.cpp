#include<iostream>
using namespace std;
class Base1
{
	int a,b,sum;
	public:
		Base1(int m, int n)
		{
			a=m;
			b=n;
			cout<<"Base1 constructor is called \n";
		}
		void print_B1()
		{
			cout<<"value of a = "<<a<<endl;
			cout<<"value of b = "<<b<<endl;
			sum = a+b;	
			cout<<"sum = "<<sum<<endl;
		}	
};
class Base2
{
	int a,b,sub;
	public:
		Base2(int m, int n)
		{
			a=m;
			b=n;
			cout<<"Base2 constructor is called \n";
		}
		void print_B2()
		{
			cout<<"value of a = "<<a<<endl;
			cout<<"value of b = "<<b<<endl;
			sub = a-b;	
			cout<<"sub = "<<sub<<endl;
		}	
};
class Derived : public Base1 , public Base2
{
	int a,b,mul;
	public:
		Derived(int c, int d,int e , int f , int g , int h) : Base1(c,d) , Base2(e,f) 
		{
			a=g;
			b=h;
			cout<<"Derived class called \n";
		}
		void print_der()
		{
			cout<<"value of a = "<<a<<endl;
			cout<<"value of b = "<<b<<endl;
			mul = a*b;	
			cout<<"sum = "<<mul;
		}	
};
int main()
{
	Derived obj(1,2,3,4,5,6);
	obj.print_B1();
	obj.print_B2();
	obj.print_der();
	return 0;
}
