//star pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,r;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		cout<<" * ";			
		}
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"\n";
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		cout<<" * ";			
		}
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"\n";
		for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"  ";
		}
		for(r=5;r>=i;r--)
		{
		cout<<" *  ";			
		}
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"\n";
		for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"   ";
		}
		for(r=5;r>=i;r--)
		{
		cout<<" * ";			
		}
		cout<<"\n";
	}
	
	return 0;
}
