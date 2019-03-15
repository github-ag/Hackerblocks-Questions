#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char a[100],b[100];
	for(int j=0;j<t;j++)
	{cin>>a;
	cin>>b;
	for(int i=0;a[i]!='\0';i++)
	{
		if((a[i]=='0'&&b[i]=='0')||(a[i]=='1'&&b[i]=='1'))
			cout<<0;
		else
			cout<<1;
	}
	cout<<endl;
}
	return 0;
}
