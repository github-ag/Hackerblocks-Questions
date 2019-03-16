#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	stack<int>s;
	s.push(0);
	cout<<"1 ";
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[s.top()])
		{
			cout<<"1 ";
			s.push(i);

		}
		else
		{
			while(a[s.top()]<a[i])
			{
				s.pop();
				if(s.empty())
					break;

			}
			if(s.empty())
			{
				cout<<i+1<<" ";
			}
			else
			cout<<i-s.top()<<" ";
			s.push(i);

		}
	}
    cout<<"END";
	return 0;

}
