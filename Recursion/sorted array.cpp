#include<iostream>
using namespace std;
bool sorted(long long *a,int size,int i=0)
{
	if(i==size-1)
		return true;
	if(a[i+1]>=a[i])
		sorted(a,size,i+1);
	else
		return false;

}
int main()
{
	int n;
	cin>>n;
	long long a[10005];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(sorted(a,n))
		cout<<"true";
	else
		cout<<"false";
	return 0;
}
