#include<iostream>
using namespace std;
template <class T>
class A
{
	T data;
	public:
		A(T a)
		{
			data = a;
		}
		void display()
		{
			cout<<"\nvalue of data = "<<data<<endl;
		}
};
int main()
{
	cout<<"data in int :- ";
	A<int> a(10);
	a.display();
	cout<<"\ndata in char :- ";
	A<char> b('R');
	b.display();
	cout<<"\ndata in float :- ";
	A<float> c(1.5);
	c.display();
	return 0;
}
