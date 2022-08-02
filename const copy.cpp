//WAP to create sample class and show the use of copy constructor 
#include<iostream>
#include<conio.h>
using namespace std;
class Sample
{
	private:
		int a,b;
	public:
		Sample(int x,int y)
		{
			a=x;
			b=y;
			//cout << "\nIm Constructor";
		}
			Sample(Sample &obj)			//copy constructor
		{
			a=obj.a;
			b=obj.b;
			cout << "\nIm copy Constructor";
		}
		void display()
		{
			cout<<"\n Values = "<<a<<"\t"<<b;
		}
};
int main()
{
	Sample s1(10,20);
	s1.display();
	Sample s2(s1);
	s2.display();
	Sample s3 = s1;
	s3.display();
	return 0;
}
