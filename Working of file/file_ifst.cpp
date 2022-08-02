#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	string st;
	ifstream fin;
	fin.open("file4");
	fin>>st;
	cout<<endl<<"\t"<<st;
	fin.close();
	return 0;
}
