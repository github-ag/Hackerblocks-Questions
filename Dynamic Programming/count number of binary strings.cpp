#include<iostream>
using namespace std;
int dp[100]={0};
int number(int n)
{
	if(n==1)
		return 2;
	if(n==0)
		return 1;
	if(dp[n]!=0)
		return dp[n];
	int one = number(n-2);
	int zero = number(n-1);
	return dp[n]=one+zero;
}
int main()
{
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		cout<<number(n)<<endl;
	}
	return 0;
}
