#include<iostream>
using namespace std;
class BankAccount
{
	private:
		string Name,type_account,Address;
		int transactions;
		static int Account_number;
		float Balance;
	public:
		void depositor_info()
		{ 
			cout<<endl<<"The number of account is = BA"<<Account_number;
			cout<<endl<<"Enter the name of depositer = ";cin>>Name;
			cout<<"Enter the address of depositer =";cin>>Address;	
			Account_number++;			
		}	
		void display()
		{
			cout<<"Account number = "<<Account_number<<endl;
			cout<<"Depositer name = "<<Name<<endl;
			cout<<"Depositer address = "<<Address<<endl;
		}
};
int BankAccount:: Account_number = 1001;
int main()
{
	int n,i;
	cout<<"Enter the number of depositor :- ";
	cin>>n;
	BankAccount b1[n];
		for(i=0;i<=n;i++)
			{
				b1[i].depositor_info();
			}
		for(i=0;i<=n;i++)
		{	
			b1[n].display();
		}
	return 0;
}
