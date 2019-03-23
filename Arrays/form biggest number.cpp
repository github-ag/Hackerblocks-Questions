#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool compare(string a,string b)
{
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n,compare);
        int number;
        for(int k=0;k<n;k++)
        {
            number=0;
            int len =a[k].length();
            for(int z=0;z<len;z++)
            {
                number=(number*10)+(int(a[k][z])-48);


            }
            cout<<number;
            

        }
        
      
        cout<<endl;
    }
    return 0;
    
}
