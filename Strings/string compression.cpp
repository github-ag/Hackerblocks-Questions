#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int frequency;
	for(int i=0;a[i]!='\0';i++)
	{
		frequency=0;
		cout<<a[i];
		while(a[i+1]==a[i])
		{
			frequency++;
			i++;
		}
		cout<<frequency+1;
		
	}
	return 0;
}
