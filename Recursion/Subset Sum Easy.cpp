// Subset Sum Easy
#include<iostream>
using namespace std;
bool checkSubsetSum(long long *arr,int s,const int e,int sum,int ele)
{
    //Base Case
    if(sum==0&&ele!=0)
    return true;
    if(s==e)
    return false;
    //Recursive Case
    bool without_this_number = checkSubsetSum(arr,s+1,e,sum,ele);
    bool with_this_number = checkSubsetSum(arr,s+1,e,sum+arr[s],ele+1);
    if(without_this_number||with_this_number)
    return true;
    else
    return false;
}
int main()
{
    int t;
    cin>>t;
    int n;
    long long arr[100000];
    
    for(int j=0;j<t;j++)
    {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(checkSubsetSum(arr,0,n,0,0))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    }
    return 0;
}
