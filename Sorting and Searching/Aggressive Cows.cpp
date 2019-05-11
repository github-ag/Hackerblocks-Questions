#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,c;
	cin>>n>>c;
	int a[100000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int s=0;
	int e=n;
	int mid;
	int ans;
	int no_cow_placed;
	int last_cow_placed;
	while(s<=e)
	{
		last_cow_placed =0;
		no_cow_placed =1;
		mid = (s+e)/2;
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[last_cow_placed]>=mid)
			{
				last_cow_placed=i;
				no_cow_placed++;

			}
			if(no_cow_placed==c)
				break;

		}
		if(no_cow_placed==c)
		{

			ans=mid;
			s+=1;
		}
		if(no_cow_placed<c)
		{
			e-=1;
		}

	}
	cout<<ans;
	return 0;
}
