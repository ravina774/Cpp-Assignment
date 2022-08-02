#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
void Swap(T &n1 , T &n2)
{
	T temp;
	temp = n1;
	n1=n2;
	n2=temp;
}

int main()
{
	int i1=10,i2=20;
	float f1=15.5,f2=20.5;
	char c1='a',c2='b';
	cout<<"Before passing data to function template = "<<endl;
	cout<<"i1 =  "<<i1<<"  and i2 = "<<i2<<endl;
	cout<<"f1 = "<<f1<<"   and f2 = "<<f2<<endl;
	cout<<"c1 = "<<c1<<"   and c2 = "<<c2<<endl;
	Swap(i1,i2);
	Swap(f1,f2);
	Swap(c1,c2);
	cout<<"After passing data to function template = "<<endl;
	cout<<"i1 = "<<i1<<"   and  i2 = "<<i2<<endl;
	cout<<"f1 = "<<f1<<"  and i2 = "<<f2<<endl;
	cout<<"c1 = "<<c1<<"  and i2 = "<<c2<<endl;
	return 0;
}
