#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=0;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>m)
            m=a[i];
    }
    cout<<m;
    return 0;

}
