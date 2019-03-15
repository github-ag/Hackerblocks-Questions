#include<iostream>
using namespace std;
int main()
{
	int cb[10]={2,3,5,7,11,13,17,19,23,29};
	char a[20];
	int num=0;
	int size;
	cin>>size;
	cin>>a;
	int ans=0;
	int final_ans=0;
	int check;
	for(int pq=0;pq<size;pq++)
	{
        ans=0;
        num=0;
		for(int i=pq;i<size;i++)
	{
       check=0;
       num = (num*10)+(int(a[i])-48);
       //cout<<num<<endl;
       if(num==1||num==0)
       	{
       		continue;
       	}
      else
      { for(int j=0;j<10;j++)
       {
       	 if(num%cb[j]==0)
           {
           	check++;
           	if(num==cb[j])
           		check--;
           	break;
           }
       }
      }
      if(check==0)
      {
      	ans++;
      	num=0;
      }
	}
	if(ans>final_ans)
		final_ans=ans;
}
cout<<final_ans;
	return 0;
}
