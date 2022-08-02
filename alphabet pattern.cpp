//Alphabet pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	  int i,j,n=5;
	  for(i=1;i<=n;i++)
	  {
	  	for(j=1;j<=i;j++)
	  	{
	  		cout<<((char)(i+64));	
		}
		cout<<"\n";
	  }
	return 0;
}
