#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a,b;
	public:
		void get(int m,int n)
		{
			a=m;
			b=n;
		}
	
		void operator -();
		A operator +(A obj)
		{
	A r;
	r.a = a+obj.a;
	r.b = b+obj.b;
	return r;
	
	}	
		void dis()
		{
			cout<<"a = "<<a;
			cout<<endl<<"b = "<<b;
		}	
};
void A::operator -()
{
	a=-a;
	b=-b;
}

//	operator -(A obj)

int main()
{
	A a1,a2,sum;
	sum = a1+a2;
	a1.	get(10,20);
	a2.	get(10,20);
	a1.dis();
	a2.dis();
	-a1;
	cout<<"\n-a & -b = ";
	a1.	dis();
	
	sum.dis();
//	cout<<"\nsum = "<<sum;
	getch();
}
/*friend function
class frien_fun
{
	int a,b;
	public:
		void getdata(int m,int n)
		{
			a=m;
			b=n;
		}
		void display()
		{
			cout<<"a = "<<a;
			cout<<"b = "<<b;
		}
		friend int sum(frien_fun  f);
};
int  sum(frien_fun f)
{
	int sum;
	sum = f.a + f.b;
	return sum;
}
int main()
{
	frien_fun f1;
	f1.getdata(10,20);
	f1.	display();
	cout<<endl<<sum(f1);
	getch();
}

function overloding
int add(int a)
{
	return a+a;
}
int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	int a,b,c,sum;
	cout<<"enter the value of a,b,c = \n";
	cin>>a>>b>>c;
	cout<<"a = "<<a<<"b = "<<b<<"c = "<<c<<endl;
	cout<<"sum a+a = "<<add(a)<<endl;
	cout<<add(a,b)<<endl;
	cout<<add(a,b,c)<<endl;
	sum = add(a);
	cout<<"sum = "<<sum;
	getch();
}


inline
inline int cube(int a)
{
	return a*a*a;
}
int main()
{
	int a;
	cout<<"a = ";
	cin>>a;
	cout<<cube(a);
	getch();
}*/
