//febonacci series
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,a=0,b=1,i,c;
	cout<<"\n  Enter the number of febonacci term = ";
	cin>>n;
	cout<<"  "<<a<<"  "<<b<<"  ";
	for(i=2;i<n;i++)
	{
		c=a+b;
		cout<<  c<<"  ";
		a=b;
		b=c;
	}
	return 0;
}

