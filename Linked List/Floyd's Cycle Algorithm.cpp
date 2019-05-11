//floyds cycle
#include<iostream>
using namespace std;
class node
{
public:
	int val;
	node *next;
	node(int n)
	{
		val=n;
		next=NULL;
	}
};

node* create(int *a,int n)
{
	node *head = new node(a[0]);
	node *tail = head;
	int i;
	for(i=1;i<n-1;i++)
	{

		node *temp = new node(a[i]);
		tail->next=temp;
		tail=temp;
	}

	node *temp2=head;
	while(temp2!=NULL)
	{
		if(temp2->val==a[i])
			{tail->next=temp2;
				break;
			}

		temp2=temp2->next;
	}
	return head;

}
//one approach to check if the cycle is present in the linked list
/*But this approach is not effective bcz it only works when we know the last element after
  which cycling starts*/
void check(node *head,int ele)
{
	node *temp=head;
	int cnt=0;
	while(temp!=NULL)
	{
		if(temp->val==ele)
			cnt++;
		if(cnt==2){
            cout<<endl;
			cout<<"cycle is present in the linked list";
			return;
		}

		temp=temp->next;
	}
	cout<<"cycle is not present in the linked list";
}

//second approach for cycle detection(Runner Method)
void cycle_detection(node *head)
{
    node *fast = head->next->next;
    node *slow = head->next;
    while(fast!=NULL)
    {
        if(fast==slow)
        {
            cout<<endl;
            cout<<"Cycle is present in the linked list";
            return;
        }


        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<"Cycle is not present in the linked list";

}

//Floyds Cycle Algorithm(Removing of chain in Linked List)
//step 1- getting the first chain element
node* get_first_chain_element(node *head)
{
     node *fast = head->next->next;
    node *slow = head->next;
    while(fast!=NULL)
    {
        if(fast==slow)
        {
            slow = head;
            while(fast!=slow)
            {
                fast=fast->next;
                slow=slow->next;
            }
            return fast;

        }
        fast = fast->next->next;
        slow = slow->next;
    }
}
//step 2-removing the chain
void remove_chain(node *head)
{
    node *target = get_first_chain_element(head);
    node *temp=head;
    int cnt=0;
    while(1)
    {
        if(temp->next==target)
        {
            cnt++;
            if(cnt==2)
            {

                temp->next=NULL;
                break;
            }


        }
        temp=temp->next;
    }
}
void print(node *head)
{

    node *temp=head;
    cout<<endl;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;

    }
}

int main()
{
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	node *head = create(a,n);
	check(head,a[n-1]);
	cycle_detection(head);
	remove_chain(head);
	print(head);

	return 0;

}
