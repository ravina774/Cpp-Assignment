//implement inline function 
#include<iostream>
#include<conio.h>
using namespace std;
class line
{
	public:
		inline int mul(int x,int y)
		{
			return (x*y);
		}
		inline int cube(int x)
		{
			return (x*x*x);
		}
};
int main()
{
	line obj;
	int val1,val2;
	cout<<"Enter the first number = ";
	cin>>val1;
	cout<<"Enter the secound number = ";
	cin>>val2;
	cout<<"Multiplication value is = "<<obj.mul(val1,val2);
	cout << "\n\nCube value is      = " << obj.cube(val1) << "\t" <<obj.cube(val2);
	return 0;
}
