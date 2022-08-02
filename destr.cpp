//WAP to  show use of destructor 
#include<iostream>
#include<conio.h>
using namespace std;
class Sample
{
	public:
		Sample()
		{
			cout<<"Constructor is called"<<endl;
		}
		void display()
		{
     	   cout<<"Hello World!"<<endl;
        }
		~Sample()
		{
			cout<<"Destructor is called"<<endl;
		}	
};
int main()
{
	Sample obj;
	obj.display();	
	return 0;
}
