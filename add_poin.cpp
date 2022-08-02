  #include<iostream>
using namespace std;
class Sample
{
	int a,b,sum;
	int *p1,*p2;
	public:
	void add()
	{
		cout<<"Enter the 1st value = ";cin>>a;
		cout<<"Enter the 2nd value = ";cin>>b;		
		p1=&a;
		p2=&b;	
		sum = *p1+*p2;
		cout<<"Add two number = "<<sum;		
	}	
};
int main()
{
	Sample s;
	s.add();
	return 0 ;
}
