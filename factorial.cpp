//Factorial of a given number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,i,fact=1;
	cout<<"Enter the number = ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		cout<<" "<<fact<<" ";
	}
	cout<<"\nFactorial of "<<num<<" is = "<<fact<<"\n";
	return 0;
}
