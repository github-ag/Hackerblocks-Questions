#include<iostream>
using namespace std;
int main()
{
    int T,a[1000000];
    long long int n,i=0,length,max_length=0;
    cin>>T;
    for(int p=0;p<T;p++)
    {
        cin>>n;
        i=0;
        max_length=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        while(i<n)
        {
            length=0;
            while(a[i]<a[i+1])
            {
               
                if(i==n-2)
                {
                    length+=2;
                    i+=2;
                    break;
                }
                 length++;
                 i++;
            }
        
            while(a[i]>a[i+1]&&i<n)
            {
                
                if(i==n-2)
                {
                    length+=2;
                    
                    i+=2;
                    break;
                }
                length++;
                i++;
                if(a[i]<a[i+1])
                length++;
            }
        
            if(length>max_length)
            {
                max_length=length;
            }
        }
        cout<<max_length<<endl;
    }
    return 0;
}
