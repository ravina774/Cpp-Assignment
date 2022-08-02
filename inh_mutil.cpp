#include<iostream>
#include<conio.h>
using namespace std;
class person
{
	protected:
		int age,phone;
		char name[20];
	public:
		void getp()
		{
			cout<<"Enter person Age = ";cin>>age;
			cout<<"Enter person Phone number = ";cin>>phone;
			cout<<"Enter person Name = ";cin>>name;
		}
};
class student : public person
{
	protected:
		char cname[20],cls[16];
	public:
		void gets()
		{
			cout<<"Enter student class = ";cin>>cls;
			cout<<"Enter person college name = ";cin>>cname;	
		}
		
};
class show_d : public student
{
	public:
		void display()
		{
			cout<<"person Name = "<<name<<endl;
			cout<<"person Age = "<<age<<endl;
			cout<<"person Phone number = "<<phone<<endl;
			cout<<"person class = "<<cls<<endl;
			cout<<"person college name = "<<cname<<endl;
		}
};
int main()
{
	show_d c1;
	c1.getp();
	c1.gets();
	c1.display();
	return 0;
}
