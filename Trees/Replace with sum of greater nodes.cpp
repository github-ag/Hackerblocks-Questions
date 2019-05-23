#include<iostream>
#include<algorithm>
using namespace std;
void print(int *arr,int s,int e)
{
    if(s>e)
        return;
    int mid = (s+e)/2;
    cout<<arr[mid]<<" ";
    print(arr,s,mid-1);
    print(arr,mid+1,e);

}
int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ca[10000];
    int fa[10000];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        ca[i]=sum;
    }
    for(int i=0;i<n;i++)
    {
        fa[i] = sum-ca[i]+a[i];
    }
    /*bfor(int i=0;i<n;i++)
        cout<<fa[i]<<" ";
    cout<<endl<<endl;*/
    print(fa,0,n-1);
    return 0;
}
