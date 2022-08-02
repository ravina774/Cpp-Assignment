#include<iostream>
using namespace std;
class Simp_pointer
{
	public:
	int a;
	void dispaly()
	{
		a=10;
		int *ip;
	    ip = &a;	
		cout<<"value of a = "<<a<<endl;
		cout<<"address of a = "<<&a<<endl;
		cout<<"value of ip = "<<ip<<endl;
		cout<<"value of *ip = "<<*ip<<endl;
	}
	
};
int main()
{
	Simp_pointer s1;
	s1.dispaly();
	return 0 ;
}
