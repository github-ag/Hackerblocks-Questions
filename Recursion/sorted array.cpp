#include <iostream>

using namespace std;
int ifsorted(int *a,int n)
{
    if(n==1)
        return true;
    else
    {
        if(ifsorted(a,n-1)==true && a[n-2]<a[n-1])
            return true;
        else
            return false;
    }
}

int main()
{
    int a[20],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(ifsorted(a,n)==true)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
