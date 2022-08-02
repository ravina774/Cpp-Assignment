//WAP to create employee class with constructor 
#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
	private:
		int id;
		string name;
		float salary;
	public:
		employee(int i,string n,float s)
		{
			id = i;
			name = n ;
			salary = s;
		}
		void display()
		{
			cout<<"\n employee id = "<<id;
			cout<<" \nemployee name =  "<<name;
			cout<<"\nemployee salary =   "<<salary;
		}
};
int main()
{
	employee e1(101,"Ravi",2500.45);	//implicit call
	e1.display();
	employee e2 = employee(102,"Jaya",3000.25);		//explicit call
	e2.display();
	return 0;
}
