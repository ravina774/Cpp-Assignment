#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private :
		int a;	
	protected:
		int b;
	public:
		int c;
		void get_data()
		{
			a=10;
			b=20;
			c=30;
		}		
};
class B : public A
{
	public:
			void display()
		{
		//	cout<<"A = "<<a;			//private data not access
			cout<<"B = "<<b;				// protected data access 
			cout<<"C = "<<c;		
		}
};
int main()
{
	B b;
	b.get_data();
	b.display();
	return 0;
}
