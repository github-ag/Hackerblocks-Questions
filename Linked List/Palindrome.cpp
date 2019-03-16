#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
	node *prev;
	node(int data)
	{
		this->data=data;
		next=NULL;
		prev=NULL;
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
		temp->prev=tail;
		tail->next=temp;
		tail=temp;

	}
	node *beg=head;
	node *last=tail;
	int check=0;
	while((beg->next!=last)&&(beg!=last))
	{
		if(beg->data!=last->data)
			check++;
		beg=beg->next;
		last=last->prev;


	}
	if(beg->next==last)
	{
		if(beg->data!=last->data)
			check++;

	}
	if(check==0)
		cout<<"True";
	else
		cout<<"False";
	return 0;
}
