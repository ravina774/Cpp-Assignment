//swap two number using third variable 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2,temp;
	cout<<"Enter the value of First Number = ";
	cin>>num1;
	cout<<"Enter the value of Second Number = ";
	cin>>num2;
	cout<<"\n Before  swapping value :- \n";
	cout<<"  First Number = "<<num1<<"\n  Second Number = "<<num2<<"\n";
	temp = num1;
	num1=num2;
	num2=temp;
	cout<<"\n After swapping value :- \n";
	cout<<"  First Number = "<<num1<<"\n  Second Number = "<<num2<<"\n";
	return 0;
}
