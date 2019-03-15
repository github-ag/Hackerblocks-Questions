#include<iostream>
using namespace std;
int module(long int a,long int b,long int c)
{
	if(b==0)
		return 1;
	return ((a%c)*((module(a,b-1,c))%c))%c;
}
int main()
{
	long int a,b,c;
	cin>>a>>b>>c;
	cout<<module(a,b,c);
	return 0;
}
