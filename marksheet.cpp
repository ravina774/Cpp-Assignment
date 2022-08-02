#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char name[15],fname[15];
	int rollno,cpp,dbms,ds,vb,os,csa;
	cout<<"Enter the student name = ";
	cin>>name;
	cout<<"Enter the father's name = ";
	cin>>fname;
	cout<<"Enter the rollno = ";
	cin>>rollno;
	cout<<"Enter the marks for programming with c++ = ";
	cin>>cpp;
	cout<<"Enter the marks for database management system = ";
	cin>>dbms;
	cout<<"Enter the marks for data structures & algorithms = ";
	cin>>ds;
	cout<<"Enter the marks for visual programming  = ";
	cin>>vb;
	cout<<"Enter the marks for operating system  = ";
	cin>>os;
	cout<<"Enter the marks for computer system architecture = ";
	cin>>csa; 
	float pre,total;
	total = cpp+ds+dbms+os+vb+csa;
	pre=total/6;
	cout<<"----------------------------------------------------------------------\n";
	cout<<"--------------------------JNVU------------------------------------------";
	cout<<"\n----------------------------------------------------------------------\n";
	cout<<"Student_Name = "<<name<<"\n";
	cout<<"Father's_Name = "<<fname<<"\n";
	cout<<"Rollno = "<<rollno;
	cout<<"\nSub        Max_marks           Min_marks          Obtained_marks\n";
	cout<<"cpp           100                  35                  "<<cpp<<"\n";
	cout<<"ds            100                  35                  "<<ds <<"\n";
	cout<<"vb            100                  35                  "<<vb <<"\n";
	cout<<"dbms          100                  35                  "<<dbms<<"\n";
	cout<<"os            100                  35                  "<<os  <<"\n";
	cout<<"csa            100                  35                 "<<csa <<"\n";
	cout<<"                                  Total                "<<total<<"\n";
	cout<<"                                  pre                  "<<pre<<" \n";
	return 0;
}
