#include<iostream>
using namespace std;
int index(int *a,int n,int ele)
{
    if(a[n-1]==ele)
        return n-1;

    if(n==0)
        return -1;
    return index(a,n-1,ele);
}
int main()
{
    int a[20],n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    cout<<index(a,n,m);
    return 0;
}
