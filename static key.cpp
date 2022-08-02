//implement static keyword
#include<iostream>
#include<conio.h>
using namespace std;
class static_keyword
{
		static int count;
		int num;
	public:
		void getdata(int a)
		{
			num = a;
			count++;
		}
		void getcount(void)
		{
			cout<<"count = ";
			cout<<count<<"\n";
		}
};
int static_keyword :: count;
int main()
{
	static_keyword a,b;
	a.getcount();
	b.getcount();
	a.getdata(100);
	b.getdata(200);
	cout<<"\nAfter reading data = \n";
	a.getcount();
	b.getcount();		
	return 0;
}
