#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("file1");
	cout<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<"\n"<<(char)fin.get();
	cout<<"\n"<<fin.tellg();
	fin.seekg(7);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get()<<endl;
	cout<<"\nios_base::beg :- ";
	fin.seekg(2,ios_base::beg);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<"\nios_base::cur :- ";
	fin.seekg(2,ios_base::cur);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<"\nios_base::beg :- ";
	fin.seekg(-3,ios_base::end);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get();	
	getch();
}
