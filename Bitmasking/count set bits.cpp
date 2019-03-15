#include<iostream>
using namespace std;
int count_bitsEfficient(int n)
{
    int c=0;
    while(n>0)
    {
       n=n&n-1;
       c++;
    }
    return c;
}
int main()
{
	int q,a;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>a;
		cout<<count_bitsEfficient(a)<<endl;

	}
	return 0;
}
