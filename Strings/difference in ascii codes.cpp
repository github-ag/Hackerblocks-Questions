#include<iostream>
using namespace std;
int main()
{
	char a[1000];
	cin>>a;
	cout<<a[0];
	int i=1;
	while(a[i]!='\0')
	{
		cout<<(int)a[i]-(int)a[i-1]<<a[i];
		i++;

	}
	return 0;
}
