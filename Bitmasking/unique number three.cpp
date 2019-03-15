#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[100000],s;
	cin>>s;
	for(int i=0;i<s;i++)
		cin>>a[i];
	int cnt[32]={0};
	for(int i=0;i<s;i++)
	{
		int j=0;
		
       while(a[i]>0)
       {
       	if(a[i]&1==1)
       		cnt[j]+=1;
       	a[i]=a[i]>>1;
       	j++;
       	
       }
	}
	int n=0;
	for(int i=0;i<32;i++)
	{
       n+=((cnt[i]%3)*pow(2,i));

	}
	cout<<n;
	return 0;

}
