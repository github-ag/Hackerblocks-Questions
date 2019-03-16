#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> mp;
    for(long i=0;i<100000;i++)
    {
        mp[i]=-1;

    }
    long n;
    cin>>n;
    long long A[100000];
    int count = 0;
    for(long i=0;i<n;i++)
    {
        cin>>A[i];
        if(mp[A[i]] == -1) // A[i] was not assigned any hash before
        {
            mp[A[i]] = count; // Assigning hash to A[i]
            count++;
            continue;
        }
        for(int j = 0;j<i;j++)
        {
            if(mp[A[j]] > mp[A[i]]) // All the hashes greater than previous hash of A[i] are decremented.
                mp[A[j]]--;
        }
        mp[A[i]] = count - 1; // Assigning a new hash to A[i]
    }
    unordered_map<int,int>mp2;
    for(long i=0;i<100000;i++)
    mp2[i]=-1;
    for(long i=0;i<100000;i++)
    {
        mp2[mp[i]]=i;
    }
    int j=0;
    while(mp2[j]!=-1)
    {
        cout<<mp2[j]<<endl;
        j++;
    }
    return 0;

 }
