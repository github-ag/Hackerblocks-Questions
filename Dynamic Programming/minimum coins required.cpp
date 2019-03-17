//recursive approach
#include<iostream>
#include<limits.h>
using namespace std;
int min_coins(int n,int a[],int size)
{
    if(n==0)
    return 0;
    int ans =INT_MAX;
    for(int i=0;i<size;i++)
    {
        
        if(n-a[i]>=0)
        {
            ans = min(ans,1+min_coins(n-a[i],a,size));

        }
    }
    return ans ;
}
int main()
{
    int n,a[100],s;
    cin>>s;
    for(int i=0;i<s;i++)
    cin>>a[i];
    cin>>n;
    cout<<min_coins(n,a,s);
    return 0;
}



//bottom up approach
#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int min_coins(int n,int s,int a[],int dp[])
{
    for(int i=1;i<=n;i++)
    {
        dp[i]=INT_MAX;
        for(int j=0;j<s;j++)
        {
            if(i-a[j]>=0)
            {
                dp[i]=min(dp[i],1+dp[i-a[j]]);
            }
        }
    }
    return dp[n];

}
int main()
{
    int dp[100];
    int s;
    cin>>s;
    int a[100];
    for(int i=0;i<s;i++)
    cin>>a[i];
    int n;
    cin>>n;
    cout<<min_coins(n,s,a,dp);
    return 0;

}


//top down approach
#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int dp[100];
int min_coins(int n,int s ,int a[])
{
    if(dp[n]!=-1)
    return dp[n];
    if(n==0)
    {
        return dp[n]=0;
    }
    dp[n]=INT_MAX;
    for(int i=0;i<s;i++)
    {
        
        if(n-a[i]>=0)
        {
            dp[n]=min(dp[n],1+min_coins(n-a[i],s,a));

        }
    }
    return dp[n];


}
int main()
{
    
    for(int i=0;i<100;i++)
    dp[i]=-1;
    int s,a[100],n;
    cin>>s;
    for(int i=0;i<s;i++)
    cin>>a[i];
    cin>>n;
    cout<<min_coins(n,s,a);
    return 0;
}
