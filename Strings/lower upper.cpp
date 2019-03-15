#include<iostream>
using namespace std;
int main()
{
	int m,a[1000],n,b[1000],sum[10001]={0};
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int temp_m=m;
	int temp_n=n;
	int temp;
	if(m>n)
	{
      int in=m;
      while(m>0&&n>0)
      {
           temp=sum[in]+((a[m-1]+b[n-1]));
          sum[in]=temp%10;
          sum[in-1]=sum[in-1]+(temp/10);
          m--;
          n--;
          in--;
      }
      while(m>0)
      	{
      		sum[in]=sum[in]+a[m-1];
      		m--;
      		in--;
      	}
      int z=0;
      if((temp/10)==0)
      	z++;
      else
      {
      		sum[0] = temp/10;
      	
      }
      for(int i=z;i<temp_m;i++)
      	cout<<sum[i]<<", ";
	}
	else if(n>=m)
	{
		  int in=n;
      while(m>0&&n>0)
      {
          temp=sum[in]+(a[m-1]+b[n-1]);
          sum[in]=temp%10;
          sum[in-1]=sum[in-1]+(temp/10);
          m--;
          n--;
          in--;
      }
      while(n>0)
      	{
      		sum[in]=sum[in]+b[n-1];
      		n--;
      		in--;
      	}
      int z=0;
      if((temp/10)==0)
      	z++;
      else
      {
      	sum[0] = temp/10;
      	
      }
      for(int i=z;i<=temp_n;i++)
      	cout<<sum[i]<<", ";
	}
    cout<<"END";
	return 0;
}
