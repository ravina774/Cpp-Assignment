#include<iostream>
using namespace std;
class Base1 
{
	public:
		int a;
		void get_data()
		{
			cout<<"Enter the value of a = ";
			cin>>a;
		}
		
};
class  Base2  
{
	public:
		int b;
		void get_data()
		{
			cout<<"Enter the value of b = ";
			cin>>b;	
		}
};
class Derived : public Base1 , public Base2
{
		public:
			void display()
			{
				cout<<"value of a = "<<a<<endl;
				cout<<"value of b = "<<b;
			}
};
int main()
{
	Derived d;
//	d.get_data();			error ambiguity 
 	d.Base1::get_data();		//ambiguity resolusion
	d.Base2::get_data();		//ambiguity resolusion
	d.display();
	return 0;
}
