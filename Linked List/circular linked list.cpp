#include<iostream>
using namespace std;
class node
{
public:
	bool visited;
	int next;
};
int main()
{
	node arr[100000];
	for(int i=0;i<100000;i++)
		arr[i].visited=false;
	int first;
	cin>>first;
	int ele;
	cin>>ele;
	arr[first].next=ele;

	while(ele!=-1)
	{
		int e;
		cin>>e;
		if(e==-1)
			break;
		arr[ele].next=e;
		ele=e;
	}
	cout<<first<<" ";
	arr[first].visited=true;
	while(arr[first].next!=0&&arr[arr[first].next].visited==false)
	{
       cout<<arr[first].next<<" ";
       arr[arr[first].next].visited=true;
       first = arr[first].next;
    }
    return 0;
}
