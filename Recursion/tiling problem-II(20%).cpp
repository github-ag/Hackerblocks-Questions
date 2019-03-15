#include<iostream>
using namespace std;
int dp[1000000]={0};
int brick(int n,int m)
{
    if(dp[n]!=0)
        return dp[n];
    if(n<m)
        return 1;
   // else if(n==m)
     //   return 2;
    int way1=brick(n-1,m);
    int way2=brick(n-m,m);
    dp[n]= way1+way2;
    return dp[n];
}
int main()
{
    int t,m,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m;
        cout<<brick(n,m)<<endl;

    }
    return 0;
}
