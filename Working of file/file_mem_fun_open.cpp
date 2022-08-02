//member function open() of the class
 #include<iostream>
 #include<conio.h>
 #include<fstream>
 using namespace std;
 int main()
 {
	//string st;
	char st;
	ofstream fout;
	fout.open("file2");
	fout<<"this is my first line of file\n";
	
	fout<<" this is secound line of file\n";
	fout.close();
	ifstream fin;
	fin.open("file2");
	st = fin.get();
	while(fin)
	{
	//	fin>>st;
		cout<<st;
		st = fin.get();	
	}
	return 0;
 }
