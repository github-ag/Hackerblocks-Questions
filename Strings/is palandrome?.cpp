#include<iostream>
using namespace std;
bool is_palandrome(int *arr,int n,int i)
{
	if(i==n/2)
		return true;
	if(is_palandrome(arr,n,i+1)&&arr[i]==arr[n-i-1])
		return true;
	else
		return false;

}
int main()
{
	int a[1000],n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(is_palandrome(a,n,0))
		cout<<"true";
	else
		cout<<"false";
	return 0;
}
