//Amstrong check    371,407
// 153 = 1*1*1+5*5*5+3*3*3 = 1+125+27 = 153 amstrong number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,temp,num=0,rem;
	cout<<"Enter the number  = ";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rem=temp%10;
		num=num+rem*rem*rem;
		temp=temp/10;
	}
	if(n==num)
	{
		cout<<n<<" this number is amstrong ";
	}
	else
	{
		cout<<n<<" this number is not amstrong ";
	}
	return 0;
}
