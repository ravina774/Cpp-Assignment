//WAP to create three overload function name of area() for calculating area of 
#include<iostream>
#include<conio.h>
using namespace std;
int area(int s);
float area(float r);
int area(int l,int b);
int main()
{
	int s,l,b;
	float r;
	cout<<"Enter side of squre = ";
	cin>>s;
    cout<<"Enter radius of circle = ";
    cin>>r;
    cout<<"Enter length  of rectangle = ";
    cin>>l;
    cout<<"Enter breadth of rectangle = ";
    cin>>b;
    cout<<"\nArea of squre is = "<<area(s);
    cout<<"\nArea of circle is = "<<area(r);
    cout<<"\nArea of rectangle is = "<<area(l,b);
	return 0;
}
int area(int s)
{
	return(s*s);
}
float area(float r)
{
	return(3.14*r*r);
}
int area(int l,int b)
{
	return(l*b);
}
