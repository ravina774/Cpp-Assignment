//constructor function of the class  //getline is pending
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	string name;
	int roll_no;
	cout<<"enter your name = ";
	cin>>name;
	cout<<"enter your roll number = ";
	cin>>roll_no;
	//write operation 
	ofstream fout("file1");
	fout<<name<<endl;
	fout<<roll_no;
	fout.close();
	//reading operation
	ifstream fin("file1");
	fin>>name;
	fin>>roll_no;
	cout<<"\nmy name = "<<name<<endl;
	cout<<"my roll_no = "<<roll_no;
	fin.close();


	return 0;
}
