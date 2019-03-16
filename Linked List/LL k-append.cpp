#include<iostream>
using namespace std;
class node 
{
public:
	int data;
	node *next;
	node(int data)
	{
		this->data=data;
		next=NULL;
	}
};
int main()
{
	int n;
	cin>>n;
	int ele;
	cin>>ele;
	node *head=new node(ele);
	node *tail=head;

	for(int i=0;i<n-1;i++)
	{
		cin>>ele;
		node *temp=new node(ele);
		tail->next=temp;
		tail=temp;

	}
	int k;
	cin>>k;
	if(k<n)
	{node *piche=head;
	node *aage=head;
	for(int i=0;i<k;i++)
	{
		aage=aage->next;
	}
	while(aage->next!=NULL)
	{
		aage=aage->next;
		piche=piche->next;
	}
	aage->next=head;
	head=piche->next;
	piche->next=NULL;
}
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	return 0;
}
