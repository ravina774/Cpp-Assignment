
#include<iostream>
#include<conio.h>
using namespace std;
class Base1
{
	int a;
	public:
		void getA(int p)
		{
			a=p;
		}
		void print()
		{
			cout<<"The value of a = "<<a;
		}
};
class Base2
{
	int b;
	public:
		void getB(int p)
		{
			b=p;
		}
		void print()
		{
			cout<<"The value of b = "<<b;
		}
};
class Derived: public Base1 , public Base2
{
	public :
		void print()
		{
			Base1::print();
					
		}		
};
int main()
{
	
	return 0;
}
