#include<iostream>
using namespace std;

//Algorithm - Binary search by recursion.
int Searchit(int *arr,int s,int e)
{
	int mid = (s+e)/2;
	//Base Case
	if(s==mid)
	{
		if(arr[mid+1]>arr[mid])
			return mid+1;
		else
			return mid;
	}
	if(arr[s]<arr[mid])
	{
		int ans = Searchit(arr,mid,e);
		return ans;

	}
	else
	{
		int ans = Searchit(arr,s,mid);
		return ans;
	}
	
		
}
int BinarySearch(int *arr,int s,int e,const int ele)
{
	//Base Case
	if(s>e)
		return -1;
	int mid = (s+e)/2;
	if(arr[mid]==ele)
		return mid;
	if(arr[mid]<ele)
	{
		int ans = BinarySearch(arr,mid+1,e,ele);
		return ans;
	}
	else
	{
		int ans = BinarySearch(arr,s,mid-1,ele);
		return ans;

	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[10];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int ele;
		cin>>ele;

		// Getting the index of the pivot element.
		int idx = Searchit(arr,0,n-1);
		//cout<<idx;
		//cout<<endl;

		//Getting the suitable part of the array.
		if(ele>=arr[0]&&ele<=arr[idx])
		{
			int ans = BinarySearch(arr,0,idx,ele);
			cout<<ans<<endl;
		}
		else
		{
			int ans = BinarySearch(arr,idx+1,n-1,ele);
			cout<<ans<<endl;
		}
		
	}
	return 0;

}
