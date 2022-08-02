
//WAP to create sample class to show use of constructor overloading 
#include<iostream>
#include<conio.h>
using namespace std;
class ABC
{
	private:
		int x,y;
	public:
		ABC()			 //constructor 1 with no arguments
		{
			x = y = 0;
		}
		ABC(int a)		 //constructor 2 with one arguments
		{
			x = y = a;
		}
		ABC(int a,int b)	 //constructor 3 with two arguments
		{
			x = a;
			y = b;	
		}
		void display()
		{
			cout<<" x = "<<x<<" and y = "<<y<<endl;
		}
};
int main()
{
	ABC o1;		//constructor 1
	ABC o2(10);		//constructor 2
	ABC o3(20,30);		//constructor 3
	o1.display();
	o2.display();
	o3.display();
	return 0;
} 
