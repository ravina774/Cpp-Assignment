//implement this keyword 
#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
	private:
		int x;
	public:
		void setx(int x)
		{
			this->x=x;
		}
		void print()
		{
			cout<<" x = "<<x<<"\n";
		}
};
int main()
{
	Test t;
	t.setx(20);
	t.print();
	return 0;
}
