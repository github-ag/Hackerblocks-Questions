#include <iostream>

using namespace std;
int get_ibit(int n,int i)
{
    if((n&(1<<i))==1)
    return 1;
    else
        return 0;
}
void un2(int *a,int n)
{
    int x=a[0];
    for(int i=1;i<n;i++)
        x=x^a[i];
    int pos=0;
    while(x>0)
    {
        if((x&1)==1)
            break;
        else
        {
            x=x>>1;
            pos++;
        }

    }
    int y;
    int j;
    for( j=0;j<n;j++)
    {
        if(get_ibit(a[j],pos))
        {
            y=a[j];
            break;
        }
    }
    for(int q=j+1;q<n;q++)
    {
        if(get_ibit(a[q],pos))
            y=(y^a[q]);
    }
    if(y>(x^y))
    {
      cout<<(x^y)<<" "<<y;
    }
    else
    cout<<y<<" "<<(x^y);
}
int main()
{
    int arr[10000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    un2(arr,n);
    return 0;
}
