#include<iostream>
using namespace std;
bool binary_search(int *a,int s,int e,int ele)
{
	if(s>e)
		return false;
	int mid=(s+e)/2;
	if(a[mid]==ele)
		return true;
	if(a[mid]>ele)
	{
		bool ans = binary_search(a,s,mid-1,ele);
		return ans;
	}
	else if(a[mid]<ele)
	{
		bool ans = binary_search(a,s+1,e,ele);
		return ans;
	}


}
int main()
{
	int m,n,a[100000];
	cin>>m>>n;
	for(int i=0;i<m*n;i++)
		cin>>a[i];
	int ele;
	cin>>ele;
	int i=0,j=0,check=0;
	while(i<m*n)
	{
		
		if(a[i]>ele&&check==0)
			{cout<<"0";
		      break;}
		else
		{
			if(binary_search(a,i,i+n-1,ele))
				{
					check++;
					break;
				}
		 i=i+n;

       }
	}
	if(check==0)
		cout<<"0";
	else 
		cout<<"1";
	return 0;

}
