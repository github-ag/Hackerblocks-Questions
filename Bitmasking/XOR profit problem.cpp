#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	int max=0;
	for(int i=x;i<=y;i++)
	{
		for(int j=x;j<=y;j++)
		{
			if((i^j)>max)
				max=i^j;
		}
	}
	cout<<max;
	return 0;
}
