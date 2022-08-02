#include<iostream>
using namespace std;
namespace name
{
	int a=10,b=20;
	int sum();
}
int name::sum()
{
	int sum;
	sum=a+b;
	return sum;	
}
using namespace name;
int main()
{
	cout<<"value of a = "<<name::a<<endl;
	cout<<"value of b = "<<name::b<<endl;
	cout<<"value of sum = "<<name::sum()<<endl;
	return 0;
}


/*using namespace name;
int main()
{
//	name::a=10;
//	name::b=20;
//	cout<<"value of a = "<<name::a<<endl;
//	cout<<"value of b = "<<name::b<<endl;
//	cout<<"value of sum = "<<name::sum()<<endl;
	cout<<"\nusing namespace name use (see line number = 14) then output is :- \n";
	cout<<"value of a = "<<a<<endl;
	cout<<"value of b = "<<b<<endl;
	cout<<"value of sum = "<<sum();
	return 0;
}*/
