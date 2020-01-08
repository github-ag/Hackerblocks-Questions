// Quick Sort
#include<iostream>
using namespace std;
int partition(int *arr,int s,int e)
{
    int pivot = arr[e];
    int i = s-1;
    for(int j=s;j<e;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[e],arr[i+1]);
    return (i+1);

}
void quickSort(int *arr,int s,int e)
{
    if(s>=e)
    return;
    int pi = partition(arr,s,e);
    quickSort(arr,s,pi-1);
    quickSort(arr,pi+1,e);
}
int main()
{
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    quickSort(arr,0,n-1);
    //Printing
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
