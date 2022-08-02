#include<iostream>
using namespace std;
#define Null  0    
//declare node
struct Node
{
	int num;
	Node *next;
};
//declare starting (head) node
struct Node *head = Null;

//insert node at start
void insertNode(int n)
{
	struct Node *newNode = new Node;
	newNode->num = n;
	newNode->next=head;
	head = newNode;
}
//traverse / display all nodes (print items)
void display()
{
	if(head==Null)
	{
		cout<<"List is empty!"<<endl;
		return;
	}
	struct Node *temp=head;
	while(temp!=Null)
	{
		cout<<temp->num<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

//delete node from start
void deleteitem()
{
		if(head==Null)
	{
		cout<<"List is empty!"<<endl;
		return;
	}
	cout<<head->num<<" is removed. "<<endl;
	head = head->next;	
}

int main()
{
	display();
	insertNode(10);
	insertNode(20);
	insertNode(30);
	insertNode(40);
	insertNode(50);
	display();
	deleteitem();
	deleteitem();
	deleteitem(); 
	deleteitem();
	deleteitem();	
	display();
	return 0;
}
