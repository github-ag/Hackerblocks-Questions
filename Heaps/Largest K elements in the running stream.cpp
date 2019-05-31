#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
void print(priority_queue<int,vector<int>,greater<int> > pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}
int main()
{
    int no;
    int k;
    cin>>k;
    int cs=0;
    priority_queue<int,vector<int>,greater<int> >pq;
    while(scanf("%d",&no)!=EOF)
    {
        if(no==-1)
        {
            print(pq);//Here we must have to create the function to print the heap.
        }
        if(cs<k)
        {
            pq.push(no);
            cs++;
        }
        else
        {
            if(no>pq.top())
            {
                pq.pop();
                pq.push(no);
            }
        }
        
    }
    return 0;
}
