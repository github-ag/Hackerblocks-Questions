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
	int k;
	cin>>k;
	int ele;
	cin>>ele;
	node *head=new node(ele);
	node *tail=head;
	for(int i=0;i<k-1;i++)
	{
		cin>>ele;
		node* temp=new node(ele);
		tail->next=temp;
		tail=temp;
		
	}
	node *first=head;
	node *temp=head;
	while(temp!=NULL)
	{
		if(temp->data%2==0)
	{
		temp=temp->next;
	}
	else
	{
		while((first->data%2!=0)&&first!=temp)
		{
			first=first->next;
		}
		if(first->data%2==0)
		swap(first->data,temp->data);
		else
		temp=temp->next;
	}
	}
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	return 0;
}
