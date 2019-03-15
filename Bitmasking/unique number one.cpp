#include<iostream>
using namespace std;
int main()
{
    int n,x=0,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        x=x^num;
        
    }
    cout<<num;
    return 0;
}
