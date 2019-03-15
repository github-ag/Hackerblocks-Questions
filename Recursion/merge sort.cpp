#include <iostream>

using namespace std;
void merge_arr(long int *a,long int s,long int e)
{
    long int mid=(s+e)/2;
    long int i=s,j=(mid+1),k=s;
    long int temp[200000];
    while(i<=mid&&j<=e)
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    for(int p=s;p<=e;p++)
        a[p]=temp[p];
    return;
}
void merge_sort(long int *a,long int s,long int e)
{
    if(s>=e)
        return;
    long int mid=(s+e)/2;
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    merge_arr(a,s,e);
    return;
}

int main()
{
    long int arr[200000],arr_size;
    cin>>arr_size;
    for(long int i=0;i<arr_size;i++)
        cin>>arr[i];
    merge_sort(arr,0,arr_size-1);
    for(long int j=0;j<arr_size;j++)
        cout<<arr[j]<<" ";
    return 0;
}
