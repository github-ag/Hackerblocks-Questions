#include<iostream>
using namespace std;
int main()
{
	int a[1000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max = a[0];
	int cnt=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		
		}
		else if(a[i+1]>a[i])
		{
			int j=i;
			while(a[i+1]>a[j] &&j>=0)
			{
              
               if(a[i+1]>max)
               {
               	if(a[j]==max&&a[i+1]>max)
               	{
               		max=a[i+1];
               		break;
               	}
               	else
               	{cnt+= (max-a[j]);
               	a[j]=max;
               	
               	j--;}
               }

               else
               {
               	cnt+=(a[i+1]-a[j]);
               	a[j]=a[i+1];
               	j--;
               }
			}
			
		}
	}
	cout<<cnt;
	return 0;
}
