#include<iostream>
using namespace std;
int pow(int a,int n)
{
	if(n==0)
		return 1;
	if(n%2==0)
	{
		int ans=pow(a,n/2);
		return ans*ans;

	}
	else
	{
		int ans = pow(a,(n-1)/2);
		return ans*ans*a;
	}
}
int main()
{
	int a ,n;
	cin>>a>>n;
	int power=pow(a,n);
	cout<<power;
	return 0;
}
