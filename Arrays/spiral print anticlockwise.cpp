#include<iostream>
using namespace std;
void spiral(int a[10][10],int xe,int ye,int xs=0,int ys=0)
{
	if(ys>ye||xs>xe)
		return;
	if(ys<=ye)
	{for(int i=ys;i<=ye;i++)
	{
		cout<<a[i][xs]<<", ";
	}}
	if(xs<=xe)
	{for(int i=xs+1;i<=xe;i++)
		cout<<a[ye][i]<<", ";
	}
	if(xs<xe)
	{for(int i=ye-1;i>=ys;i--)
	{
		cout<<a[i][xe]<<", ";
	}}
	if(ys<ye)
	{for(int i=xe-1;i>xs;i--)
		cout<<a[ys][i]<<", ";
	}
	spiral(a,xe-1,ye-1,xs+1,ys+1);
}
int main()
{
	int arr[10][10],m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}
	spiral(arr,n-1,m-1,0,0);
	cout<<"END";
	return 0;
}
