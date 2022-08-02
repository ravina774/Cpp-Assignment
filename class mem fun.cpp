//WAP to create a class which include data member and member function also print its value
#include<iostream>
#include<conio.h>
using namespace std;
class person
{
	private:
		char name[20];
		int age,phone_no;
	public:
		void get_value()
		{
			cout<<"Enter the person name :- ";
			cin>>name;
			cout<<"Enter the person age :- ";
			cin>>age;
			cout<<"Enter the person phone number :- ";
			cin>>phone_no;
		}
		void put_value();
};
void person::put_value()
{
	cout<<"Person name = "<<name;
	cout<<"\nPerson age = "<<age;
	cout<<"\nPerson phone number = "<<phone_no;
}
int main()
{
	person p1;
	p1.get_value();
	p1.put_value();
	return 0;
}
