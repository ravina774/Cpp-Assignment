//pallndrome cheack 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,sum=0,temp,rev;
	cout<<"Enter the value of num = ";
	cin>>num;
	temp=num;
	while(num)
	{
		rev = num%10;
		num = num/10;
		sum=sum*10+rev;
	}
	if(temp==sum)
	{
			cout<<"This number is pallndrome  ";
	}
	else
	{
		cout<<"This number is not pallndrome  ";
	}

	return 0;
}
