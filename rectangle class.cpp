//WAP to create rectangle class and create area function & display function
#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
	private:
		int length, breadth,rec_area;
	public:
		void set_value(int l,int b)
		{
			length = l;
			breadth	= b;
		}
		void area()
		{
			rec_area=length*breadth;	
		}
		void display();
};
void rectangle::display()
{
	cout<<"Length = "<<length;
	cout<<"\nBreadth = "<<breadth;
	cout<<"\nArea = "<<rec_area;
}
int main()
{
	rectangle r;
	r.set_value(10,20);
	r.area();
	r.display();
	return 0;
 }
