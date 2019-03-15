#include<iostream>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
for(int p=0;p<T;p++)
    {cin>>n;
    int a[n],curr_sum=0,max_sum=0;
    for (int j=0;j<n;j++)
        cin>>a[j];
    for(int i=0;i<n;i++)
    {
        curr_sum+=a[i];
        if(curr_sum<0)
        {
            curr_sum=0;

        }
        else{
            if(max_sum<curr_sum)
        {
            max_sum = curr_sum;
        }
        }

    }
    cout<<max_sum<<endl;
    }
    return 0;
}
