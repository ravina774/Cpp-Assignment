#include<iostream>
#include<conio.h>
using namespace std;
class  A
{
	protected:
		int a;
	public :
		int b;
		void get()
		{
			cout<<"Enter the value of a = ";cin>>a;
			cout<<"Enter the value of b = ";cin>>b;
		}
};
class B : public A
{
	public:
	int sum;
	
		void total()
		{
			sum = a+b;
		}
		void display()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"sum = "<<sum;
		}
};
int main()
{
	B b1;
	b1.get();
	b1.total();
	b1.	display();
	return 0;
} 
