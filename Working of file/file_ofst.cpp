#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	string st;
	ofstream fout;
	fout.open("file4");
	cout<<"\t";
	cin>>st;
	fout<<st;
	fout.close();
	return 0;
}
