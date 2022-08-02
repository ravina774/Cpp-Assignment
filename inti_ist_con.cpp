//Initilization list in constructor :-  
#include<iostream>
using namespace std;
class Test 
{
	int a,b;
	public:
		
		Test(int i , int j) : a(i) , b(a + j)	
		{
			cout<<"constructor executed \n";
			cout<<"value of a is = "<<a<<endl;
			cout<<"value ob b = "<<b<<endl;
		}
};
int main()
{
	Test t(5,5);
	return 0;
}
