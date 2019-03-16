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
	//#define ll long long
	long n,k;
	cin>>n>>k;
	int d;
	node *head=NULL;
	node *tail=NULL;
	cin>>d;
	head = new node(d);
	tail = head;
	for(int i=0;i<n-1;i++)
	{
        cin>>d;
        node *temp=new node(d);
        tail->next=temp;
        tail=temp;

	}
	node *at = head;
	node *before = head;
	node *after = head->next;
	node *temp=head;

   for(int i=1;i<k;i++)
    {
    	at=after;
    	after=after->next;
    	at->next=before;
    	before=at;
    }
    
    head=at;
    if(after==NULL)
    {
    	temp->next=NULL;
    	temp=NULL;
    }
    else{
    at=after;
    //cout<<endl<<at->data<<endl;
    after=after->next;
    node *abhi=NULL;
    before=at;
    abhi=at;
    
    while(after!=NULL)
    {
    	

       
       for(int i=1;i<=k;i++)
       {
           
           if(after==NULL)
           	break;
           at = after;
           after=after->next;
           if(i<k)
           {
           	at->next=before;
           	before=at;
           	if(i==k-1)
           	{
                temp->next=at;
                temp=abhi;
           	}
           }
           else
           {
           	before=at;
           	abhi=at;
           	 at=after;
           	 //cout<<"\n"<<at->data<<endl;
           	 //after=after->next;
            }
        }
    }
    temp->next=NULL;
}

    node *print=head;
    while(print!=NULL)
    {
    	cout<<print->data<<" ";
    	print=print->next;
    }
    return 0;
}
