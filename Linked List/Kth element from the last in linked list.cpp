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
	
	int ele;
	cin>>ele;
	node *head=new node(ele);
	node *tail=head;
	while(ele!=-1)
	{
		cin>>ele;
	    node* temp=new node(ele);
	    tail->next=temp;
	    tail=temp;
	 }
	node *aage=head;
	node *piche=head;
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		aage=aage->next;

	}
	while(aage->data!=-1)
	{
		aage=aage->next;
		piche=piche->next;
	}
	cout<<piche->data;
	return 0;
}
