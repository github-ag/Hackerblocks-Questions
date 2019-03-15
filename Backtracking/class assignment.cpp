#include<iostream>
using namespace std;
int dp[44]={0};
int value(int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return 2;
	if(dp[n]!=0)
	return dp[n];
	int a = value(n-1);
	int b = value(n-2);
	return dp[n]=a+b;
}
int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		cout<<"#"<<i<<" : "<<value(n)<<"\n";

	}
	return 0;
}
