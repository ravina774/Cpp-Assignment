#include<iostream>
#include<conio.h>
using namespace std;
class stu
{
	public :
	int id;
	char name[20];
		void getstu()
		{
			cout<<"Enter the student id = ";cin>>id;
			cout<<"Enter the student name = ";cin>>name;
		}
};
class mark : public stu
{
	public :
	int eng,hindi,math;
	void getmarks()
	{
		cout<<"Enter  eng marks = ";cin>>eng;
		cout<<"Enter  hindi marks = ";cin>>hindi;
		cout<<"Enter  math marks = ";cin>>math;
	}
};
class sports 
{
	public :
		int spmarks;
		void getsports()
		{
			cout<<"Enter sports marks =  ";cin>>spmarks;
		}
};
class result : public mark,public sports
{
	public :
		int tot;
	//	float avg;
		void show()
		{
			tot = eng+hindi+math;
		//	avg=tot/3.0;
			cout<<"\nTotal = "<<tot;
		//	cout<<"\nAverage = "<<avg;
			cout<<"\nTotal + Sports marks = "<<tot+spmarks;
		}
};
int main()
{
	result r;
	r.getstu();
	r.getmarks();
	r.getsports();
	r.show();
	return 0;  
}
