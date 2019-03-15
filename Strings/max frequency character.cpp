#include<iostream>
using namespace std;
int main()
{
	char a[1000];
	cin>>a;
	int arr[26]={0};
	for(int i=0;a[i]!='\0';i++)
	{
		arr[a[i]-'a']++;
	}
	int max=0;
	for(int j=1;j<26;j++)
	{
        if(arr[j]>arr[max])
        	max=j;
	}
	int ascii = max+'a';
	cout<<(char)ascii;


	return 0;
}
