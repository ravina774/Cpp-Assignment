//implement this keyword 
#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
	private:
		int x;
		int num;
		static int count;
	public:
		void setx(int x)
		{
			this->x=x;
			count++;
		}
		void print()
		{
			cout<<" x = "<<x<<"\n";
			cout<<"count = "<<count<<"\n";
		}
	/*		void getdata(int a)
		{
			num = a;
			count++;
		}
		void getcount(void)
		{
			cout<<"num = "<<num<<endl;
			cout<<"count = "<<count<<"\n";
		}*/
};
int Test :: count;
int main()
{
	Test t1,t2;
	t1.setx(20);
	t1.print();
	t2.setx(30);
	t2.print();
//	t.getdata(100);
//	t.getcount();
	return 0;
}


/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	return 0;
}*/
