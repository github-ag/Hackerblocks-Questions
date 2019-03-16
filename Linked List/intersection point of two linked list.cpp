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
	int a,b;
	cin>>a;
	int ele;
	cin>>ele;
	node *head1=new node(ele);
	node *tail1=head1;
	for(int i=0;i<a-1;i++)
	{
		cin>>ele;
		node *temp=new node(ele);
		temp->prev=tail1;
		tail1->next=temp;
		tail1=temp;
	}
	cin>>b;
	cin>>ele;
	node *head2=new node(ele);
	node *tail2=head2;
	for(int i=0;i<b-1;i++)
	{
		cin>>ele;
		node *temp=new node(ele);
		temp->prev=tail2;
		tail2->next=temp;
		tail2=temp;
	}
	//int check=0;
	if(tail1->data!=tail2->data)
		cout<<-1;
	else{
	while(tail1!=NULL||tail2!=NULL)
	{
		
		if(tail1==NULL)
			{
				cout<<tail2->next->data;
				break;
			}
		 if(tail2==NULL)
			{
				cout<<tail1->next->data;
				break;
			}
		
		 
		 if(tail1->data!=tail2->data)
		{
			cout<<tail1->next->data;
			//check=1;
			break;
		}
		
		
		  if(tail1!=NULL)
		{	tail1=tail1->prev;}
		  if(tail2!=NULL)
			{tail2=tail2->prev;}
		
	}
	if(tail1==NULL&&tail2==NULL)
		{
			cout<<head1->data;
			
		}
}
//	if(check==0)
//	cout<<-1;
	return 0;


}
