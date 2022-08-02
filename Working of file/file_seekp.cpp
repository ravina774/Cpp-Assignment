#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("file1",ios::ate | ios::app);
	cout<<fout.tellp()<<endl;
	fout.seekp(2,ios_base::beg);
	cout<<fout.tellp()<<endl;
	fout.seekp(2,ios_base::cur);
	cout<<fout.tellp()<<endl;
	fout.seekp(-2,ios_base::end);
	cout<<fout.tellp()<<endl;
	fout.close();
	getch();
}
