//dynamically array creation
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the number of item = ";
	cin>>n;
	int *arr = new int(n);
	cout<<"Enter "<<n<<" item \n";
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];	
	}
	cout<<"you entered = ";
	for(i=1;i<=n;i++)
	{
		cout<<"\t"<<arr[i];
	}	
	return 0;
}
