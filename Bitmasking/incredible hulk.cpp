#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int cnt=0;
		while(n>0)
		{
			int a=n&1;
			n=n>>1;
			if(a==1)
				cnt++;

		}
		cout<<cnt<<endl;
	}
	return 0;
}
