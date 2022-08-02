#include<iostream>
using namespace std;
template <class T1 , class T2>
class A
{
	T1 data1;
	T2 data2;
	public:
		A(T1 a, T2 b)
		{
			data1 = a;
			data2 = b;
		}
		void display()
		{
			cout<<"\nvalue of first data = "<<data1;
			cout<<"\nvalue of second data = "<<data2<<endl;
		}
};
int main()
{
	cout<<"data in int :- ";
	A<int , int> a(10,20);
	a.display();
	cout<<"\ndata in char :- ";
	A<char , char> b('R','a');
	b.display();
	cout<<"\ndata in float :- ";
	A<float , float> c(1.5,2.8);
	c.display();
	A<int  , float> d(5,2.8);
	d.display();
	return 0;
} 
