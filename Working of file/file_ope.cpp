#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	string st;
	ofstream fout;
	fout.open("file3");
	cout<<"\t";
	cin>>st;
	fout<<st;
	fout.close();
	ifstream fin;
	fin.open("file3");
	fin>>st;
	cout<<endl<<"\t"<<st;
	fin.close();
	
	
	return 0;
}
