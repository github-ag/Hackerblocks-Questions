#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==target)
                {
                    if(a[i]<a[j])
                    {
                        if(a[i]<a[k])
                        {
                            cout<<a[i]<<", ";
                            if(a[j]<a[k])
                                cout<<a[j]<<" and "<<a[k]<<endl;
                            else
                                cout<<a[k]<<" and "<<a[j]<<endl;
                        }
                        else
                        {
                            cout<<a[k]<<", "<<a[i]<<" and "<<a[j]<<endl;
                        }

                    }
                    else
                    {
                        if(a[j]<a[k])
                        {
                            cout<<a[j]<<", ";
                            if(a[i]<a[k])
                                cout<<a[i]<<" and "<<a[k]<<endl;
                            else
                                cout<<a[k]<<" and "<<a[i]<<endl;
                        }
                        else
                            cout<<a[k]<<", "<<a[j]<<" and "<<a[i]<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
