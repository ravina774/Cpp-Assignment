#include<iostream>
using namespace std;
class ptr_array
{
	int arr[5] = {5,10,15,20,25},i;
	int *ptr = &arr[0];
	public:
		void Display_array()
		{
			cout<<"The value is array are :- \n";
			for(i=0;i<5;i++)
	   		{
				cout<<" [" <<i<<"] = "<<*ptr<<"\t";
				*ptr++;	
		 	}
		}
};
int main()
{
	ptr_array p;
	p.Display_array();
	return 0;
}
