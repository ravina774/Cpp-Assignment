#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ifstream fin;
	char st;
	int pos;	
	fin.open("file3");
	pos = fin.tellg();
	cout<<pos;
	fin>>st;
	cout<<st;
	pos = fin.tellg();
	cout<<endl<<pos;
	fin>>st;
	cout<<st;
	pos = fin.tellg();
	cout<<endl<<pos;
	fin>>st;
	cout<<st;
	getch();
}
