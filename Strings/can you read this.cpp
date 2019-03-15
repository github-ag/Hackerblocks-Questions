#include<iostream>
using namespace std;
int main()
{
	char a[1000];
	cin>>a;
	int i=1;
	cout<<a[0];
	while(a[i]!='\0')
	{
		if(a[i]>='A'&&a[i]<='Z')
			cout<<"\n";
		cout<<a[i];
		i++;
	}
	return 0;
}
