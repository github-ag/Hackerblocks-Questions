#include<iostream>
using namespace std;
int main()
{
	#define max 1000000
	int a[max]={0};
	for(unsigned long long  i=0;i<max;i++)
	{
		if(i%2==1)
			a[i]=1;
	}
	a[2]=1;
	a[1]=0;
	for(unsigned long long i=3;i<max;i+=2)
	{
		for(unsigned long long  j=i*i;j<max;j+=2*i)
		{
			if(j%i==0)
			{
				a[j]=0;
			}
		}
	}
	unsigned long long  flag=0;
	unsigned long long  n;
	cin>>n;
	for(unsigned long long  i=0;i<max;i++)
	{
		if(a[i]==1)
		flag++;
		if(flag==n)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
