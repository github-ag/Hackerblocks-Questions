#include<iostream>
using namespace std;
void index(int *a,int n,int ele,int i=0)
{
    if(a[i]==ele)
        cout<<i<<" ";

    if(i==n)
        return ;
     index(a,n,ele,i+1);
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
    index(a,n,m);
    return 0;
}
