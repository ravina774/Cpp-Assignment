 #include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream fout;
	int pos;
	fout.open("file1",ios::app);
	pos = fout.tellp();
	cout<<pos;
	fout<<"goyal";
	pos = fout.tellp();
	cout<<pos;
	fout.close();
	getch();
}
